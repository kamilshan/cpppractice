#include <iostream>
using namespace std;
 
int main()
{
    int speed;
    cout <<"\n enter 33,45,or 78: ";
    cin >> speed;
    switch(speed)
    {
        case 33:
            cout << "\n you are going 33 mph";
            break;
        case 45:
            cout << "\n you are going 45 mph";
            break;
        case 78:
            cout << "\n you are going 78 mph";
            break;
        default:
            cout << "\n speed not recognized";
    }
    return 0;
}