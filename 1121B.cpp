#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n-1){
        cin>>a[i];
    }
    
    map<int,int> m;
    loop(i,0,n-1){
        loop(j,i+1,n-1){
            m[a[i]+a[j]]++;
        }
    }
    int ma=0;
    for(auto it: m){
        ma=max(ma,it.second);
    }
    cout<<ma nn;
    
    return 0;
}