#include <iostream>
#include <ctime>

class MyClass
{
private:
  int16_t num;
public:
  MyClass* next;

  ~MyClass()
  {
    std::cout<<"Object with "<<num<<" ID deleted"<<std::endl;
  }
  void setNum(int n)
  {
    num=n;
  }
  void show()
  {
    std::cout<<num<<" ";
    if (next) next->show();
  }
};

void deleteAll(MyClass* q)
{
  if (q->next) deleteAll(q->next);
  delete q;
}

int main()
{
  using namespace std;
  srand(time(0));
  MyClass *pnt=new MyClass;
  MyClass* p;
  pnt->setNum(rand()%1000);
  p=pnt;
  for(int k=0;k<=10;++k)
  {
    p->next=new MyClass;
    p->next->setNum(rand()%1000);
    p=p->next;
  }
  p->next=0;
  pnt->show();
  cout<<endl;
  deleteAll(pnt);
  return 0;
}
