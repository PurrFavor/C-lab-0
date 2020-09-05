#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c, d, x1, x2;
  cout<<"a=";
  cin>>a;
  cout<<"b=";
  cin>>b;
  cout<<"c=";
  cin>>c;
  d=b*b-4*a*c;
  if (d>0)
  { x1 = ((-b) + sqrt(d)) / (2 * a);
    x2 = ((-b) - sqrt(d)) / (2 * a);
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";}
  if (d==0)
  {x1 = ((-b) + sqrt(d)) / (2 * a);
  cout << "x1 = " << x1 << "\n"; }
  if (d<0)
  {cout<<"Нет решений";}

}
