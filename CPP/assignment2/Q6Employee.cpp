#include<iostream>
using namespace std;

class Employee
{
    const int empId;
    string name;
    float salary;

public:

    Employee(int id, string n, float s) : empId(id), name(n), salary(s)
    {
    }

    void show()
    {
        cout<<"Id "<<empId<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Salary "<<salary<<endl;
    }
};

int main()
{
    Employee e1(101,"Ishwari",50000);
    e1.show();

    return 0;
}


/*
Q6.3

Const members must be initialized using initializer list.

Assignment inside constructor body will give compilation error.

Initializer list is faster because direct initialization happens.
*/