#include<iostream>
using namespace std;

int main(){
    int a=2,b=3,temp;
    
    cout << "before swapping."<< endl;
    cout << "a="<< a << ",b="<< b << endl;

    temp = a;
    a = b;
    b = temp;
    
    cout << "\nafter swapping." << endl;
    cout << "a= " << a << ",b=" << b << endl;
    return 0;

}