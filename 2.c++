#include <iostream>
#include <conio>
#include <math.h>
using namespace std;
int main() {

 float p,r , t , si , ci;
 p = 1000;
 r = 5;
 t = 3;
 si = (p*r*t)/100;
 ci = p*pow(1+r/100),t )-p;
 cout<<"simple interest is "<<si;
 cout<<"compound interest is "<<ci
 return 0;
}