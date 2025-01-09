#include <iostream>
#include <cmath>

int main()
{
    int res;
    const int width=5, height=2;
    int ls[height][width]= {{1, 4, 2, 3, 8}, {2, 2, 7, 6, 3}};

    for (int i=0; i<height; i++)
    {
        for (int j=0; j<width; j++)
        {
            res = pow(ls[i][j], 2);
            std::cout<<"| "<<res<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}