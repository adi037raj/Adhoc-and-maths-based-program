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
bool check_this_win(set<pi> for_x)
{
    if(for_x.find({0,0})!=for_x.end() && for_x.find({0,1})!=for_x.end() && for_x.find({0,2})!=for_x.end())
        return true;
    if(for_x.find({1,0})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({1,2})!=for_x.end())
        return true;
    if(for_x.find({2,0})!=for_x.end() && for_x.find({2,1})!=for_x.end() && for_x.find({2,2})!=for_x.end())
        return true;
    if(for_x.find({0,0})!=for_x.end() && for_x.find({1,0})!=for_x.end() && for_x.find({2,0})!=for_x.end())
        return true;
    if(for_x.find({0,1})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,1})!=for_x.end())
        return true;

    if(for_x.find({0,2})!=for_x.end() && for_x.find({1,2})!=for_x.end() && for_x.find({2,2})!=for_x.end())
        return true;

    if(for_x.find({0,0})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,2})!=for_x.end())
        return true;
    if(for_x.find({0,2})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,0})!=for_x.end())
        return true;
    return false;


}

bool check_if_multiple_win(set<pi> for_x)
{
    int x=0;
    if(for_x.find({0,0})!=for_x.end() && for_x.find({0,1})!=for_x.end() && for_x.find({0,2})!=for_x.end())
        x++;
    if(for_x.find({1,0})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({1,2})!=for_x.end())
        x++;
    if(for_x.find({2,0})!=for_x.end() && for_x.find({2,1})!=for_x.end() && for_x.find({2,2})!=for_x.end())
        x++;
    if(for_x.find({0,0})!=for_x.end() && for_x.find({1,0})!=for_x.end() && for_x.find({2,0})!=for_x.end())
        x++;
    if(for_x.find({0,1})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,1})!=for_x.end())
        x++;

    if(for_x.find({0,2})!=for_x.end() && for_x.find({1,2})!=for_x.end() && for_x.find({2,2})!=for_x.end())
        x++;

    if(for_x.find({0,0})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,2})!=for_x.end())
       x++;
    if(for_x.find({0,2})!=for_x.end() && for_x.find({1,1})!=for_x.end() && for_x.find({2,0})!=for_x.end())
        x++;

    if(x==1 || x==0)
        return true;
    return false;





}


int myfunction(char a[3][3],int x_times,int o_times,int blank)
{
        int fuck = 0, sex = 0;
        set<pi> x;
        if(a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')fuck=1;
        if(a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')fuck=1;
        if(a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')fuck=1;
         check_this_win(x);
        if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')fuck=1;
        if(a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')fuck=1;
        if(a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')fuck=1;
        check_if_multiple_win(x);
        if(a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')fuck=1;
        if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')fuck=1;
        check_this_win(x);
        if(a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')sex=1;
        if(a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')sex=1;

        if(a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')sex=1;
        if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')sex=1;
        if(a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')sex=1;
         check_this_win(x);
        if(a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')sex=1;
        if(a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')sex=1;
        check_if_multiple_win(x);
        if(a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')sex=1;
        check_if_multiple_win(x);
        if((fuck == 1 && sex == 1) || ((x_times-o_times)<0) || (x_times-o_times)>1)cout<<3<<"\n";
        else if(x_times == 0 && o_times == 0 && blank == 9)cout<<2<<"\n";
        else if(fuck == 1 && sex == 0 && x_times > o_times)cout<<1<<"\n";
        else if(fuck == 0 && sex == 1 && x_times == o_times)cout<<1<<"\n";
        else if(fuck == 0 && sex == 0 && blank == 0)cout<<1<<"\n";
        else if(fuck == 0 && sex == 0 && blank > 0)cout<<2<<"\n";
        else cout<<3<<"\n";
        return 0;
}


int main(){
fast_io();
 int t;
    cin>>t;
    while(t--)
    {
        ll x_times = 0, o_times =0, blank= 0;
        char a[3][3];
        REP(i,3)
        {
            REP(j,3)
            {
                cin>>a[i][j];
                if(a[i][j]=='X')x_times++;
                if(a[i][j]=='O')o_times++;
                if(a[i][j]=='_')blank++;
            }
        }
        myfunction(a,x_times,o_times,blank);

    }


return 0;
}
