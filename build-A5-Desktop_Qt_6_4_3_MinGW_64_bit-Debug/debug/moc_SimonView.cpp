/****************************************************************************
** Meta object code from reading C++ file 'SimonView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../A5/SimonView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimonView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SimonView_t {
    uint offsetsAndSizes[22];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[22];
    char stringdata7[25];
    char stringdata8[27];
    char stringdata9[26];
    char stringdata10[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SimonView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SimonView_t qt_meta_stringdata_SimonView = {
    {
        QT_MOC_LITERAL(0, 9),  // "SimonView"
        QT_MOC_LITERAL(10, 15),  // "resetPlayButton"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 17),  // "changeButtonColor"
        QT_MOC_LITERAL(45, 13),  // "enableButtons"
        QT_MOC_LITERAL(59, 14),  // "disableButtons"
        QT_MOC_LITERAL(74, 21),  // "on_playButton_clicked"
        QT_MOC_LITERAL(96, 24),  // "on_leftRedButton_pressed"
        QT_MOC_LITERAL(121, 26),  // "on_rightBlueButton_pressed"
        QT_MOC_LITERAL(148, 25),  // "on_leftRedButton_released"
        QT_MOC_LITERAL(174, 27)   // "on_rightBlueButton_released"
    },
    "SimonView",
    "resetPlayButton",
    "",
    "changeButtonColor",
    "enableButtons",
    "disableButtons",
    "on_playButton_clicked",
    "on_leftRedButton_pressed",
    "on_rightBlueButton_pressed",
    "on_leftRedButton_released",
    "on_rightBlueButton_released"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SimonView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       4,    0,   72,    2, 0x08,    4 /* Private */,
       5,    0,   73,    2, 0x08,    5 /* Private */,
       6,    0,   74,    2, 0x08,    6 /* Private */,
       7,    0,   75,    2, 0x08,    7 /* Private */,
       8,    0,   76,    2, 0x08,    8 /* Private */,
       9,    0,   77,    2, 0x08,    9 /* Private */,
      10,    0,   78,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SimonView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SimonView.offsetsAndSizes,
    qt_meta_data_SimonView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SimonView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimonView, std::true_type>,
        // method 'resetPlayButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeButtonColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'enableButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disableButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leftRedButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rightBlueButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leftRedButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rightBlueButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SimonView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimonView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetPlayButton(); break;
        case 1: _t->changeButtonColor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->enableButtons(); break;
        case 3: _t->disableButtons(); break;
        case 4: _t->on_playButton_clicked(); break;
        case 5: _t->on_leftRedButton_pressed(); break;
        case 6: _t->on_rightBlueButton_pressed(); break;
        case 7: _t->on_leftRedButton_released(); break;
        case 8: _t->on_rightBlueButton_released(); break;
        default: ;
        }
    }
}

const QMetaObject *SimonView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimonView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SimonView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
