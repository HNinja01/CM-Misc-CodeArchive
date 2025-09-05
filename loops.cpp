#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter no. of pattern -" << " ";
    cin >> n;
    
     for(int i=1; i<=n; i++){
        cout << endl;
        for(int j=n; j>=i; j--){
            cout << "*";
        }
     }
}