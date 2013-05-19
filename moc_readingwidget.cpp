/****************************************************************************
** Meta object code from reading C++ file 'readingwidget.h'
**
** Created: Sun May 19 15:10:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "readingwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_readingwidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      37,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_readingwidget[] = {
    "readingwidget\0\0updatereadingwidget()\0"
    "startslot()\0stopslot()\0"
};

void readingwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        readingwidget *_t = static_cast<readingwidget *>(_o);
        switch (_id) {
        case 0: _t->updatereadingwidget(); break;
        case 1: _t->startslot(); break;
        case 2: _t->stopslot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData readingwidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject readingwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_readingwidget,
      qt_meta_data_readingwidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &readingwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *readingwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *readingwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_readingwidget))
        return static_cast<void*>(const_cast< readingwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int readingwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
