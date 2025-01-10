#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include <QListWidget>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setVisible(false);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    if (ui->label_4->isVisible() == false)
    {
        ui->label_4->setVisible(true);
        ui->label_4->setText(item->text());
    }
    else
    {
        if(ui->label_5->isVisible() == false)
        {
            ui->label_5->setVisible(true);
            ui->label_5->setText(item->text());
            ui->pushButton_3->setVisible(true);
        }
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if (ui->label_7->text() == "Ćwierćfinał")
    {
        ui->label_7->setText("Półfinał");
        ui->pushButton->setVisible(true);
    }
    else if (ui->label_7->text() == "Półfinał")
    {
        ui->label_7->setText("Finał");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(false);
    }
}


void MainWindow::on_pushButton_clicked()
{
    if (ui->label_7->text() == "Półfinał")
    {
        ui->label_7->setText("Ćwierćfinał");
        ui->pushButton->setVisible(false);
        ui->pushButton_2->setVisible(true);
    }
    else if (ui->label_7->text() == "Finał")
    {
        ui->label_7->setText("Półfinał");
        ui->pushButton_2->setVisible(true);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->label_4->setText("");
    ui->label_4->setVisible(false);
    ui->label_5->setText("");
    ui->label_5->setVisible(false);
    ui->label_7->setText("Ćwierćfinał");
    ui->pushButton_2->setVisible(true);
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->label_9->setText("");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox box;
    if (rand() % 2)
    {
        box.setText(ui->label_4->text());
        box.exec();
    }
    else
    {
        box.setText(ui->label_5->text());
        box.exec();
    }
}

class MyLabel
{
    QStringList l;
public:
    void setLabel(QStringList)
    {

    }
};

