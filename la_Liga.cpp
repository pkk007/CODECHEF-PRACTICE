#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int bar,realm,eib,mal;
        for(int i=0; i<4; i++){
            string s;
        int x;
        cin>>s>>x;
        if(s=="Barcelona")
            bar =x;
        if(s=="Malaga")
            mal =x;
        if(s=="RealMadrid")
            realm = x;
        if(s=="Eibar")
            eib = x;
        }
        if(bar>eib && realm<mal)
            cout<<"Barcelona"<<endl;
        else
            cout<<"RealMadrid"<<endl;
    }
}