#ifndef SENSOR_H
#define SENSOR_H

double okuSicaklik();
double okuNem();
void kontrolEt(double sicaklik,double nem,bool &alarm,double sicaklikEsik,double nemEsik);
#endif