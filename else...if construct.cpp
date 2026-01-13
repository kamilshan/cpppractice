//adelseif.cpp
// demonstrates else if construct with adventure program
#include <iostream>
using namespace std;
#include <conio.h>
int main()

{
    char dir = 'a';
    int x=10, y=10;
    cout<<"type enter to quit\n";
    while(dir != '\r')

{
    cout<<"\n your location is "<<x<<","<<y;
    cout<<"\n which direction do you want to go? (n,s,e,w) ";
    dir = getche();
    if(dir == 'n')
        y;
    else if(dir == 's')
        y = y - 1;
    else if(dir == 'e')
        x = x + 1;
    else if(dir == 'w')
        x = x - 1;
    else if(dir == '\r')
        cout<<"\n quitting program";
    else
        cout<<"\n invalid direction!";

}
    return 0;   

}