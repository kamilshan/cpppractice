#include <iostream>
using namespace std;
#include <conio.h>  
int main()
{
    char dir = 'a';
    int x = 10, y = 10;
    while(dir != '\r')
    {
        cout << "\n your location is " << x << "," << y;
        cout << "\n which direction do you want to go? (n,s,e,w) ";
        dir = getche();
        switch(dir)
        {
            case 'n':
                y = y + 1;
                break;
            case 's':
                y = y - 1;
                break;
            case 'e':
                x = x + 1;
                break;
            case 'w':
                x = x - 1;
                break;
            case '\r':
                cout << "\n quitting program";
                break;
            default:
                cout << "\n invalid direction!";
        }//end of switch
    }// end of while 
    return 0;

}//end of main