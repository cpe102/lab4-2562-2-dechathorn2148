#include <iostream>
#include <cmath>
using namespace std;

double Calculated(int x)
{
    double y;
    y = 3*pow(x,3)+2*2.71828+pow(2,2*x+1)+sqrt(pow(x,2)+1);
    cout << "Result y = " << y;
}

int main()
{
    int x;
    cout << "Enter X = ";
    cin >> x;
    Calculated(x);
    return 0;
}

