#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(){
            feet=0;
            inches=0;
        }
        Distance(int f,int i){
            feet = f;
            inches=i;
        }
        void displayDistance() const{
            cout << "F=" << feet << "I=" << inches << endl;
        }
        Distance operator-()const{
            return Distance(-feet,-inches);
        }
        };
        int main(){
            Distance D1(-5,11),D2(10,11);
            D1=-D1;
            D1.displayDistance();
            D2=-D2;
            D2.displayDistance();
            return 0;

        }
