#include<iostream>
using namespace std;
class rectangle {
private:
    int length;
    int breadth;
public:
    rectangle(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    int area();
    int perimeter();
};
int rectangle::area()
{
    return (length*breadth);
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    rectangle r(2,3);
    cout<<"perimeter:"<<r.perimeter()<<endl;
    cout<<"area:"<<r.area()<<endl;
    return 0;
}