#include <iostream>
#include "Ex.h"
#include "16.02.2022.h"
int main()
{
    int a[10] = { 1,-2,2,4,-4,-6,6,8,-8,0 };
    print(a, 10);
    int* (*action)(int*, unsigned);
    action = ch(a, 10);
    print(action(a,10), 10);
    //test
}

