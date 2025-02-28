#include <iostream>
#include <string>

template<class A,class B> class MyClass
{
public:
  A first;
  B second;

  MyClass(A f, B s): first(f), second(s) {}

  void show()
  {
    using namespace std;
    cout << "first val: " << first << endl;
    cout << "second val: " << second << endl;
  }
};

int main()
{
  MyClass<int, char> objA(100, 'A');
  MyClass<std::string, double> objB("text", 10.5);
  MyClass<const char*,std::string> objC("first", "second");
  MyClass<int,int> objD(1, 2);

  objA.show();
  objB.show();
  objC.show();
  objD.show();

  return 0;
}
