/****************************************************************************
** Meta object code from reading C++ file 'landmarkpoint.h'
**
** Created: Thu Dec 3 23:59:45 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/landmarkpoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'landmarkpoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_landmarkPoint[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_landmarkPoint[] = {
    "landmarkPoint\0"
};

const QMetaObject landmarkPoint::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_landmarkPoint,
      qt_meta_data_landmarkPoint, 0 }
};

const QMetaObject *landmarkPoint::metaObject() const
{
    return &staticMetaObject;
}

void *landmarkPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_landmarkPoint))
        return static_cast<void*>(const_cast< landmarkPoint*>(this));
    return QLabel::qt_metacast(_clname);
}

int landmarkPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
