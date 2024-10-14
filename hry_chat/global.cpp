#include"global.h"

QString gate_url_prefix="";

extern std::function<void(QWidget*)> repolish=[](QWidget* w){
    w->style()->unpolish(w);
    w->style()->polish(w);
};
