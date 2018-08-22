// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int a = 1;
  double d = 1.0;
  a = 46/9;
  cout << a << '\n';

  a = 46% 9 + 4 * 4 - 2;
  cout << a << '\n';

  a = 45 + 43 % 5 * ( 23 * 3 % 2);
  cout << a << '\n';

  a %= 3 / a + 3;
  cout << a << '\n';

  d = 4 + d * d + 4;
  cout << d << '\n';

  d += 1.5 * 3 + (++a);
  cout << d << '\n';

  d -= 1.5 * 3 + a ++;
  cout << d << '\n';


return 0;
}