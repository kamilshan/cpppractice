//counter.cpp
// object repreesents  a counter variable
#include <iostream>
using namespace std;
class Counter
{
   private:
   unsigned int count; //count
   public:
   Counter():count(0) //constructor
    {/*empty body*/
    }
void inc_count() //increment count by 1
{
    count++;
}
int get_count() //return count value
{
    return count;
}
};
int main()
{
    Counter c1,c2; //create two Counter objects
    cout<<"\nc1="<<c1.get_count();
    cout<<"\nc2="<<c2.get_count();
    c1.inc_count(); //increment c1 by 1
    c2.inc_count(); //increment c2 by 1
    c2.inc_count(); //increment c2 by 1 again
    cout<<"\nc1="<<c1.get_count();
    cout<<"\nc2="<<c2.get_count();
    cout<<endl;
    return 0;  
    }