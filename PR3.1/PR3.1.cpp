// Lab_03_1.cpp 
// < Висоцький Володимир > 
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 1
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   double x;
   double y;
   double A;
   double B;
   cout << "x = ";
   cin >> x;
   A = 1 + 9 * x;
   // спосіб 1: розгалуження в скороченій формі
   if (x <= 0)
     B = log(abs(sin(x))) + (x * x * x * x * x * x * x);
   if (0 < x && x <= 3)
      B = cos(abs(x + 1) / 2.) / sin(abs(x + 1) / 2.);
   if (x > 3)
      B = 3*x - (x * x * x * x * x);
   y = A + B;
   cout << "1) y = " << y << endl;

   // спосіб 2: розгалуження в повній формі
   if (x <= 0) {
      B = log(abs(sin(x))) + (x * x * x * x * x * x * x);
   }
   else if (x > 3) {
      B = 3 * x - (x * x * x * x * x);
   }
   else {
      B = cos(abs(x + 1) / 2.) / sin(abs(x + 1) / 2.);
   }
   cout << "2) y = " << y << endl;

   return 0;
}