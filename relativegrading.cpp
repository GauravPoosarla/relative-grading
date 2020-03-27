#include <iostream>
#include<cmath>
using namespace std;
class Marks {
 public:
  float cat1;
  float cat2;
  float quiz1;
  float quiz2;
  float da;
  float fat;
  static float allMarks;
  static float standardDev;
  static float average;
  static float c;
  static float total;
  float final();
  Marks();
  Marks(float a, float b, float c, float d, float e, float f);
};
float Marks::allMarks = 0.0;
float Marks::standardDev=0.0;
float Marks::c=0.0;
float Marks::total=0.0;
float Marks::average=0.0;
Marks::Marks() {
  this->cat1 = 0;
  this->cat2 = 0;
  this->quiz1 = 0;
  this->quiz2 = 0;
  this->da = 0;
  this->fat = 0;
}
Marks::Marks(float a, float b, float c, float d, float e, float f) {
  this->cat1 = a;
  this->cat2 = b;
  this->quiz1 = c;
  this->quiz2 = d;
  this->da = e;
  this->fat = f;
  Marks::allMarks = Marks::allMarks + ((cat1 * 0.33) + (cat2 * 0.33) + (fat * 0.4) +da + quiz1 + quiz2);
  Marks::allMarks = (Marks::allMarks)/5;
  Marks::total=((cat1 * 0.33) + (cat2 * 0.33) + (fat * 0.4) +da + quiz1 + quiz2);
  Marks::standardDev=Marks::standardDev+(sqrt(Marks::total-Marks::allMarks)/5);
}
float Marks::final()
{
    Marks::c=((cat1 * 0.33) + (cat2 * 0.33) + (fat * 0.4) +da + quiz1 + quiz2);
    return Marks::c;
}


int main() 
{
    Marks M(26,41,6,9,8,80), N(46, 48, 9, 10, 8, 85),O(32, 39, 10, 10, 10, 65), P(33, 40, 10, 10, 10, 95),Q(39, 31, 9, 10, 10, 59);
    if(M.fat==0)
    {
        cout<<"N grade";
    }
    else if(M.final()>Marks::allMarks+1.5*(Marks::standardDev))
    {
        cout<<"S grade";
    }
    else if(M.final()<=Marks::allMarks+1.5*(Marks::standardDev)&&M.final()>Marks::allMarks+0.5*(Marks::standardDev))
    {
        cout<<"A grade";
    }
    else if(M.final()<=Marks::allMarks+0.5*(Marks::standardDev)&&M.final()>Marks::allMarks-0.5*(Marks::standardDev))
    {
        cout<<"B grade";
    }
    else if(M.final()<=Marks::allMarks-0.5*(Marks::standardDev)&&M.final()>Marks::allMarks-1.0*(Marks::standardDev))
    {
        cout<<"C grade";
    }
    else if(M.final()<=Marks::allMarks-1.0*(Marks::standardDev)&&M.final()>Marks::allMarks-1.5*(Marks::standardDev))
    {
        cout<<"D grade";
    }
    else if(M.final()<=Marks::allMarks-1.5*(Marks::standardDev)&&M.final()>Marks::allMarks-2.0*(Marks::standardDev))
    {
        cout<<"E grade";
    }
    else if(M.final()<Marks::allMarks-2.0*(Marks::standardDev))
    {
        cout<<"F grade";
    }  
}
