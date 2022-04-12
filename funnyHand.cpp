#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        float p=0;
        cin>>n>>a>>b;
        if(a>=1 && a<=n && b>=1 && b<=n){

            if((a==1 || b==1) && (abs(a-b)==1 || abs(a-b)==2)){
                p=(1/n)*n;
                cout<<p<<endl;
            }
            else if(abs(a-b)==2){
                p=(1/n)*n;
                cout<<p<<endl;
            }
            else if(abs(a-b)==1){
                p=(2/n)*n;
                cout<<p<<endl;
            }
            else{
                cout<<p<<endl;
            }

        }
    }
}