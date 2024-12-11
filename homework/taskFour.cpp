#include<iostream>
#include<cstdlib>
using namespace std;

int getNum() {
    int n;
    cout<<"Enter an amount of numbers: ";
    cin>>n;
    return n;
}

int main() {
    int tmp, prev=1, nw=1;
    int n=getNum();
    while (n) {
        nw=prev+nw;
        prev=nw-prev;
        cout<<nw<<" ";
        n--;
    }
    cout<<endl;

    return 0;
}