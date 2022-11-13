#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll M=998244353;
int main() {
    ll temp;
    cin>>temp;
    while(temp--){
        ll num;
        cin>>num;
        ll t;
        ll sum=0;
        for(ll i=0;i<num;i++){
            cin>>t;
            sum+=t;
            sum%=M;
            
        }
        ll a=(sum*(sum-1)%M);
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
