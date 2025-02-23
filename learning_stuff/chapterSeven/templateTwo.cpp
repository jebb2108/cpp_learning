#include <iostream>

// General function for displaying array
template<class T> void show(T* m,int n)
{
  for(int i=0;i<n;++i)
  {
      std::cout << m[i] << " ";
  }
  std::cout << std::endl;
}

// General function for sorting array
template<class X> void sort(X* m, int n)
{
  // Displaying array again:
  show(m, n);
  // Local variable of general type:
  X s;
  // Вложенные операторы цикла:
  for(int i=1;i<=n-1;++i)
  {
    for(int j=0;j<n-i;++j)
    {
      if(m[j]>m[j+1])
      {
        s=m[j+1];
        m[j+1]=m[j];
        m[j]=s;
      }
    }
  }

  // Displaying array again:
  show(m, n);
}

int main()
{
  int A[5]={3,2,8,1,0};

  char B[7]={'Z','B','Y','A','C','X'};
  size_t sizeA = sizeof(A)/sizeof(*A);
  size_t sizeB = sizeof(B)/sizeof(*B);
  sort(A,sizeA);
  sort(B,sizeB);

  return 0;
}
