#include <iostream>
#include <list>

void show(int M[], int* s, char l)
{
    std::cout<<"Массив "<<l<<":\n";
    for (int k=0; k<*s; k++)
    {
        std::cout<<M[k]<<" ";
    }
    std::cout<<"\n";
}



int main()
{
    int *size;
    size = new int;

    std::cout<<"Введите количество элементов в каждом массиве: ";
    std::cin>>*size;

    int *A, *B;
    A = new int [*size];
    B = new int [*size];

    srand(2);

    for (int k=0; k<*size; k++)
    {
        A[k] = rand()%10;
        B[k] = rand()%10;
    }

    show(A, size, 'A');
    show(B, size, 'B');


    std::cout<<"Массив С:\n";
    std::list<int> MyList;
    for (int k=0; k<*size*2; k++)
    {
        MyList.push_back(A[k]);
        MyList.push_back(B[k]);
    }

    for (int k=0; k<*size*2; k++)
    {
        int res = MyList.front();
        MyList.pop_front();
        std::cout<<res<<" ";

    }

    delete size;
    delete [] A; delete [] B;

    std::cout<<std::endl;
    return 0;
}