#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QMessageBox>
#include<QFileInfo>

#include "loginpage.h"
#include "catergory.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_proceed_clicked();

private:
    Ui::MainWindow *ui;
    loginpage *login;
};
#endif // MAINWINDOW_H
