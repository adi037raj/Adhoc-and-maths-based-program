#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 10000000007
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



int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{

int n,x;
cin>>n>>x;

int a[n];
int final_sum=0;
REP(i,n)
cin>>a[i],final_sum+=a[i];

if(final_sum==x)
{cout<<"NO\n";continue;}
vector<int> first,second;
int current_sum=0;

REP(i,n)
{
    if(current_sum+a[i]==x)
    {
        second.push_back(a[i]);
    }
    else
    {
        first.push_back(a[i]);
        current_sum+=a[i];
    }

}

bool flag=true;
current_sum=0;
for(auto element:first)
{

    current_sum+=element;
    if(current_sum==x)
        flag=false;
}
for(auto element:second)
{
    current_sum+=element;
    if(current_sum==x)
        flag=false;
}
if(!flag)
    cout<<"NO\n";
else
{
    cout<<"YES\n";
    for(auto element:first)
        cout<<element<<" ";
    for(auto element:second)
        cout<<element<< " ";
    cout<<endl;
}




}



return 0;
}
