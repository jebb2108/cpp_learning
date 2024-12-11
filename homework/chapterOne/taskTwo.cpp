#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n=15, k=1;
    while(n) {
        if(k%2==0) {
            cout<<k<<" ";
            k++;
            n--;
        }
        else {
            k++;
        }
    }
    cout<<endl;
    return 0;
}