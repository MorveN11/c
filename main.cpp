#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define MT make_tuple
#define PB push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define SQ(a) ((a) * (a))
#define max3(a, b, c) max((a), max((b), (c)))
#define max4(a, b, c, d) max(max3(a, b, c), d)
#define min3(a, b, c) min((a), min((b), (c)))
#define min4(a, b, c, d) min(min3(a, b, c), d)
#define fastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define FOR(i, a, b) for (int i = (a); i <  (b); (i)++)
#define ROF(i, a, b) for (int i = (a); i >= (b); (i)--)
#define REP(i, a, b) for (int i = (a); i <= (b); (i)++)
#define EACH(x, xs)  for (auto &x : (xs))

typedef pair<int, int> pii;
typedef tuple<long long, long long, long long> tiii;
typedef pair<long long, long long> pll;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef vector<string> vs;


void print(int x)                 {cerr << x;}
void print(long x)                {cerr << x;}
void print(long long x)           {cerr << x;}
void print(unsigned x)            {cerr << x;}
void print(unsigned long x)       {cerr << x;}
void print(unsigned long long x)  {cerr << x;}
void print(float x)               {cerr << x;}
void print(double x)              {cerr << x;}
void print(long double x)         {cerr << x;}
void print(char x)                {cerr << '\'' << x << '\'';}
void print(const char *x)         {cerr << '\"' << x << '\"';}
void print(const string &x)       {cerr << '\"' << x << '\"';}
void print(bool x)                {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void print(const pair<T, V> &x)   {__print(x.F); cerr << ':'; __print(x.S);}
template<typename T> // for data structures (vector, set, map, etc)
void print(const T &xs)           {cerr << "[ ";EACH (x, xs) {__print(x);cerr << ' ';}cerr << ']';}

void print()               {cerr << "]\n";}
template <typename T, typename... V>
void print(T t, V... v)    {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

void cfgIO() {
    fastIO;
}

const int MOD = 1e9 + 7;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1};

void solve() {
    int l, r; cin >> l >> r;
    cout << l+r;
}

int main() {
    cfgIO();
    solve();
    return 0;
}