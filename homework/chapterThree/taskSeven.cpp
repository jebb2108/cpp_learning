#include <iostream>



int main()
{
    srand(2);
    const int size=10;
    int arr[size], k, biggest_indx;
    biggest_indx = 0;

    std::cout<<"Array:\n";

    for (k=0; k<size; k++)
    {
        arr[k] = rand() % 10;
        std::cout<<arr[k]<<" | ";
    }
    std::cout<<std::endl;

    for (k=0; k<size; k++)
    {
        if (arr[k]>arr[biggest_indx])
        {
            biggest_indx = k;
        }
    }
    
    std::cout<<"The biggest number is "<<arr[biggest_indx]
    <<" which has the index of: "<<biggest_indx<<std::endl;

    return 0;
}