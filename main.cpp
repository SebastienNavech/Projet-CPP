#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Monde.h"
using namespace std;

int main()
{
    srand((time(NULL)));

    Monde* Chine;
    Chine = new Monde();
    cout << "YOUHOU"<<endl;

    return 0;
}
