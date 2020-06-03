#include "startfrom.h"
#include "ui_startfrom.h"
#include "mainwindow.h"

StartFrom::StartFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartFrom)
{
    ui->setupUi(this);
    setWindowTitle("开始界面");

    //关卡数量
    const int NumLe = 3;

    //按钮数组
    QPushButton* btnarr[NumLe] = {ui->pushButton, ui->pushButton_2, ui->pushButton_3};

    for (int i = 0; i < NumLe; i++)
        connect(btnarr[i], &QPushButton::clicked, [=]() //监听所有按钮点击
        {
            MainWindow *mainwindow = new MainWindow(i); //向游戏类中传入对应关卡编号
            mainwindow->show();     //显示窗口
        });

}

StartFrom::~StartFrom()
{
    delete ui;
}
