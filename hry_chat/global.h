#ifndef GLOBAL_H
#define GLOBAL_H
#include<QWidget>
#include<functional>
#include<QStyle>
#include<QRegularExpression>
#include<memory>
#include<iostream>
#include<mutex>
#include<QByteArray>
#include<QNetworkReply>
#include<QJsonObject>
#include<QDebug>
#include<QDir>
#include<QSettings>

//用来刷新qss
extern std::function<void(QWidget*)> repolish;

extern std::function<QString(QString)> xorString;

enum ReqId{
    ID_GET_VERIFY_CODE = 1001, //获取验证码
    ID_REG_USER = 1002, //注册用户
    ID_RESET_PWD = 1003, //重置密码
    ID_LOGIN_USER = 1004, //用户登录
    ID_CHAT_LOGIN = 1005, //登陆聊天服务器
    ID_CHAT_LOGIN_RSP= 1006, //登陆聊天服务器回包
    ID_SEARCH_USER_REQ = 1007, //用户搜索请求
    ID_SEARCH_USER_RSP = 1008, //搜索用户回包
    ID_ADD_FRIEND_REQ = 1009,  //添加好友申请
    ID_ADD_FRIEND_RSP = 1010, //申请添加好友回复
    ID_NOTIFY_ADD_FRIEND_REQ = 1011,  //通知用户添加好友申请
    ID_AUTH_FRIEND_REQ = 1013,  //认证好友请求
    ID_AUTH_FRIEND_RSP = 1014,  //认证好友回复
    ID_NOTIFY_AUTH_FRIEND_REQ = 1015, //通知用户认证好友申请
    ID_TEXT_CHAT_MSG_REQ  = 1017,  //文本聊天信息请求
    ID_TEXT_CHAT_MSG_RSP  = 1018,  //文本聊天信息回复
    ID_NOTIFY_TEXT_CHAT_MSG_REQ = 1019, //通知用户文本聊天信息
};

enum Modules{
    REGISTERMOD=0,
    RESETMOD=1,
    LOGINMOD=2,
};

enum ErrorCodes{
    SUCCESS=0,
    ERR_JSON=1,//json解析失败
    ERR_NETWORK=2,//网络错误
};

extern QString gate_url_prefix;

enum TipErr{
    TIP_SUCCESS = 0,
    TIP_EMAIL_ERR = 1,
    TIP_PWD_ERR = 2,
    TIP_CONFIRM_ERR = 3,
    TIP_PWD_CONFIRM = 4,
    TIP_VARIFY_ERR = 5,
    TIP_USER_ERR = 6
};

enum ClickLbState{
    Normal = 0,
    Selected = 1
};

struct ServerInfo{
    QString Host;
    QString Port;
    QString Token;
    int Uid;
};

enum ChatUIMode{
    SearchMode,// 搜索
    ChatMode,// 聊天
    ContactMode,// 联系
};

enum ListItemType{
    CHAT_USER_ITEM,
    CONTACT_USER_ITEM,
    SEARCH_USER_ITEM,
    ADD_USER_TIP_ITEM,
    INVALID_ITEM,
    GROUP_TIP_ITEM,
    APPLY_FRIEND_ITEM,
    LINE_ITEM,
};

enum class ChatRole
{
    Self,
    Other,
};

struct MsgInfo{
    QString msgFlag;//"text,image,file"
    QString content;//表示文件和图像的url
    QPixmap pixmap;//文件和图片的缩略图
};

// 申请好友界面相关
const int MIN_APPLY_LABEL_ED_LEN = 40;
const QString add_prefix = "添加标签 ";
const int  tip_offset = 5;

// 模拟数据
const std::vector<QString>  strs ={"全体目光向我看齐",
                             "你太baby啦",
                             "装逼让你飞起来！",
                            "我尼玛，爱嫂子",
                            "双击666！"};
const std::vector<QString> heads = {
    ":/res/head_1.jpg",
    ":/res/head_2.jpg",
    ":/res/head_3.jpg",
    ":/res/head_4.jpg",
    ":/res/head_5.jpg"
};
const std::vector<QString> names = {
    "llfc",
    "zack",
    "golang",
    "cpp",
    "java",
    "nodejs",
    "python",
    "rust"
};

#endif // GLOBAL_H
