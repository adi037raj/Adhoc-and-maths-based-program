#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 4000005
typedef long long int ll;
typedef std::vector<int> vi;
typedef std::pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
const double PI = 3.141592653589793238460;
typedef priority_queue <int > max_heap;
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}

ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a% b);
}
ll function_def(int i)
{
    return i*i;
}
int toitent_function_values[mod],results_finaks[mod];

void myfunct()
{
    REP(i,mod)
    toitent_function_values[i]=i,results_finaks[i]=0;

    for(int j=2;j<mod;j++)
    {
        if(toitent_function_values[j]==j)
        {
            toitent_function_values[j]=j-1;
            for(int i=2*j;i<mod;i+=j)
                toitent_function_values[i]=(toitent_function_values[i]/j)*(j-1);
        }

    }
    for(int i=1;i<mod;i++)
    {
        results_finaks[i]+=i-1;
        for(int j=2*i;j<mod;j+=i)
            results_finaks[j]+=i*((1+toitent_function_values[j/i])/2);
    }


}

int main(){
    myfunct();
fast_io();
int t;

cin>>t;
ll k;
k=0;

while(t--)
{

cin>>k;

cout<<results_finaks[4*k+1]<<endl;

}



return 0;
}
