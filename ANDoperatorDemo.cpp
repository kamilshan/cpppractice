#include <iostream>
using namespace std;
#include<conio.h>
#include<process.h>
int main() 
{
    char dir='a';
    int x=10,y=10;
    while (dir!='\r'){
        cout<<"\n your location is "<<x<<","<<y;
        cout<<"\n enter direction (n,s,e,w) and press enter to move";
        dir=getch();
        switch(dir){
            case 'n': y=y+1; break;
            case 's': y=y-1; break;
            case 'e': x=x+1; break;
            case 'w': x=x-1; break;
            default: cout<<"\n invalid direction";  
        }
        if(x==7 && y==7){
            cout<<"\n you have reached the treasure location";
            exit(0);
        }

    }
    return 0;
}