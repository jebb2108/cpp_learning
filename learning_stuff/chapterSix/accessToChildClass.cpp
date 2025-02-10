#include <iostream>
using namespace std;

// First base class:
class Alpha
{
public:
  // Field:
  char codeA;
  // Constructor:
  Alpha(char a)
  {
    codeA=a;
  }
  // Virtual method:
  virtual void show()
  {
    cout<<"Method of class Alpha: "<<codeA<<endl;
  }
};

// Second base class:
class Bravo
{
public:
  // Field:
  char codeB;
  // Constructor:
  Bravo(char b)
  {
    codeB=b;
  }
  // Virtual method:
  virtual void show()
  {
    cout<<"Class Bravo: "<<codeB<<endl;
  }
};

// Inherited class:
class Charlie:public Alpha,public Bravo
{
public:
  // Constructor:
  Charlie(char a, char b):Alpha(a),Bravo(b){}
  // Re-arranging methods:
  void show()
  {
    cout<<"Method from class Charlie: ";
    cout<<codeA<<codeB<<endl;
  }
};

// Main func:
int main()
{
  cout<<"Using args\n";
  // Making instances:
  Alpha objA('A');
  objA.show();
  Bravo objB('B');
  objB.show();
  Charlie objC('C', 'D');
  objC.show();

  // Присваивание объектам переменных базовых классов 
  // значением объекта производного класса:
  objA=objC;
  objB=objC;
  objA.show();
  objB.show();
  cout<<"Using pointers\n";
  // Declayiring pointers:
  Alpha* pntA=&objC;
  Bravo* pntB=&objC;
  Charlie* pntC=&objC;
  // Calling method through pointer:
  pntA->show();
  pntB->show();
  pntC->show();
  return 0;
}
