#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sensor.h"


 using namespace std;

 int main(){

srand(time(0));

double sicaklikEsik=30.0;
double nemEsik=50.0;
bool alarm=false;

double sicaklik=okuSicaklik();
double nem=okuNem();

cout<<"sicaklik:"<<sicaklik<<" derece"<<endl;
cout<<"nem:"<<nem<<" %"<<endl;
kontrolEt(sicaklik,nem,alarm,sicaklikEsik,nemEsik);
if (alarm)
{
cout<<"eşik değeler anlaşıldı."<<endl;

}else {cout<<"esistem normal çalışıyor."<<endl;}

return 0;
 }