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

/* -------------[ TEMPLATE - Forked from dlbm1302 ]------------- */
namespace {
    // macros definitions
    #define Gint Read<ll>()
    #define Gstr Read<string>()
    #define sz(x) int(x.size())
    #define bit(x, i) (((x) >> (i)) & 1)
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

ostream &submain(int testcase) {
    
}

/* -------------[ Author: Vu Truong Giang - giorzang ]-------------*/
int main() {
#define Task ""
if (fopen(Task".inp", "r")) {
    freopen(Task".inp", "r", stdin);
    freopen(Task".out", "w", stdout); }
#ifdef Zang_LOCAL
    rng.seed((ll)main ^ time(0));
    auto starttime = chrono::high_resolution_clock::now();
#endif

    cin.tie(nullptr) -> sync_with_stdio(false);
    int tc = Gint;
    For(test, 1, tc) submain(test);

#ifdef Zang_LOCAL
    auto endtime = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(endtime - starttime).count();
    cout << "\n=====" << "\nUsed: " << duration << " ms\n";
#endif
}

/* ---------------[ THIS IS MY KEYBOARD ¯_(ツ)_/¯ ]--------------- */
/*
 * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐  ┌───┬───┬───┐
 * │Esc│   │ F1│ F2│ F3│ F4│ │ F5│ F6│ F7│ F8│ │ F9│F10│F11│F12│  │P/S│S L│P/B│   ┌┐    ┌┐    ┌┐
 * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘  └───┴───┴───┘   └┘    └┘    └┘
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐  ┌───┬───┬───┐  ┌───┬───┬───┬───┐
 * │~ `│! 1│@ 2│# 3│$ 4│% 5│^ 6│& 7│* 8│( 9│) 0│_ -│+ =│ BacSp │  │Ins│Hom│PUp│  │Num│ / │ * │ - │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤  ├───┼───┼───┤  ├───┼───┼───┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│ | \ │  │Del│End│PDn│  │ 7 │ 8 │ 9 │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤  └───┴───┴───┘  ├───┼───┼───┤ + │
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│" '│ Enter  │[Zang] (giorzang)│ 4 │ 5 │ 6 │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤      ┌───┐      ├───┼───┼───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │< ,│> .│? /│  Shift   │      │ ↑ │      │ 1 │ 2 │ 3 │   │
 * ├─────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤  ┌───┼───┼───┐  ├───┴───┼───┤ E││
 * │ Ctrl│ Win│ Alt│         Space         │ Alt│ Win│Menu│Ctrl│  │ ← │ ↓ │ → │  │   0   │ . │←─┘│
 * └─────┴────┴────┴───────────────────────┴────┴────┴────┴────┘  └───┴───┴───┘  └───────┴───┴───┘
*/
