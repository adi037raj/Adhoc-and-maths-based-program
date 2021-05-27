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
#define mymax 200005
int fuck, goat, hero, ink, A[mymax], B[mymax], C[mymax], D[mymax], ans;
bool E[mymax];

void muy(int a, int b, int n) {
    if (a <= ink && ink <= b) {
        ans = n;

        return;
    }

    for (int i = 0; i < goat; i++) {
        if ((a <= A[i] && A[i] <= b) || (a <= B[i] && B[i] <= b)) {
            if (!E[i] ) {
                E[i] = true;

                muy(C[i], D[i], n + 1);
            }
        }
    }
}

void aditya_calls() {
    cin >> fuck >> goat >> hero >> ink;

    for (int i = 0; i < goat; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    ans = -1;

    muy(hero, hero, 0);

    cout << ans << endl;
}

int main() {
    int t;

    cin>>t;

    while (t--) {
        aditya_calls();
    }

    return 0;
}
