#include <iostream>
#include <string>

template<class T> class MyClass
{
private:
  // Closed arg:
  T value;
public:
  // Constructor:
  MyClass(T v): value(v) {}

  void show()
  {
    std::cout << "Value of arg: " << value << std::endl;
  }
};

template<> class MyClass<std::string>
{
private:
  // Private val:
  char value[100];
public:
  MyClass(const char* str)
{
    int k;
    value[0]='|';
    for(k=0;str[k];++k)
    {
      value[2*k+1]=str[k];
      value[2*k+2]='|';
    }
    value[2*k+1]='\0';
  }

  void show()
  {
    std::cout << value << std::endl;
  }
};

int main()
{
  MyClass<int> objA(100);

  MyClass<char> objB('A');
  MyClass<const char*> objC("text");
  MyClass<std::string> objD("text");

  objA.show();
  objB.show();
  objC.show();
  objD.show();

  return 0;
}
