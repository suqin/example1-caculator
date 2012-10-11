#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setNum(double num);
    double caculate(QString op);

public slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();
    void on_pushButton_jia_clicked();
    void on_pushButton_jian_clicked();
    void on_pushButton_cheng_clicked();
    void on_pushButton_chu_clicked();
    void on_pushButton_clear_clicked();
private:
    Ui::MainWindow *ui;
    QString pervious;
};

#endif // MAINWINDOW_H