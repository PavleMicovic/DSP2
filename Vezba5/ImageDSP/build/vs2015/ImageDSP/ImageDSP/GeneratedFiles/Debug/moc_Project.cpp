/****************************************************************************
** Meta object code from reading C++ file 'Project.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/Project.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Project_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Project_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Project_t qt_meta_stringdata_Project = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Project"
QT_MOC_LITERAL(1, 8, 19), // "imageProcessingDone"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "save"
QT_MOC_LITERAL(4, 34, 18), // "currentProgChanged"
QT_MOC_LITERAL(5, 53, 5), // "index"
QT_MOC_LITERAL(6, 59, 19), // "currentInImgChanged"
QT_MOC_LITERAL(7, 79, 11), // "dataChanged"
QT_MOC_LITERAL(8, 91, 7), // "topLeft"
QT_MOC_LITERAL(9, 99, 11) // "bottomRight"

    },
    "Project\0imageProcessingDone\0\0save\0"
    "currentProgChanged\0index\0currentInImgChanged\0"
    "dataChanged\0topLeft\0bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Project[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       7,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    8,    9,

       0        // eod
};

void Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Project *_t = static_cast<Project *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageProcessingDone(); break;
        case 1: _t->save(); break;
        case 2: _t->currentProgChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->currentInImgChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Project::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Project::imageProcessingDone)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Project::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Project.data,
      qt_meta_data_Project,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Project::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Project.stringdata0))
        return static_cast<void*>(const_cast< Project*>(this));
    return QObject::qt_metacast(_clname);
}

int Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Project::imageProcessingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
