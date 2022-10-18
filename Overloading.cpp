#include<iostream>
#include<math.h>

using namespace std;

class Area
{
    int choice;
    float radius,s,s1,s2,s3,length,breadth;
    public:
        void option();
        void area(float r);
        void area(float l,float b);
        void area(float s1,float s2,float s3);
};
void Area::option()
{
    cout<<"To calculate area of a Circle,    Enter 1.\n";
    cout<<"To calculate area of a Rectangle, Enter 2.\n";
    cout<<"To calculate area of a Triangle,  Enter 3.\n";
    cout<<"To calculate area of a Square,    Enter 4.\n";
    cout<<"Enter option: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter the Radius of Circle: ";
            cin>>radius;
            area(radius);
            break;
        }
        case 2:
        {
            cout<<"Enter the Length and Breadth of rectangle: ";
            cin>>length>>breadth;
            cout<<"Area of the Rectangle = ";
            area(length,breadth);
            break;
        }
        case 3:
        {
            cout<<"Enter all three sides of Triangle: ";
            cin>>s1>>s2>>s3;
            area(s1,s2,s3);
            break;
        }
        case 4:
        {
            cout<<"Enter side of Square: ";
            cin>>s;
            cout<<"Area of the Square = ";
            area(s,s);
            break;
        }
        default:
            cout<<"Invalid Option !";
    }
}
void Area::area(float r)
{
    cout<<"\nArea of the Circle = "<<3.14*r*r;
}
void Area::area(float l,float b)
{
    cout<<l*b;
}
void Area::area(float s1,float s2,float s3)
{
    float s=(float)((s1+s2+s3)/2);
    float ar=s*(s-s1)*(s-s2)*(s-s3);
    cout<<"Area of the Triangle = "<<pow(ar,0.5)<<endl;
}
int main()
{
    Area A1;
    A1.option();
    return 0;
}
