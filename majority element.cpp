
#pragma GCC optimize("Ofast")

#pragma GCC target("avx,avx2,fma")

#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
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

int n;
cin>>n;
int a[n];
REP(i,n)cin>>a[i];
int major=a[0],c=0;
REP(i,n)
{
    if(i==1)continue;
    if(major==a[i])
        c++;
    else
        c--;
    if(c==0)
        major=a[i],c++;
}
 c=0;
REP(i,n)
if(major==a[i])c++;
if(c>=n/2)
    cout<<"yes"<<endl;
else
    cout<<"no\n";

}



return 0;
}
