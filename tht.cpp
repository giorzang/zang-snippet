#include <bits/stdc++.h>
// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#ifndef Zang_LOCAL
#define debug(...) "Kawaiiii"
#endif
#define fi first
#define se second
#define pb push_back
#define pf push_front

using namespace std;

struct timer {
    double t;
    timer() { t = clock(); }
    ~timer() { cout << "\n=====\nUsed: " << setprecision(3) << get_time() << " s\n"; }
    double get_time() { return (clock() - t) / CLOCKS_PER_SEC; }
};

/* --------------[ TEMPLATE - Forked from dlbm1302 ]-------------- */
namespace {
    // macros definitions
    #define Gint Read<ll>()
    #define Gstr Read<string>()
    #define sz(x) int(x.size())
    #define all(a)  (a).begin(),  (a).end()
    #define rall(a) (a).rbegin(), (a).rend()
    #define mset(a, x) memset(a, x, sizeof(a))
    #define For(i, u, v) for (int i = (u), _n_ = (v); i <= _n_; i++)
    #define Rof(i, u, v) for (int i = (u), _n_ = (v); i >= _n_; i--)

    // typedefs & constants
    using ll = long long;       using ld = long double;   using ull = uint64_t;
    using pii = pair<int, int>; using pll = pair<ll, ll>;       mt19937_64 rng;
    template<class T> using MaxHeap = priority_queue<T, vector<T>,    less<T>>;
    template<class T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;
    const ld eps = 0.01 * 0.01 * 0.01 * 0.01, pi = 3.1415926535897932384626433;
    const ll mod = 1e9 + 7, lim = 1e6 + 2312, e30 = 1ll << 30, e60 = 1ll << 60;

    // useful functions
    template<class A, class B>
    bool Maxz(A &a, B b) { return a < b && (a = b, true); }
    template<class A, class B>
    bool Minz(A &a, B b) { return b < a && (a = b, true); }
    template<class T> T Read() { T x; return cin >> x, x; }
} // END OF TEMPLATE

/* --------------------[ MAIN CODE GOES HERE ]-------------------- */

int main() {
#ifdef Zang_LOCAL
    timer start_t;
#endif
    cin.tie(nullptr) -> sync_with_stdio(false);
    
}

// -------------------------------------------------
// | author: Vu Truong Giang | created: xx.08.2022 |
// -------------------------------------------------
