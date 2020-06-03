#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(int LevelNumber) : LevelNumber(LevelNumber)
{
    //设置固定窗口大小
    setFixedSize(1040, 640);

    //设置标题
    setWindowTitle("游戏界面");

};
MainWindow::~MainWindow(){}

