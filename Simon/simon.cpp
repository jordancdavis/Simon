#include "simon.h"
#include <QDebug>
Simon::Simon(QObject *parent) : QObject(parent)
{

}
void Simon::Hello(){
    qDebug()<<"YES";
}
