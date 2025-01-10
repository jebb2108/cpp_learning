#include <iostream>

int main()
{
    const int size=9;
    int offset, curr_num;
    int arr[size]={1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout<<"Original array:\n"<<"1 2 3 4 5 6 7 8 9"<<"\n";

    std::cout<<"Введите число, на которое нужно сместить массив в сторону: ";
    std::cin>>offset;


    int *p;
    int *q;
    
    while (offset)
    {
        // Указатель устанавливается на первый элемент массива:
        p=arr;
        q=&arr[size-1];
        curr_num = p[0];

        for (int k=0; p!=q; p++, k++)
        {
            arr[k] = arr[k+1];
        }
        *q = curr_num;
        offset--;
    }

    std::cout<<"Массив теперь выглядит так: "<<std::endl;
    for (int &item: arr)
    {
        std::cout<<item<<" ";
    }
    std::cout<<std::endl;
    return 0;

}