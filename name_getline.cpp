#include<iostream>
using namespace std;
int main(){
    string name; 
    cout << "enter the name:";
    getline(cin,name,'@');
    cout << "entered name is:"<< name;
    return 0;
}