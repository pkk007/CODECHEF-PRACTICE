#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s,s1;
        cin>>n>>k;
        cin>>s;
        for(int i=0; i<k;i++){
            for(int j=0; j<n; j++){
                if(s[j] == 1)
                    s1[j] = 0;
                else
                    s1[j] = 1;
                
                cout<<s1[j];
            }
        }
    }
}