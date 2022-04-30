#include<iostream>
using namespace std;
class date
{
    int month , day, year;
    public:
    void getDate()
    {
        cout<<"enter date in day , month , year";
        cin>>day>>month>>year;
    }
    void showDate()
    {
        cout<<"the date is "<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
    date d;
    d.getDate();
    d.showDate();
}