#include <iostream>

const int n=15;

class DoubleExps
{
private:
  DoubleExps* a[n];
public:
  int val;
  DoubleExps *next;
  DoubleExps(): val(1), next(nullptr) 
  {
    for(int k=0;k<n;++k)
  {
      a[k]=nullptr;
    }
  }
  DoubleExps(DoubleExps& obj)
  {
    val=obj.val*2;
    obj.next=this;
  }
  void generateSeq (const int N)
  {
    a[0]=this;
    DoubleExps *p=this;
    for(int k=1;k<N;++k)
    {
      DoubleExps* newObj = new DoubleExps(*p);
      a[k]=newObj;
      p=newObj;
    }
  }

  int getVal(int i)
  {
    return a[i]->val;
  }

  void showAll()
{
    for(int k=0;k<n;++k)
  {
        std::cout << a[k]->val << ' ';
    }
    std::cout<<"\n";
  }
};

int main()
{
  DoubleExps arr;
  arr.generateSeq(n);
  int number = arr.getVal(5);
  arr.showAll();
  std::cout << "Result: " << number << std::endl;
  return 0;
}
