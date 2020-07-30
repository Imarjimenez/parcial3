

#ifndef PLANETAS_H
#define PLANETAS_H
#include <QGraphicsItem>
#include <QPainter>
#include <QObject>
#include <math.h>
#include <QPainter>
#include <QTimer>
#include <QRectF>
#include <QtGui>
#define G 1


class Planetas : public QObject, public QGraphicsItem
{
    Q_OBJECT


public:

    Planetas();
    Planetas(int r_, int x, int y,int vel_i,int vel_f,int masa);
    float t;

    void F_Atraccion(double _Posx2,double _Posy2,double _Masa2);
    void posicion(double Diftiempo);
    int getR();
    void setR(int radio);
    int getPosx();
    void setPosx(int px);
    int getPosy();
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
public slots:

    void tiempo();

private:
    long double Posx; // posicion en x
    long double Posy; // posicion en y
    long double Velx; // velocidad en x
    long double Vely; //veloccidad en y
    int Radio;
    double Masa; // masa del cuerpo
    double a[2]={0,0};
    double ax; // aceleracion en x
    double ay; // aceleracion en y
    double r; // distancia entre cuerpo 1 y cuerpo 2
    double angulo;
    QTimer *mover;



};

#endif // PLANETAS_H
