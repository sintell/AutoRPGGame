/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created: Wed Apr 24 18:23:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "game.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Game[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      26,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,    5,    5,    5, 0x0a,
      56,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Game[] = {
    "Game\0\0showString(QString)\0update()\0"
    "declamation(QString)\0proceed()\0"
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Game *_t = static_cast<Game *>(_o);
        switch (_id) {
        case 0: _t->showString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->declamation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->proceed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Game::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Game::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Game,
      qt_meta_data_Game, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Game::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Game))
        return static_cast<void*>(const_cast< Game*>(this));
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Game::showString(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::update()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
