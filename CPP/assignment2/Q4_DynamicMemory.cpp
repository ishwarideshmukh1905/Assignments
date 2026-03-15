#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *arr;

    arr = new int[5];

    cout<<"Enter 5 numbers"<<endl;

    for(int i=0;i<5;i++)
        cin>>arr[i];

    cout<<"Values are"<<endl;

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    delete[] arr;


    int *arr2;

    arr2 = (int*) malloc(5 * sizeof(int));

    cout<<"\nEnter again"<<endl;

    for(int i=0;i<5;i++)
        cin>>arr2[i];

    for(int i=0;i<5;i++)
        cout<<arr2[i]<<" ";

    free(arr2);

    return 0;
}


/*
Q4.3

malloc does not call constructor.

new is preferred because it is type safe and calls constructor.

new returns correct pointer type while malloc returns void pointer.

malloc cannot initialize complex objects like class objects.
*/