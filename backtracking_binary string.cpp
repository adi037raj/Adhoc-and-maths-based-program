
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
vi a;
int n;
void print_binary(int l)
{
    if(l==n)
       {
           REP(i,n+1)
           if(i==0)continue;
           else cout<<a[i]<<" ";cout<<endl;return ;}
    a[l+1]=0;
    print_binary(l+1);
    a[l+1]=1;
    print_binary(l+1);

}

int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
cin>>n;
a.resize(n+1);
print_binary(0);


}



return 0;
}