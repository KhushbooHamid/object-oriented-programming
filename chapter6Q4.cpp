#include<iostream>
using namespace std;
class employee
{
    int number;
    float compensation;
    public:
    void getData()
    {
        cout<<"enter number and compsensation";
        cin>>number>>compensation;
    }
    void display()
    {
        cout<<"the number is "<<number<<" and the compensation is "<<compensation;
    }
};
int main()
{
    employee e1,e2,e3;
    e1.getData();
    e1.display();
    e2.getData();
    e2.display();
    e3.getData();
    e3.display();
}