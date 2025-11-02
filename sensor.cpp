#include <iostream>
#include "sensor.h"
 using namespace std;

 double okuSicaklik(){
     return 25.0 + rand() %10;
 }

 double okuNem(){
     return 40.0 + rand() % 20;
     }
     void kontrolEt(double sicaklik,double nem,bool &alarm,double sicaklikEsik,double nemEsik) {
        if (sicaklik > sicaklikEsik || nem >nemEsik)
        {
           alarm=true;
        }
        
     }
 