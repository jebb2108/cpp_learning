#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int num, k=0;
    cout<<"First, you`ll need to set the amount of elements in your array: ";
    cin>>num;
    const int n = num;
    int array[n+1];
    cout<<"Enter a number to put in this array: ";
    cin>>array[k];
    cout<<"The index: "<<k<<", the input you made: "<<array[k]<<endl;
    k++;
    num--;
    while(num) {
        cout<<"Enter a number to put in this array: ";
        cin>>array[k];
        cout<<"The index: "<<k<<", the input you made: "<<array[k]<<" "<<endl;
        k++;
        num--;
    }
    cout<<endl;
    return 0;

}