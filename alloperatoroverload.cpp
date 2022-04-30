#include <iostream>
using namespace std;
class test
{

public:
    int a, b;
    test() {}
    test(int r//, int i
    )
    {
        a = r;
      //  b = i;
    }

 /*   test operator+(test t2)
    {
        test t3;
        t3.a = a + t2.a;
        t3.b = b + t2.b;
        return t3;
    }
      test operator/(test t2)
    {
        test t3;
        t3.a = a / t2.a;
        t3.b = b / t2.b;
        return t3;
    }
    */
   test operator *=(int b)
   {
       a=a*b;
       
   }

    void show()
    {
        cout << "your marks "<<a;
    }
};
int main()
{
   /* test t1, t2, t3;
    t1 = test(1, 2);
    t2 = test(3, 4);

    t3 = t2 +=t1;
    t3.show();*/
    test t1(7);
    t1.show();
    t1*=20;
    t1.show();

}