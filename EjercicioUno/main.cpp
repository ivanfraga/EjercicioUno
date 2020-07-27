#include <iostream>
using namespace std;
int main() {
  int num, i, e, f, g;
  i = 0;
  e = 0;
  f = 0;
  g = 0;
  cout << "ingrese el lado del cuadrado: ";
  cin >> num;
  {
    while ( i < num)
    {
      cout << "*";
      i++;
    }
    cout << endl;
    while ( e < (num - 2) )
    {
      cout << "* ";
      while ( f < (num - 4) )
      {
        cout << "*";
        f++;
      }
      f = 0;
      cout << " *" << endl;
      e++;
    }
    while ( g < num){
      cout << "*";
      g++;
    }
  }
return 0;
}
