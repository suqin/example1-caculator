#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked()
{
    setNum(1);

}
void MainWindow::on_pushButton_2_clicked()
{
    setNum(2);

}
void MainWindow::on_pushButton_3_clicked()
{
    setNum(3);

}
void MainWindow::on_pushButton_4_clicked()
{
    setNum(4);

}
void MainWindow::on_pushButton_5_clicked()
{
    setNum(5);

}
void MainWindow::on_pushButton_6_clicked()
{
    setNum(6);

}
void MainWindow::on_pushButton_7_clicked()
{
    setNum(7);

}
void MainWindow::on_pushButton_8_clicked()
{
    setNum(8);

}
void MainWindow::on_pushButton_9_clicked()
{

   setNum(9);
}
void MainWindow::on_pushButton_0_clicked()
{

    setNum(0);
}
void MainWindow::on_pushButton_jia_clicked()
{
    caculate("+");
}
void MainWindow::on_pushButton_jian_clicked()
{
    if(ui->label->text()=="" && ui->lineEdit->text()=="")
        ui->lineEdit->setText("-");
    caculate("-");
}
void MainWindow::on_pushButton_cheng_clicked()
{
    caculate("*");
}
void MainWindow::on_pushButton_chu_clicked()
{
    caculate("/");
}
double MainWindow::caculate(QString op)
{
    QString resault;
    double num1=ui->label->text().toDouble();
    double num2=ui->lineEdit->text().toDouble();
    if(ui->label->text()=="")
    {
        ui->label->setText(ui->lineEdit->text());
        ui->lineEdit->clear();
        pervious=op;
    }
    else
    {
        if(pervious=="+")
            resault = QString("%1").arg(num1+num2 );
        if(pervious=="-")
            resault = QString("%1").arg(num1-num2 );
        if(pervious=="*")
            resault = QString("%1").arg(num1*num2 );
        if(pervious=="/")
            resault = QString("%1").arg( num1/num2);
        pervious=op;
        ui->label->setText(resault);
        ui->lineEdit->clear();
    }
}
void MainWindow::setNum(double num)
{
    QString str;
    double temp=0;
    str=ui->lineEdit->text();
    if(str=="")
    {
        temp=num;
    }
    else
    {
        if(str=="-")
            temp=str.toDouble()*(-10)+num;  //nagative
        else
            temp=str.toDouble()*10+num;
    }
    str = QString("%1").arg(temp);
    ui->lineEdit->setText(str);
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->label->setText("");
    ui->lineEdit->setText("");
    pervious="";
}

MainWindow::~MainWindow()
{
    delete ui;
}
