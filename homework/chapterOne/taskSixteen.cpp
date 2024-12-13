#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int k=0;
    const int n=10;
    int exp_ls[n+1];
    exp_ls[0] = k+1;
    cout<<exp_ls[0]<<" ";
    k++;
    while (k<n) {
        k++;
        int i = k*k;
        exp_ls[k] = i;
        cout<<i<<" ";
    }
}