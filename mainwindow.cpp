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

    planetas.push_back(new Planetas(20,195,200,0,0,714.28));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(7,270,200,0,-2,1));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(7,120,200,0,2,1));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(7,195,250,2,0,1));scene->addItem(planetas.back());
    planetas.push_back(new Planetas(7,195,150,-2,0,1));scene->addItem(planetas.back());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{

}
