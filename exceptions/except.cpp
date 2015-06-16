#include <iostream>
#include <stdexcept>
using namespace std;
int divide(int num, int denom)
{ 
  if(denom == 0)
    throw invalid_argument("Div by 0");
  return(num/denom);
}
int f1(int x)
{
  return divide(x, x-2);
}

int main()
{
  int res, a;
  cout << "Enter: " << endl;
  cin >> a;
  res = f1(a);
  cout << res << endl;
  return 0;
}
