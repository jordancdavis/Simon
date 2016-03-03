/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Simon/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "ColorButtonClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "StartButtonClicked"
QT_MOC_LITERAL(4, 50, 11), // "HintRequest"
QT_MOC_LITERAL(5, 62, 20), // "on_RedButton_clicked"
QT_MOC_LITERAL(6, 83, 21), // "on_BlueButton_clicked"
QT_MOC_LITERAL(7, 105, 23), // "on_YellowButton_clicked"
QT_MOC_LITERAL(8, 129, 22), // "on_GreenButton_clicked"
QT_MOC_LITERAL(9, 152, 22), // "on_StartButton_clicked"
QT_MOC_LITERAL(10, 175, 20), // "flashButtonWithColor"
QT_MOC_LITERAL(11, 196, 13), // "flashComplete"
QT_MOC_LITERAL(12, 210, 21), // "on_HintButton_clicked"
QT_MOC_LITERAL(13, 232, 17), // "makeRestartButton"
QT_MOC_LITERAL(14, 250, 11), // "playersTurn"
QT_MOC_LITERAL(15, 262, 10), // "simonsTurn"
QT_MOC_LITERAL(16, 273, 14), // "updateProgress"
QT_MOC_LITERAL(17, 288, 8), // "gameOver"
QT_MOC_LITERAL(18, 297, 10) // "updateHint"

    },
    "MainWindow\0ColorButtonClicked\0\0"
    "StartButtonClicked\0HintRequest\0"
    "on_RedButton_clicked\0on_BlueButton_clicked\0"
    "on_YellowButton_clicked\0on_GreenButton_clicked\0"
    "on_StartButton_clicked\0flashButtonWithColor\0"
    "flashComplete\0on_HintButton_clicked\0"
    "makeRestartButton\0playersTurn\0simonsTurn\0"
    "updateProgress\0gameOver\0updateHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    0,  102,    2, 0x06 /* Public */,
       4,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  104,    2, 0x08 /* Private */,
       6,    0,  105,    2, 0x08 /* Private */,
       7,    0,  106,    2, 0x08 /* Private */,
       8,    0,  107,    2, 0x08 /* Private */,
       9,    0,  108,    2, 0x08 /* Private */,
      10,    1,  109,    2, 0x08 /* Private */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    2,  117,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    2,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ColorButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->StartButtonClicked(); break;
        case 2: _t->HintRequest(); break;
        case 3: _t->on_RedButton_clicked(); break;
        case 4: _t->on_BlueButton_clicked(); break;
        case 5: _t->on_YellowButton_clicked(); break;
        case 6: _t->on_GreenButton_clicked(); break;
        case 7: _t->on_StartButton_clicked(); break;
        case 8: _t->flashButtonWithColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->flashComplete(); break;
        case 10: _t->on_HintButton_clicked(); break;
        case 11: _t->makeRestartButton(); break;
        case 12: _t->playersTurn(); break;
        case 13: _t->simonsTurn(); break;
        case 14: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->gameOver(); break;
        case 16: _t->updateHint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::ColorButtonClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartButtonClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::HintRequest)) {
                *result = 2;
            }
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::ColorButtonClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::StartButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::HintRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
