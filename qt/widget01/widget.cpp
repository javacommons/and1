#include "widget.h"
#include "ui_widget.h"

#include <QtCore>
#include <QtGui>
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QMessageBox::information(this, tr("タイトル"), tr("メッセージ"));
}
