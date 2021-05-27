#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
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
typedef priority_queue <int > max_heap;
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}


int myfunction(ll n)
{
    int c=0;
    while(n)
    {
        c++;
        n=n/2;
    }
return c;
}

int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
ll n;
cin>>n;
unsigned long a=1,b=0;
int c=myfunction(n);c--;
c--;
if(n==1)
{
    cout<<0<<endl;
    continue;
}

unsigned long x=1<<c;

while(x)
{
    int curr_val=n&x;
    if(curr_val==0)
    {
        a=a*2 + 1;
        b=b*2 + 1;

    }
    else
    {
        a=a*2;
        b=b*2+1;

    }
   x=x/2;



}
cout<<a*b<<endl;



}



return 0;
}
