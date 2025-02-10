#include <iostream>
using namespace std;

// First base class:
class Alpha
{
public:
  // Field:
  int alpha;
  // Constructor:
  Alpha(int a)
  {
    alpha=a;
  }
  // Method:
  void show()
  {
    cout<<"Class Alpha "<<alpha<<endl;
  }
};

// Second base class:
class Bravo
{
public:
  // Field:
  int bravo;
  // Constructor:
  Bravo(int b)
  {
    bravo=b;
  }
  // Method:
  void show()
  {
    cout<<"Class Bravo "<<bravo<<endl;
  }
};

// Child class
class Charlie:public Alpha,public Bravo
{
public:
  // Field:
  int charlie;
  // Constructor:
  Charlie(int a, int b, int c):Alpha(a),Bravo(b)
  {
    charlie=c;
  }
  // re-arranging methods:
  void show()
  {
    // Calling version of Alpha class' method:
    Alpha::show();
    // Calling version of Bravo class' method:
    Bravo::show();
    // Displaying current field:
    cout<<"Class Charlie "<<charlie<<endl;
  }
};

// Main func
int main()
{
  Charlie obj(10, 20, 30);
  // Calling method:
  obj.show();
  return 0;
}


