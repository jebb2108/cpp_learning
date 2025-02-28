#include <iostream>

class MyClass 
{
public:
  int number;
  MyClass(int n): number(n) {}

  void show()
  {
    std::cout << "Argument of MyClass: " << number << std::endl;
  }
};

template<class X> void show(X arg)
{
  std::cout << "Value of argument: " << arg << std::endl;
}

template<> void show<int>(int arg)
{
  std::cout << "Integer value of argument: " << arg << std::endl;
}

template<> void show<MyClass>(MyClass obj)
{
  obj.show();
}

int main()
{
  MyClass obj(300);
  show('A');
  show(100.0);
  show(200);
  show(obj);

  return 0;
}
