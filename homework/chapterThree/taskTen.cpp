#include <iostream>

int main()
{
    int arr[3][6];
    for (int i=0; i<6; i++)
    {
        int num = rand() % 10;
        for (int j=0; j<3; j++)
        {
            arr[j][i] = num;
        }
    }

    for (int line=0, k=0; line<3; k++)
    {
        if (k<6)
        {
            std::cout<<arr[line][k]<<" | ";
        }
        else 
        {
            k=-1;
            line++;
            std::cout<<std::endl;
        }
    }

    return 0;

}