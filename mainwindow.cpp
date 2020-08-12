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

void MainWindow::on_twMain_itemDoubleClicked(QTreeWidgetItem *item, int column)
{

    if(item->parent()) {
        switch(item->parent()->indexOfChild(item))
        {
        case 0: {
            bogosortInit();
            break;
            }
        case 1: {
            bubbleSortInit();
            break;
            }
        case 2: {
            insertionSortInit();
            break;
            }
        case 3: {
            shellSortInit();
            break;
            }
        case 4: {
            treeSortInit();
            break;
            }
        }
    }
}

void MainWindow::bogosortInit()
{
    QPushButton *pb = new QPushButton();
    //this->ui->gridLayoutUser->addWidget(pb);
    this->ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::bubbleSortInit()
{
    QPushButton *pb = new QPushButton();
    //this->ui->gridLayoutUser->addWidget(pb);
    this->ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::insertionSortInit()
{
    QPushButton *pb = new QPushButton();
    this->ui->gridLayoutUser->addWidget(pb);
}

void MainWindow::shellSortInit()
{
    QPushButton *pb = new QPushButton();
    this->ui->gridLayoutUser->addWidget(pb);
}

void MainWindow::treeSortInit()
{
    QPushButton *pb = new QPushButton();
    this->ui->gridLayoutUser->addWidget(pb);
}

