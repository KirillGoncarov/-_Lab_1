#include <iostream>
#include "Rectangle.h"
#include "Human.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
   
    Rectangle a(0, 0, 0, 1, 0, 3);

    Human b("Вася", 2);

    Rectangle a2(0,0,3,1);
    
    bool t = a == a2;
    cout << t << endl;
}

