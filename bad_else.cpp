// bad else.cpp
// demonstrates  Else matched with wroing If
#include <iostream>
using namespace std;
int main() 
{
    int a,b,c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    if(a==b)
        if(b==c)
            cout << "All numbers are equal\n";  
    else
        cout << "First two numbers are equal\n";        
        return 0;

}
// Output when input is 2 2 3   
// First two numbers are equal              