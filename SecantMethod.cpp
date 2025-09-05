#include<bits/stdc++.h>
#define f(x) x*x*x-2*x-5
using namespace std;
int main(){
    float x0, x1, x2, f0, f1, f2, e;
    int step = 1,N;
    cout << setprecision(6) << fixed;
    cout << "enter first quess:";
    cin>>x0;
    cout << "enter second quess:";
    cin >> x1;
    cout << "enter tolerable error:";
    cin >> e;
    cout << "enter maximum iteration:";
    cin >> N;
    cout << endl <<"******"<< endl;
    cout << "Secant Method" << endl;
    cout << "******" <<endl;
    do{
        f0=f(x0);
        f1=f(x1);
        if(f0==f1){
            exit(0);
        }
        x2=x1-(x1-x0)*f1/(f1-f0);
        f2=f(x2);
        cout << "Iteration-" << step << "\tx"<< step << "=" <<setw(10)<< x2 << "and f(x"<<step<<")=" << f2 << endl;
        x0=x1;
        f0=f1;
        x1=x2;
        f1=f2;step=step+1;
        if(step>N+1){
            cout<<"Not Convergent";
            exit(0);
        }

    }while(fabs(f2)>e);
    cout<<endl<<"Root is:"<< x2;
    return 0;
}
