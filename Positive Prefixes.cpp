
#pragma GCC optimize("Ofast")

#pragma GCC target("avx,avx2,fma")

#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mod 10000000007
typedef long long ll;
typedef std::vector<int> vi;
typedef std::pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}



int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
int a[n+1];
REP(i,n)
a[i]=-i;
for(int i=2;i<=n&&k>0;i+=2)
{
    a[i]=-a[i];
    k--;
}
if(k!=0)
{

    for(int i=n;i>=1&&k>0;i--)
    {
        if(a[i]<0)
            a[i]=-a[i],k--;


    }


}



REP(i,n)
cout<<a[i]<<" ";


cout<<endl;



}





return 0;
}
