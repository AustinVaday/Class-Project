#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "helpwindow.h"
namespace Ui {
class AdminWindow;

}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

signals:
    void clicked();

    void adminAccess();

public slots:

    void on_modify_help_options_clicked();


private slots:
    void on_user_name_label_linkActivated(const QString &link);

    void on_back_button_clicked();

    void on_view_activated_customers_clicked();

    void on_actionHelp_triggered();


private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
