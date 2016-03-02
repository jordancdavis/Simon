/****************************************************************************
** Meta object code from reading C++ file 'simonmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Simon/simonmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simonmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimonModel_t {
    QByteArrayData data[15];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimonModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimonModel_t qt_meta_stringdata_SimonModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SimonModel"
QT_MOC_LITERAL(1, 11, 10), // "flashColor"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "flashDone"
QT_MOC_LITERAL(4, 33, 12), // "DisableStart"
QT_MOC_LITERAL(5, 46, 10), // "simonsTurn"
QT_MOC_LITERAL(6, 57, 11), // "playersTurn"
QT_MOC_LITERAL(7, 69, 14), // "updateProgress"
QT_MOC_LITERAL(8, 84, 10), // "RedClicked"
QT_MOC_LITERAL(9, 95, 11), // "BlueClicked"
QT_MOC_LITERAL(10, 107, 13), // "YellowClicked"
QT_MOC_LITERAL(11, 121, 12), // "GreenClicked"
QT_MOC_LITERAL(12, 134, 12), // "StartClicked"
QT_MOC_LITERAL(13, 147, 24), // "flashButtonTimerFinished"
QT_MOC_LITERAL(14, 172, 23) // "flashPauseTimerFinished"

    },
    "SimonModel\0flashColor\0\0flashDone\0"
    "DisableStart\0simonsTurn\0playersTurn\0"
    "updateProgress\0RedClicked\0BlueClicked\0"
    "YellowClicked\0GreenClicked\0StartClicked\0"
    "flashButtonTimerFinished\0"
    "flashPauseTimerFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimonModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    0,   82,    2, 0x06 /* Public */,
       4,    0,   83,    2, 0x06 /* Public */,
       5,    0,   84,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    2,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   91,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x0a /* Public */,
      10,    0,   93,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SimonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimonModel *_t = static_cast<SimonModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flashColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->flashDone(); break;
        case 2: _t->DisableStart(); break;
        case 3: _t->simonsTurn(); break;
        case 4: _t->playersTurn(); break;
        case 5: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->RedClicked(); break;
        case 7: _t->BlueClicked(); break;
        case 8: _t->YellowClicked(); break;
        case 9: _t->GreenClicked(); break;
        case 10: _t->StartClicked(); break;
        case 11: _t->flashButtonTimerFinished(); break;
        case 12: _t->flashPauseTimerFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SimonModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::flashColor)) {
                *result = 0;
            }
        }
        {
            typedef void (SimonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::flashDone)) {
                *result = 1;
            }
        }
        {
            typedef void (SimonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::DisableStart)) {
                *result = 2;
            }
        }
        {
            typedef void (SimonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::simonsTurn)) {
                *result = 3;
            }
        }
        {
            typedef void (SimonModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::playersTurn)) {
                *result = 4;
            }
        }
        {
            typedef void (SimonModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SimonModel::updateProgress)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject SimonModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimonModel.data,
      qt_meta_data_SimonModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimonModel.stringdata0))
        return static_cast<void*>(const_cast< SimonModel*>(this));
    return QObject::qt_metacast(_clname);
}

int SimonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SimonModel::flashColor(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimonModel::flashDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SimonModel::DisableStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SimonModel::simonsTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void SimonModel::playersTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void SimonModel::updateProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
