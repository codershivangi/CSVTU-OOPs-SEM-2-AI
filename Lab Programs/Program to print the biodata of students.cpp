#include<iostream>
using namespace std;
class student 
{
    private:
        string name;
        int age;
        string address;
        string phoneNumber;
    public:
        student(string n,int a,string addr,string phone)
        {
            name = n;
            age  = a;  
            address = addr;
            phoneNumber = phone;
         }
         void displayBiodata()
         {
            cout << "Name:" << name << endl;
            cout << "Age:" << age << endl;
            cout << "Address:" << address << endl;
            cout << "Phone Number:" << phoneNumber << endl;
         }
};
 
int main()
{
    student student1 ("sanya",20,"Bhilai,Risali","123-456-7892");
    student student2 ("kirti",22,"456-Bhilai","345-678-5914");
    
    cout << "Biodata of student 1 :" << endl;
    student1.displayBiodata();

    cout << "\n Biodata of student 2 :" << endl;
    student2.displayBiodata();

    return 0;

}
