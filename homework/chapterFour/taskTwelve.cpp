#include <iostream>
#include <ctime>

int* sortBubble(int M[], int n)
{
    int tmp;
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<n-i;++j)
        {
            if(M[j]<M[j+1])
            {
                tmp=M[j];
                M[j]=M[j+1];
                M[j+1]=tmp;
            }
        }
    }
    return M+(n-1);
}

void show(int M[], int n)
{
    using namespace std;
    for (int i=0;i<n;++i)
    {
        cout<<M[i]<<" | ";
    }
    cout<<endl;
}

int main()
{
    using namespace std;

    srand(time(0));
    const int size=10;
    int arr[size];
    for (int k=0;k<size;++k)
    {
        arr[k]=rand()%10;
    }
    show(arr, size);
    int* last=sortBubble(arr, size);
    cout<<"Наименьшее число в массиве: "<<*last<<endl;
    return 0;
}