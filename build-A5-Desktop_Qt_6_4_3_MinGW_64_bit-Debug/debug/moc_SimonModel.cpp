/****************************************************************************
** Meta object code from reading C++ file 'SimonModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../A5/SimonModel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimonModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_SimonModel_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[8];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[12];
    char stringdata10[18];
    char stringdata11[14];
    char stringdata12[15];
    char stringdata13[15];
    char stringdata14[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SimonModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SimonModel_t qt_meta_stringdata_SimonModel = {
    {
        QT_MOC_LITERAL(0, 10),  // "SimonModel"
        QT_MOC_LITERAL(11, 12),  // "updateButton"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 14),  // "updateProgress"
        QT_MOC_LITERAL(40, 11),  // "updateScore"
        QT_MOC_LITERAL(52, 9),  // "startTurn"
        QT_MOC_LITERAL(62, 7),  // "endTurn"
        QT_MOC_LITERAL(70, 8),  // "resetAll"
        QT_MOC_LITERAL(79, 10),  // "leftKeyHit"
        QT_MOC_LITERAL(90, 11),  // "rightKeyHit"
        QT_MOC_LITERAL(102, 17),  // "startComputerTurn"
        QT_MOC_LITERAL(120, 13),  // "flashButtonOn"
        QT_MOC_LITERAL(134, 14),  // "flashButtonOff"
        QT_MOC_LITERAL(149, 14),  // "onRedButtonHit"
        QT_MOC_LITERAL(164, 15)   // "onBlueButtonHit"
    },
    "SimonModel",
    "updateButton",
    "",
    "updateProgress",
    "updateScore",
    "startTurn",
    "endTurn",
    "resetAll",
    "leftKeyHit",
    "rightKeyHit",
    "startComputerTurn",
    "flashButtonOn",
    "flashButtonOff",
    "onRedButtonHit",
    "onBlueButtonHit"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SimonModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       3,    1,   95,    2, 0x06,    3 /* Public */,
       4,    1,   98,    2, 0x06,    5 /* Public */,
       5,    0,  101,    2, 0x06,    7 /* Public */,
       6,    0,  102,    2, 0x06,    8 /* Public */,
       7,    0,  103,    2, 0x06,    9 /* Public */,
       8,    0,  104,    2, 0x06,   10 /* Public */,
       9,    0,  105,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  106,    2, 0x0a,   12 /* Public */,
      11,    1,  107,    2, 0x0a,   13 /* Public */,
      12,    1,  110,    2, 0x0a,   15 /* Public */,
      13,    0,  113,    2, 0x0a,   17 /* Public */,
      14,    0,  114,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SimonModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SimonModel.offsetsAndSizes,
    qt_meta_data_SimonModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SimonModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimonModel, std::true_type>,
        // method 'updateButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'startTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'leftKeyHit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rightKeyHit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startComputerTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flashButtonOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'flashButtonOff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRedButtonHit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBlueButtonHit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SimonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimonModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->updateScore((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->startTurn(); break;
        case 4: _t->endTurn(); break;
        case 5: _t->resetAll(); break;
        case 6: _t->leftKeyHit(); break;
        case 7: _t->rightKeyHit(); break;
        case 8: _t->startComputerTurn(); break;
        case 9: _t->flashButtonOn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->flashButtonOff((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->onRedButtonHit(); break;
        case 12: _t->onBlueButtonHit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimonModel::*)(QString );
            if (_t _q_method = &SimonModel::updateButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)(int );
            if (_t _q_method = &SimonModel::updateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)(QString );
            if (_t _q_method = &SimonModel::updateScore; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::startTurn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::endTurn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::resetAll; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::leftKeyHit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::rightKeyHit; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *SimonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimonModel.stringdata0))
        return static_cast<void*>(this);
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SimonModel::updateButton(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimonModel::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimonModel::updateScore(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimonModel::startTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SimonModel::endTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SimonModel::resetAll()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SimonModel::leftKeyHit()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SimonModel::rightKeyHit()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
