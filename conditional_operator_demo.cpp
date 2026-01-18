#include <iostream>
using namespace std;
int main()
{
    int tu,alpha,beta;
    cout<<"enter tu";
    cin>>tu;
    
    cout<<"enter alpha";
    cin>>alpha;
    cout<<"enter beta";
    cin>>beta;
    tu=(alpha<beta) ? alpha : beta;//conditional operator 
    cout<<alpha<<"\n"<<beta<<"\n"<<tu;
    

    return 0;
}