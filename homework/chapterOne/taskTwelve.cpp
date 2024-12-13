#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n, k=1, sum=0;
    cout<<"Enter a number of natural numbers to sum up: ";
    cin>>n;

    while (n) {

        sum+=k;
        k++;
        n--;

    }
    cout<<"The resulting sum will be: "<<sum<<endl;
    return 0;
}