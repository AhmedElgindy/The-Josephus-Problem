// made from Ahmed Elgindy//
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int x; 
    cout<<"enter the number you want"<<endl ;
    cin >> x ;
    int y = int (log2(x));
    int reminder = x - pow(2,y);
    int solve = (1 + reminder*2);
    cout<<"the winnig number is  " << solve;

    return 0;
}
