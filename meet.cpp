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

vector<double> myfunction(string p)
{
   vector<double> ans;
   double times=0;
   if(p[6]=='A')
   {
    int x=p[0]-'0';
  int y=p[1]-'0';
  int total=x*10+y ;
  if(total==12)total=0;

  times+=total;
  x=p[3]-'0';
  y=p[4]-'0';
  total=x*10+y;
  times+=total/100.0;

   }
   else
   {
       int x=p[0]-'0';
  int y=p[1]-'0';
  int total=x*10+y ;
  times+=total;
  if(total!=12)times+=12;
    x=p[3]-'0';
  y=p[4]-'0';

  total=x*10+y;
  times+=total/100.0;

   }

    ans.push_back(times);
    times=0;
    if(p[15]=='A')
    {

  int x=p[9]-'0';
  int y=p[10]-'0';
  int total=x*10+y ;
  if(total==12)total=0;

  times+=total;
  x=p[12]-'0';
  y=p[13]-'0';
  total=x*10+y;
  times+=total/100.0;
    }
    else
    {

        int x=p[9]-'0';
  int y=p[10]-'0';
  int total=x*10+y ;
  times+=total;
  if(total!=12)times+=12;
    x=p[12]-'0';
  y=p[13]-'0';

  total=x*10+y;
  times+=total/100.0;
    }
    ans.push_back(times);
    return ans;






}

int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
string p;
cin>>ws;
getline (std::cin,p);
double times=0;
if(p[6]=='A')
{
  int x=p[0]-'0';
  int y=p[1]-'0';
  int total=x*10+y ;
  if(total==12)total=0;

  times+=total;
  x=p[3]-'0';
  y=p[4]-'0';
  total=x*10+y;
  times+=total/100.0;

}
else
{
    int x=p[0]-'0';
  int y=p[1]-'0';
  int total=x*10+y ;
  times+=total;
  if(total!=12)times+=12;
    x=p[3]-'0';
  y=p[4]-'0';

  total=x*10+y;
  times+=total/100.0;

}

int n;
cin>>n;
double start[n],ends[n];
int i=0;

REP(j,n)
{
cin>>ws;
 getline(cin,p);
vector<double> ans=myfunction(p);
start[i]=ans[0];
ends[i]=ans[1];
//cout<<ans[0]<<" "<<ans[1]<<endl;

i++;
}

string res="";
REP(i,n)
{
    if(start[i]<=times && ends[i]>=times)
        res.push_back('1');
        else
        res.push_back('0');

}
cout<<res<<endl;


/*
cout<<"times is"<<times<<endl;

REP(i,n)
cout<<start[i]<<"\t"<<ends[i]<<endl;


*/

}



return 0;
}
