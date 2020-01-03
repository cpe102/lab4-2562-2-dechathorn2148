#include<iostream>
#include<cmath>

using namespace std;

double findDistance(double u ,double a ,double t)
{
    double s;
    s = u*t+0.5*a*pow(t,2);
    cout << "Result s = " << s;
}

int main()
{
  double u,a,t;
  cout << "Enter u Value = ";
  cin >> u;
  cout << "Enter a Value = ";
  cin >> a;
  cout << "Enter t Value = ";
  cin >> t;
  findDistance(u,a,t);

  return 0;
}
