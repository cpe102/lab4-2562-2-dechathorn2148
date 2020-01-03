#include <iostream>
#include <cmath>
using namespace std;

int findDivisor(int x)
{
    int y=2;
    while(x > y)
    {
        if(x%y != 0)
        {
            y++;
        }
        else
        {
            return y;
        }
    }
   
}

int main()
{
    int x;
    cout << "Enter X Value = ";
    cin >> x;
    cout << "Result of Divisor = " << findDivisor(x); 
    return 0;
}
