#include<iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:

    Student()
    {
        rollNo = 0;
        name = "NA";
        marks = 0;
    }

    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout<<rollNo<<" "<<name<<" "<<marks<<endl;
    }
};

int main()
{
    Student s1;
    Student s2(1,"Ishwari",88);
    Student s3(2,"Aditya",77);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}


/*
Q5.2

Compiler generates default constructor when no constructor is written.

If parameterized constructor is written then compiler does not generate default constructor.

Constructors can be overloaded.
*/