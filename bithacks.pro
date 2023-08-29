QT       += core gui sql
QT += sql
greaterThan(QT_MAJOR_VERSION, 4  ): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_homepage.cpp \
    adminedit_apt.cpp \
    adminedit_core.cpp \
    adminedit_technical.cpp \
    adminedit_verbal.cpp \
    apt_category.cpp \
    apt_easy_page.cpp \
    catergory.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    admin_homepage.h \
    adminedit_apt.h \
    adminedit_core.h \
    adminedit_technical.h \
    adminedit_verbal.h \
    apt_category.h \
    apt_easy_page.h \
    catergory.h \
    loginpage.h \
    mainwindow.h

FORMS += \
    admin_homepage.ui \
    adminedit_apt.ui \
    adminedit_core.ui \
    adminedit_technical.ui \
    adminedit_verbal.ui \
    apt_category.ui \
    apt_easy_page.ui \
    catergory.ui \
    loginpage.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
