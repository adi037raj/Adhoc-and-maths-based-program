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
const int p=1001;
void my(){
//cout<<"ask";
}

bool check_it(int a[][p],int b[][p],int m,int n)
{
REP(i,m)
REP(j,n)
if(a[i][j]!=b[i][j])return false;
my();
return true;


}



bool find_ans(int a[][p],int b[][p],int m,int n,int x ){
int k;
 int diff;

if(m<x && n<x)return check_it(a,b,m,n);
if(m<x){
my();

    REP(i,m)
    {
my();
        REP(j,n-x+1)
        {
            if(a[i][j]!=b[i][j])
            {
               diff=b[i][j]-a[i][j];
                a[i][j]+=diff;
                k=1;
                while(k<x)
                    a[i][j+k]+=diff,k++;
my();
            }

        }
    }
    return check_it(a,b,m,n);

}
if(n<x)
{
    REP(i,n)
    {
        my();
        REP(j,m-x+1)
        {
            if(a[j][i]!=b[j][i])
            {
                 diff=b[j][i]-a[j][i];
                a[j][i]+=diff;
                k=1;
                while(k<x)
                    a[j+k][i]+=diff,k++;

my();
            }


        }



    }
    return check_it(a,b,m,n);


}
if(n>=x && m>=x)

{my();
    REP(i,m)
    {
        REP(j,n-x+1)
        {
            if(a[i][j]!=b[i][j])
            {

                 diff=b[i][j]-a[i][j];
                a[i][j]+=diff;
                k=1;
                while(k<x)
                {
                    a[i][j+k]+=diff;
                    k++;
                }
            }

        }
    }


    REP(i,n){
    REP(j,m-x+1){my();

    if(a[j][i]!=b[j][i]){
         diff=b[j][i]-a[j][i];
                a[j][i]+=diff;
                k=1;
                while(k<x)
                {
                    a[j+k][i]+=diff;
                    k++;
                }my();



    }


    }my();



    }my();

my();
}
return check_it(a,b,m,n);my();
}






int main(){
fast_io();
int t;
my();
cin>>t;
while(t--)
{
    my();
int m,n,x;
cin>>m>>n>>x;my();
my();
int a[p][p],b[p][p];
REP(i,m)REP(j,n)cin>>a[i][j];
REP(i,m)REP(j,n)cin>>b[i][j];my();
if(find_ans(a,b,m,n,x))
cout<<"Yes\n";
else
    cout<<"No\n";my();

my();
my();

}



return 0;
}
