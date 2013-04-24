/****************************************************************************
** Meta object code from reading C++ file 'newcharacter.h'
**
** Created: Wed Apr 24 18:23:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "newcharacter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newcharacter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewCharacter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   43,   13,   13, 0x08,
      78,   43,   13,   13, 0x08,
     108,   43,   13,   13, 0x08,
     138,   43,   13,   13, 0x08,
     176,  168,   13,   13, 0x08,
     193,   13,   13,   13, 0x08,
     201,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewCharacter[] = {
    "NewCharacter\0\0characterCreated(Character*)\0"
    "arg1\0on_sb_chStr_valueChanged(int)\0"
    "on_sb_chDex_valueChanged(int)\0"
    "on_sb_chCon_valueChanged(int)\0"
    "on_sb_chInt_valueChanged(int)\0chClass\0"
    "classPreset(int)\0reset()\0"
    "on_buttonBox_accepted()\0"
};

void NewCharacter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewCharacter *_t = static_cast<NewCharacter *>(_o);
        switch (_id) {
        case 0: _t->characterCreated((*reinterpret_cast< Character*(*)>(_a[1]))); break;
        case 1: _t->on_sb_chStr_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_sb_chDex_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sb_chCon_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_sb_chInt_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->classPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->reset(); break;
        case 7: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NewCharacter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewCharacter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NewCharacter,
      qt_meta_data_NewCharacter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewCharacter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewCharacter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewCharacter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewCharacter))
        return static_cast<void*>(const_cast< NewCharacter*>(this));
    return QDialog::qt_metacast(_clname);
}

int NewCharacter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NewCharacter::characterCreated(Character * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
