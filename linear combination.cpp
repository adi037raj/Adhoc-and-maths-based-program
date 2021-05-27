
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
int a[21];
unordered_set<int> myset;
ll calculate(int start,int n,ll upto_now)
{
   //cout<<"it is called again\n";
  ll res=0;
    if(start==n-1){
        for(int i=0;i<239;i++)
{
    ll temp=a[start]*i;

     if((upto_now+temp)%239==0 && myset.find(i)==myset.end())res++,myset.insert(i);
}
   //cout<<"res is "<<res<<endl;
/*for (auto it = myset.begin();
         it != myset.end(); ++it)
        cout << " " << *it;
        cout<<endl;
*/

   auto   it1 = myset.begin();
    auto it2 = myset.end();
    it1++;
    myset.erase(it1, it2);
    return res%998244353;
    }
    for(int i=0;i<239;i++)
    {
        if(myset.find(i)!=myset.end())continue;
        int curr=a[start]*i;
        myset.insert(i);
        res+=calculate(start+1,n,upto_now+curr);
        res=res%998244353;

    }

    return res%998244353;


}

int main(){
fast_io();
int n;
cin>>n;
myset.clear();
REP(i,n)
cin>>a[i];

ll ans=calculate(0,n,0)%998244353;


cout<<ans<<endl;



return 0;
}
