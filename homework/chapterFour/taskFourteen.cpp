#include <iostream>

void rec(char str[], char *p, int size, int step)
{
    int indx;
    char *q=&str[size/2], tmpSymb;
    if (p!=q)
    {
        indx=(size-1)-step;
        tmpSymb=*p;
        *p=str[indx];
        str[indx]=tmpSymb;
        return rec(str, p+=1, size, step+=1);
    }
}

int main()
{
    using namespace std;
    char str[100]="I like programming so much!";
    char* p=&str[0];
    int lenSize=strlen(str);
    rec(str, p, lenSize, 0);
    cout<<"Предложение наборот: "<<str<<endl;
    return 0;
}