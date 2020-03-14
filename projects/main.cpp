#include <iostream>
#include <string>
#include <time.h>
#include "Allie.cpp"

using namespace std;

int _pv;

int main()
{
    Allie (*epeeiste) = new Allie(100,10);
    Allie (*archer) = new Allie(100, 20);
    Allie (*tank) = new Allie(150, 5);



    return 0;
}

