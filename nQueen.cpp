#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float res = pow((0.143*n),n);
        int gv = res;
        if((res-gv) < 0.5){
            cout<<gv<<endl;
        }
        else
            cout<<gv +1<<endl;
    }
}