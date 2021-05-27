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
int n;
string a,b;
a.clear();
a="";
cin>>n>>b;
int last=-1;
REP(i,n)
{
    if(last==-1)
    {
        a.pb('1');
        last=1+b[i]-'0';
        continue;
    }
    if(b[i]=='1' && last==2)
    {
        a.pb('0');
        last=1;


    }
    else if(b[i]=='0' && last==2)
    {
        a.pb('1');
        last=1;
    }

    else if(b[i]=='1' && last==1)
    {
        a.pb('1');
        last=2;

    }
    else if(b[i]=='0' && last==1)
    {
        a.pb('0');
        last=0;

    }
    else if(b[i]=='1' && last==0)
    {
        last=2;
        a.pb('1');

    }
    else if(b[i]=='0' && last==0)
    {
        last=1;
        a.pb('1');

    }



}


cout<<a<<endl;





}



return 0;
}
