#include <iostream>

int main()
{
    char str[100]="I must get better at coding.";
    const int size=strlen(str);
    int wordsArr[size];

    for (int &item: wordsArr)
    {
        item=0;
    }

    for (int k=0, amount=0, wCount=0; k<100; k++)
    {
        if (str[k] == ' ')
        {
            if (amount>0)
            {
                wordsArr[wCount] = amount;
                amount = 0;
                wCount++;
            }
            else 
            {
                amount=0;
            }
        }
        else if (str[k] != '\0')
        {
            amount++;
        }
        else 
        {
            wordsArr[wCount] = amount;
            break;
        }
    }

std::cout<<"Результат: ";
    for (int &item: wordsArr)
    {
        if (item != 0)
        {
            std::cout<<item<<" ";
        }
    }
    std::cout<<std::endl;
}