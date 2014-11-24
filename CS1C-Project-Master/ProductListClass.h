    #ifndef PRODUCTLISTCLASS_H
#define PRODUCTLISTCLASS_H


#include "Productclass.h"
#include "genericnodeclass.h"
#include "activatedlist.h"
/**************************************************************************
 * 							[L I S T ~ C L A S S]
 **************************************************************************/


class ProductList
{
/**************************************************************************
 * P R I V A T E
 * ------------------------------------------------------------------------
 * The private section begins here
 **************************************************************************/
private:
    //M E M B E R ~ D E C L A R A T I O N S

    Node<Product>*          _head;
    Node<Product>*          _tail;
    Node<Product>*          _ptr;
    int      		  	 	_nodeCount;
    int 			  		_listLimit;

/**************************************************************************
 * P U B L I C
 * ------------------------------------------------------------------------
 * The public section begins here
 **************************************************************************/
public:

/*******************
 * M U T A T O R S *
 *******************/
    /**********************************************************************
     * C O N S T R U C T O R
     * --------------------------------------------------------------------
     * Constructs an object and initializes
     **********************************************************************/
    ProductList();

    /**********************************************************************
     * D E S T R U C T O R
     * --------------------------------------------------------------------
     * Destructs a list
     **********************************************************************/
    ~ProductList();
    /**********************************************************************
     * Enqueue
     * --------------------------------------------------------------------
     * Adds a node to the end of the list
     **********************************************************************/
    void Enqueue(Product data);


    /**********************************************************************
     * Dequeue
     * --------------------------------------------------------------------
     * Removes the first node from the list
     **********************************************************************/
    void Dequeue();


    /**********************************************************************
     * IncrementCount
     * --------------------------------------------------------------------
     * This method will increment the _nodeCount by one
     **********************************************************************/
    void IncrementCount();

    /**********************************************************************
     * DecrementCount
     * --------------------------------------------------------------------
     * This method will Decrement the _nodeCount by one
     **********************************************************************/
    void DecrementCount();

//	/**********************************************************************
//	 * CreateObject
//	 * --------------------------------------------------------------------
//	 * This method will create an object and fill it with data
//	 **********************************************************************/
//	Node<Product>* CreateObject( data);

    /**********************************************************************
     * clearList
     * --------------------------------------------------------------------
     * This method will clear the entire list
     ***********************************************************************/
    void ClearList();



/*********************
 * A C C E S S O R S *
 *********************/
    /**********************************************************************
     * Front
     * --------------------------------------------------------------------
     * Returns the
     **********************************************************************/
    Product Front() const;

    /**********************************************************************
     * Size
     * --------------------------------------------------------------------
     * This method will return the size of the list
     **********************************************************************/
    int      Size() const;

    /**********************************************************************
     * IsEmpty
     * --------------------------------------------------------------------
     * This method will check to see if the list is Empty
     **********************************************************************/
    bool     isEmpty() const;

    /**********************************************************************
     * isFull
     * --------------------------------------------------------------------
     * This method will check to see if the list is full
     **********************************************************************/
    bool     isFull() const;

    /**********************************************************************
     * OutputList
     * --------------------------------------------------------------------
     * This method will return a QString containing the list
     **********************************************************************/
    QString   OutputList() const;

    void    RemoveProduct(Product &someProduct);
    Product FindProduct(QString userName) ;
    QString operator[](int index);


};


#endif // PRODUCTLISTCLASS_H
