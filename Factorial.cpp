#include<bits/stdc++.h>
using namespace std;

int main(){

    int res=1;
    int n;
    cout << "Enter a number :" << " ";
    cin >> n;
    
    for (int i=1; i<=n; i++){
        res = res * i;
    }
    cout << "Factorial of "<< " " << n << " " << "is" << " ";
    cout<< res;
}