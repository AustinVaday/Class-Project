/****************************************************************************
** Meta object code from reading C++ file 'MainProgramWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Class-Project/CS1C-Project-Master/MainProgramWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainProgramWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainProgramWindow_t {
    QByteArrayData data[8];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainProgramWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainProgramWindow_t qt_meta_stringdata_MainProgramWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MainProgramWindow"
QT_MOC_LITERAL(1, 18, 7), // "clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 26), // "on_pushButton_Help_clicked"
QT_MOC_LITERAL(4, 54, 22), // "on_exitProgram_clicked"
QT_MOC_LITERAL(5, 77, 14), // "showHelpWindow"
QT_MOC_LITERAL(6, 92, 27), // "on_pushButton_Login_clicked"
QT_MOC_LITERAL(7, 120, 23) // "on_actionHelp_triggered"

    },
    "MainProgramWindow\0clicked\0\0"
    "on_pushButton_Help_clicked\0"
    "on_exitProgram_clicked\0showHelpWindow\0"
    "on_pushButton_Login_clicked\0"
    "on_actionHelp_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainProgramWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainProgramWindow *_t = static_cast<MainProgramWindow *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->on_pushButton_Help_clicked(); break;
        case 2: _t->on_exitProgram_clicked(); break;
        case 3: _t->showHelpWindow(); break;
        case 4: _t->on_pushButton_Login_clicked(); break;
        case 5: _t->on_actionHelp_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainProgramWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainProgramWindow::clicked)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainProgramWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainProgramWindow.data,
      qt_meta_data_MainProgramWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainProgramWindow.stringdata))
        return static_cast<void*>(const_cast< MainProgramWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainProgramWindow::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
