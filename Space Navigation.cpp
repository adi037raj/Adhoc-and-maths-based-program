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

bool calculate(string s,int times,char c)
{
    int n=s.size();
    int res=0;
    REP(i,n)
    {
        if(s[i]==c)res++;
        if(res>=times)return true;

    }
    if(res>=times)return true;
    return false;
}

int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{

int x,y;
cin>>x>>y;
string s;cin>>s;
bool f1,f2;
if(x>0)
f1=calculate(s,x,'R');
else
    f1=calculate(s,-x,'L');



if(y>0)
f2=calculate(s,y,'U');
else
f2=calculate(s,-y,'D');

if(f1 && f2)cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;



}



return 0;
}
