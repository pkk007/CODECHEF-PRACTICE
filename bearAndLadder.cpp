#include<bits/stdc++.h>
using namespace std;

int main(){
    int q,a,b;
    cin>>q;
    while(q--){
        cin>>a>>b;
        if(((a<b) && (a%2!=0 && b%2==0)) && abs(a-b)==1){
            cout<<"YES"<<endl;
        }
        else if(((b<a) && (b%2!=0 && a%2==0)) && abs(a-b)==1){
            cout<<"YES"<<endl;
        }
        else if((a%2==0 && b%2==0) && abs(a-b)==2){
            cout<<"YES"<<endl;
        }
        else if(((a%2!=0 && b%2!=0) && abs(a-b)==2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}