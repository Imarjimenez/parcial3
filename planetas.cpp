#include "planetas.h"

Planetas::Planetas()
{

}

Planetas::Planetas(int r_, int x, int y,int vel_x,int vel_y,double masa)
{
    Radio = r_;
    Posx = x;
    Posy = y;
    Velx=vel_x;
    Vely=vel_y;
    Masa=masa;
     // angulo entre cuerpo 1 y cuerpo 2
    setPos(Posx,Posy);

    QTimer *mover=new QTimer(this);
    connect(mover,SIGNAL(timeout()),this,SLOT(tiempo()));

    mover->start(1000);


}

void Planetas::F_Atraccion(double _Posx2, double _Posy2, double _Masa2){






}
int Planetas::getR()
{
    return Radio;
}

void Planetas::setR(int radio)
{
    Radio = radio;
}
int Planetas::getPosx()
{
    return Posx;
}

void Planetas::setPosx(int px)
{
    Posx=px;
}

int Planetas::getPosy()
{
    return Posy;
}

void Planetas::setPosy(int py)
{
    Posy = py;
}

QRectF Planetas::boundingRect() const
{
    return QRectF(-Radio,-Radio,2*Radio,2*Radio);
}

void Planetas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::green);
    painter->drawEllipse(boundingRect());
}

void Planetas::tiempo()
{

    Posx=Posx+(Velx*t)+((a[0]*(t*t))/2);
    Posy=Posy+(Vely*t)+((a[1]*(t*t))/2); //calculo de posiciones en x e y
    Velx=Velx+(a[0]*t);
    Vely=Vely+(a[1]*t); //calculo de la velocidad con la que termina en la posicion x e y
//    r=pow((pow((_Posx2-Posx),2)+pow((_Posy2-Posy),2)),1/2); // distancia entre cuerpo 1 y cuerpo 2
//    angulo= atan2((_Posy2-Posy),(_Posx2-Posx)); // angulo comprendido entre un cuerpo 1 y cuerpo 2
//    ax=ax + (((G*_Masa2)/(r*r))*cos(angulo)); // calculo de aceleracion en x
//    ay=ay + (((G*_Masa2)/(r*r))*sin(angulo)); // calculo de aceleracion en y
//    a[0]+=ax;
//    a[1]+=ay;

    setPos(Posx,Posy);
    t++;


}





