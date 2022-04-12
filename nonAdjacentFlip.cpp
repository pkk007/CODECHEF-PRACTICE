#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count = 0;
        if(s[0]=='1'){
            count = 1;
        }
        //this is else part
        for(int i=1 ;i<n; i++){
            if(s[i]=='1' && s[i-1]=='1'){
                count = 2;
                break;
            }
            else if(s[i]=='1')
                count = 1;
        }
        cout<<count<<endl;
    }
}