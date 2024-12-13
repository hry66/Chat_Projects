/****************************************************************************
** Meta object code from reading C++ file 'chatdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatDialog_t {
    QByteArrayData data[20];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatDialog_t qt_meta_stringdata_ChatDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ChatDialog"
QT_MOC_LITERAL(1, 11, 22), // "slot_loading_chat_user"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "slot_loading_contact_user"
QT_MOC_LITERAL(4, 61, 14), // "slot_side_chat"
QT_MOC_LITERAL(5, 76, 17), // "slot_side_contact"
QT_MOC_LITERAL(6, 94, 17), // "slot_text_changed"
QT_MOC_LITERAL(7, 112, 1), // "s"
QT_MOC_LITERAL(8, 114, 17), // "slot_apply_friend"
QT_MOC_LITERAL(9, 132, 31), // "std::shared_ptr<AddFriendApply>"
QT_MOC_LITERAL(10, 164, 5), // "apply"
QT_MOC_LITERAL(11, 170, 20), // "slot_add_auth_friend"
QT_MOC_LITERAL(12, 191, 25), // "std::shared_ptr<AuthInfo>"
QT_MOC_LITERAL(13, 217, 9), // "auth_info"
QT_MOC_LITERAL(14, 227, 13), // "slot_auth_rsp"
QT_MOC_LITERAL(15, 241, 24), // "std::shared_ptr<AuthRsp>"
QT_MOC_LITERAL(16, 266, 8), // "auth_rsp"
QT_MOC_LITERAL(17, 275, 19), // "slot_jump_chat_item"
QT_MOC_LITERAL(18, 295, 27), // "std::shared_ptr<SearchInfo>"
QT_MOC_LITERAL(19, 323, 2) // "si"

    },
    "ChatDialog\0slot_loading_chat_user\0\0"
    "slot_loading_contact_user\0slot_side_chat\0"
    "slot_side_contact\0slot_text_changed\0"
    "s\0slot_apply_friend\0std::shared_ptr<AddFriendApply>\0"
    "apply\0slot_add_auth_friend\0"
    "std::shared_ptr<AuthInfo>\0auth_info\0"
    "slot_auth_rsp\0std::shared_ptr<AuthRsp>\0"
    "auth_rsp\0slot_jump_chat_item\0"
    "std::shared_ptr<SearchInfo>\0si"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      14,    1,   72,    2, 0x0a /* Public */,
      17,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void ChatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_loading_chat_user(); break;
        case 1: _t->slot_loading_contact_user(); break;
        case 2: _t->slot_side_chat(); break;
        case 3: _t->slot_side_contact(); break;
        case 4: _t->slot_text_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slot_apply_friend((*reinterpret_cast< std::shared_ptr<AddFriendApply>(*)>(_a[1]))); break;
        case 6: _t->slot_add_auth_friend((*reinterpret_cast< std::shared_ptr<AuthInfo>(*)>(_a[1]))); break;
        case 7: _t->slot_auth_rsp((*reinterpret_cast< std::shared_ptr<AuthRsp>(*)>(_a[1]))); break;
        case 8: _t->slot_jump_chat_item((*reinterpret_cast< std::shared_ptr<SearchInfo>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ChatDialog.data,
    qt_meta_data_ChatDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
