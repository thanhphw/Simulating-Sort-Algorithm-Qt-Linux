/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sx1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "checked"
QT_MOC_LITERAL(4, 42, 11), // "setLineEdit"
QT_MOC_LITERAL(5, 54, 3), // "stt"
QT_MOC_LITERAL(6, 58, 3), // "num"
QT_MOC_LITERAL(7, 62, 15), // "setLineEditNULL"
QT_MOC_LITERAL(8, 78, 11), // "getLineEdit"
QT_MOC_LITERAL(9, 90, 11), // "counterUpms"
QT_MOC_LITERAL(10, 102, 8), // "delay_ms"
QT_MOC_LITERAL(11, 111, 2), // "ms"
QT_MOC_LITERAL(12, 114, 9), // "TestHello"
QT_MOC_LITERAL(13, 124, 9), // "delay_msr"
QT_MOC_LITERAL(14, 134, 1), // "t"
QT_MOC_LITERAL(15, 136, 26), // "setLineEditBackgroundColor"
QT_MOC_LITERAL(16, 163, 2), // "bk"
QT_MOC_LITERAL(17, 166, 13), // "fastTestFinal"
QT_MOC_LITERAL(18, 180, 1), // "n"
QT_MOC_LITERAL(19, 182, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(20, 214, 4), // "arg1"
QT_MOC_LITERAL(21, 219, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(22, 243, 7) // "SaveLog"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "checked\0setLineEdit\0stt\0num\0setLineEditNULL\0"
    "getLineEdit\0counterUpms\0delay_ms\0ms\0"
    "TestHello\0delay_msr\0t\0setLineEditBackgroundColor\0"
    "bk\0fastTestFinal\0n\0on_comboBox_currentIndexChanged\0"
    "arg1\0on_pushButton_2_clicked\0SaveLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    2,   82,    2, 0x08 /* Private */,
       7,    1,   87,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      15,    2,  101,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,
      21,    1,  112,    2, 0x08 /* Private */,
      22,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setLineEdit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setLineEditNULL((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { int _r = _t->getLineEdit((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->counterUpms(); break;
        case 5: _t->delay_ms((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->TestHello(); break;
        case 7: _t->delay_msr((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->setLineEditBackgroundColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->fastTestFinal((*reinterpret_cast< int(*)>(_a[1]))); break;

        case 11: _t->on_pushButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SaveLog(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
