#include <iostream>
// Base class 
class Alpha
{
private:
  // closed field
  char symb;
public:
  // Constructer:
  Alpha(char s)
  {
    symb=s;
  }
  // Method for displaing the values of fields
  void show()
  {
    using namespace std;
    cout<<"Class Alpha: "<<symb<<endl;
  }
  // Method for setting up symb
  void set(char s)
  {
    symb=s;
  }
};

// Child class
class Bravo: public Alpha
{
  public:
    // Open field
  int num;
  // Constructer:
  Bravo(char s, int n):Alpha(s) {num=n;}
  // Calling Parent class in this method:
  void showAll()
  {
    show();
    std::cout<<"Class Bravo: "<<num<<std::endl;
  }
};

// Main func
int main()
{
  // Creatng dependent class 
  Bravo obj('A', 100);
  // Display it
  obj.showAll();
  // Calling inherited method
  obj.set('Z');
  // Displaying it
  obj.showAll();

  return 0;
}
