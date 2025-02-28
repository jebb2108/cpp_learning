#include <iostream>

template<class X> void show(X x)
{
  using namespace std;
  cout << "Function with one argument\n";
  cout << "The value of this argument: " << x << endl;
  cout << endl;
}

template<class X,class Y> void show(X x, Y y)
{
  using namespace std;
  cout << "Function with two arguments\n";
  cout << "First argument: " << x << endl;
  cout << "Second argument: " << y << endl;
  cout << endl;
}

int main()
{
  show('A');
  show(123);
  show("Text");

  // Case 2
  show(321, "text");
  show('B', 456);
  show('C', 'D');

  return 0;
}
