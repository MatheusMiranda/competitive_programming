#include <iostream>

using namespace std;

int main()
{
  int numero;
  cin >> numero;

  for (int i = 1; i <= 10; ++i)
  {
    cout << i <<" x " << numero << " = " << numero * i << "\n";
  }

  return 0;
}
