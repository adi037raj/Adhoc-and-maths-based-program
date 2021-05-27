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

int distinct_count(vector<char> a,vector<char> b)
{

    unordered_set<char> x;
    for(auto i:a)
        x.insert(i);
    for(auto i:b)
        x.insert(i);
    return x.size();
}

int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
int n;
unordered_map<string,vector<char>> mp;
cin>>n;
vector<string> x;
string s[n];
REP(i,n)
{
    cin>>s[i];
    string body=s[i].substr(1,s[i].size()-1);

//    cout<<"value of s[i] is"<<s[i]<<" and body is "<<body<<endl;

    mp[body].push_back(s[i][0]);


}
for(auto const & pair:mp)
{

    x.push_back(pair.first);
}





int res=0,temp;
n=mp.size();
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        temp=distinct_count(mp[x[i]],mp[x[j]]);
        res+=(temp - mp[x[i]].size()) * (temp-mp[x[j]].size());

    }

}

cout<<res*2<<endl;
mp.clear();
x.clear();
}



return 0;
}
