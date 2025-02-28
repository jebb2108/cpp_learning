#include <iostream>

template<class X> class BaseClass
{
private:
  X value;
public:
  BaseClass(X val)
  {
    set(val);
  }

  void set(X val)
  {
    value=val;
  }

  X get()
  {
    return value;
  }
};

class Alpha: public BaseClass<int>
{
public:
  Alpha():BaseClass<int>(0) {}
};

class Bravo: public BaseClass<char>
{
public:
  Bravo(char s):BaseClass<char>(s){}
};

int main()
{
  using namespace std;
  
  Alpha objA;

  cout << "Object objA: " << objA.get() << endl;

  objA.set(100);

  cout << "Object objA: " << objA.get() << endl;

  Bravo objB('A');

  cout << "Object objB: " << objB.get() << endl;

  objB.set('B');

  cout << "Object objB: " << objB.get() << endl;

  return 0;
}
