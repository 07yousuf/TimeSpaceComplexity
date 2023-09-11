#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,x,y;
    cin>>x>>y;
    
    n = y-x+1;
    int a = x;
    
    sum = n * (2*a + (n-1)*1) / 2;
    cout<<sum;
}