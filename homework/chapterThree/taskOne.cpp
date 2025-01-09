#include <iostream>

int main()
{
    const int size=5;

    int s=0;

    int arrOne[size]={1, 2, 7, 8, 3};
    int arrTwo[size]={6, 4, 9, 2, 1};

    for (int k=0; k<size; k++)
    {
        s += arrOne[k] * arrTwo[k];
    }
    std::cout<<"The result: "<<s<<std::endl;
    return 0;
}