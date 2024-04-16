#include<iostream>
#include<cmath>
using namespace std;
double area(double radius){
       return M_PI*radius*radius;
}
int main(){
    double radius , lenght , width , base , height;
    cout << "Enter the radius of circle:";
    cin >> radius;
    cout << "Area of the circle:"<< area(radius)<<endl;
    return 0;
}
