#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;

    scene->setSceneRect(0,0,400,400);
    ui->graphicsView->setScene(scene);

    planetas.push_back(new Planetas(10,270,200,40,40,2));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(10,195,200,40,40,2));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(10,120,200,40,40,2));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(10,195,250,40,40,2));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(10,195,150,40,40,2));scene->addItem(planetas.back());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{

}
