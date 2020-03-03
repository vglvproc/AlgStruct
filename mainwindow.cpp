#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTreeWidgetItem* sortNode = new QTreeWidgetItem(ui->twMain);
    sortNode->setText(0, tr("Sorting algorithms"));

    QTreeWidgetItem* bogosortNode = new QTreeWidgetItem(sortNode);
    bogosortNode->setText(0, tr("Bogosort"));

    QTreeWidgetItem* bubbleNode = new QTreeWidgetItem(sortNode);
    bubbleNode->setText(0, tr("Bubble sort"));

    QTreeWidgetItem* insertionNode = new QTreeWidgetItem(sortNode);
    insertionNode->setText(0, tr("Insertion sort"));

    QTreeWidgetItem* shellNode = new QTreeWidgetItem(sortNode);
    shellNode->setText(0, tr("Shell sort"));

    QTreeWidgetItem* treeNode = new QTreeWidgetItem(sortNode);
    treeNode->setText(0, tr("Tree sort"));

    ui->twMain->setHeaderLabel(tr("Algorithms and data structures"));
    ui->twMain->setFont(QFont("Times", 12));
    ui->twMain->expandAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}
