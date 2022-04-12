#include<bits/stdc++.h>
using namespace std;

int digitSum(int x){
    int sum=0,rem;
    int temp = x;
    while(temp>0){
        rem = temp%10;
        temp=temp/10;
        sum = sum + rem;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x1= n+1, x2= n+2;
        int sum = digitSum(n);
        int x1sum = digitSum(x1);
        int x2sum = digitSum(x2);
        
        if((sum & 1) == 0) //even
		{
		    if((x1sum & 1) == 0)
		    {
		        cout<<x2;
		    }
		    else
		    {
		        cout<<x1;
		    }
		}
		else //odd
		{
		    if((x1sum & 1) == 0)
		    {
		        cout<<x1;
		    }
		    else
		    {
		        cout<<x2;
		    }
		}
		cout<<"\n";
    }
}