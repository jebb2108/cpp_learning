#include <iostream>
using namespace std;

// Base class
class Alpha
{
public:
  // usual method
  void show()
  {
    cout<<"Class Alpha"<<endl;
  }
  // Calling method within another method:
  void showAll()
  {
    show();
  }
};

// Child class:
class Bravo: public Alpha
{
public:
  // Re-arranging method:
  void show()
  {
    cout<<"Class Bravo"<<endl;
  }
};
// Main func:
int main()
{
  Bravo obj;
  obj.show();
  obj.showAll();
  return 0;
}
