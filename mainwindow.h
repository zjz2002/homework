#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMouseEvent>  //鼠标事件
#include <QLabel>

class MainWindow : public QWidget
{
//    Q_OBJECT
private:
    const int LevelNumber;      //标识关卡
public:
    MainWindow(int);            //构造
    ~MainWindow();
};

#endif  //MAINWINDOW_H
