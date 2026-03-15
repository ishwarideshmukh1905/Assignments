#include<iostream>
using namespace std;

class Box
{
    int length;
    int width;
    int height;

public:

    // parameterized constructor
    Box(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box b1(2,3,4);

    cout<<"Volume using constructor = "<<b1.volume()<<endl;

    b1.setDimensions(5,6,7);

    cout<<"Volume after assignment = "<<b1.volume()<<endl;

    return 0;
}


/*
Q1.2

Initialization happens before assignment because object memory is first created
then values are given.

Initialization is preferred:
- at object creation
- for const variables
- for reference variables
- better performance
*/