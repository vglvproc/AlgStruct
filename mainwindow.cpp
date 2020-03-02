#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTreeWidgetItem* sortNode = new QTreeWidgetItem(ui->twMain);
    sortNode->setText(0, QString("Алгоритмы сортировки"));

    QTreeWidgetItem* bogosortNode = new QTreeWidgetItem(sortNode);
    bogosortNode->setText(0, QString("Случайная сортировка"));

    QTreeWidgetItem* bubbleNode = new QTreeWidgetItem(sortNode);
    bubbleNode->setText(0, QString("Пузырьковая сортировка"));

    QTreeWidgetItem* insertionNode = new QTreeWidgetItem(sortNode);
    insertionNode->setText(0, QString("Сортировка вставками"));

    QTreeWidgetItem* shellNode = new QTreeWidgetItem(sortNode);
    shellNode->setText(0, QString("Сортировка Шелла"));

    QTreeWidgetItem* treeNode = new QTreeWidgetItem(sortNode);
    treeNode->setText(0, QString("Сортировка двоичным деревом"));

    ui->twMain->setHeaderLabel(QString("Алгоритмы и структуры данных"));
    ui->twMain->setFont(QFont("Times", 12));
    ui->twMain->expandAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}
