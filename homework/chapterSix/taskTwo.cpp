#include <iostream>
#include <ctime>
//Constant value:
const int n=10;

class SmartArray
{
private:
  double mean;

  void findMean(double s)
  {
    mean=(double)s/n;
  }

public:
  float arr[n];

  SmartArray(int num=0)
  {
    double s=0;
    srand(num?num:time(0));
    for(int k=0;k<n;++k)
    {
      s+=arr[k]=rand()%100;
    }
    findMean(s);
  }

  SmartArray operator+(SmartArray obj)
  {
    double s=0;
    SmartArray newObj;
    for(int k=0;k<n;++k)
    {
      s+=newObj.arr[k]=arr[k]+obj[k];
    }
    newObj.findMean(s);
    return newObj;
  }

  double operator[] (int k)
  {
    double s=0;
    for(int k=0;k<n;++k)
    {
      s+=arr[k];
    }
    findMean(s);
    return arr[k];
  }
  
  void show()
  {
    for(int k=0;k<n;++k)
    {
      std::cout<<arr[k]<<" ";
    }
    std::cout<<"\nIts mean: "<<mean<<std::endl;
  }
};

int main()
{
  using namespace std;
  SmartArray objA, objB(5);
  objA.show();
  objB.show();
  SmartArray objC=objA+objB;
  objC.show();
  return 0;
}
