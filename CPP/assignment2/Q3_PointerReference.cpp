#include<iostream>
using namespace std;

int main()
{
    int num = 10;

    int *ptr = &num;
    int &ref = num;

    cout<<"Original value "<<num<<endl;

    *ptr = 20;
    cout<<"After pointer change "<<num<<endl;

    ref = 30;
    cout<<"After reference change "<<num<<endl;

    return 0;
}


/*
Q3.2

Pointer stores address while reference is another name of variable.

Pointer can be changed to point another variable but reference cannot.

Pointer can be NULL but reference must always refer to valid variable.
*/