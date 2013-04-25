/****************************************************************************
** Meta object code from reading C++ file 'autorpg.h'
**
** Created: Thu Apr 25 00:58:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "autorpg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorpg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoRpg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      22,    8,    8,    8, 0x08,
      60,   57,    8,    8, 0x08,
      82,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AutoRpg[] = {
    "AutoRpg\0\0updateData()\0"
    "on_actionNew_character_triggered()\0"
    "ch\0startGame(Character*)\0"
    "on_actionGenerate_name_triggered()\0"
};

void AutoRpg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoRpg *_t = static_cast<AutoRpg *>(_o);
        switch (_id) {
        case 0: _t->updateData(); break;
        case 1: _t->on_actionNew_character_triggered(); break;
        case 2: _t->startGame((*reinterpret_cast< Character*(*)>(_a[1]))); break;
        case 3: _t->on_actionGenerate_name_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutoRpg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoRpg::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AutoRpg,
      qt_meta_data_AutoRpg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoRpg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoRpg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoRpg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoRpg))
        return static_cast<void*>(const_cast< AutoRpg*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AutoRpg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
