#include <bits/stdc++.h>
#ifndef Zang_LOCAL
#define debug(...) "Kawaiiii"
#endif
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define fi first
#define se second
#define pb push_back

using namespace std;

/* ------------------------[ TEMPLATE ]------------------------ */
namespace {
    // macros definitions
    #define Gint Read<ll>()
    #define Gstr Read<string>()
    #define all(a)  (a).begin(),  (a).end()
    #define rall(a) (a).rbegin(), (a).rend()
    #define For(i, u, v) for (int i = (u), _n_ = (v); i <= _n_; i++)
    #define Rof(i, u, v) for (int i = (u), _n_ = (v); i >= _n_; i--)

    // typedefs & constants
    using ll = long long; using ld = long double; mt19937_64 rng;
    using pii = pair<int, int>; using pli = pair<ll, int>; using pll = pair<ll, ll>;
    template<class T> using MaxHeap = priority_queue<T, vector<T>,	  less<T>>;
    template<class T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;
    const ld eps = 0.01 * 0.01 * 0.01 * 0.01, pi = 3.1415926535897932384626433;
    const ll mod = 1e9 + 7, lim = 1e6 + 2312, e30 = 1ll << 30, e60 = 1ll << 60;

    // useful functions
    template<class A, class B>
    bool Maxz(A &a, B b) { return a < b && (a = b, true); }
    template<class A, class B>
    bool Minz(A &a, B b) { return b < a && (a = b, true); }
    template<class T> T Read() { T x; return cin >> x, x; }
} // main template

/* --------------------[ MAIN CODE GOES HERE ]-------------------- */

ostream &submain(int testcase) {
    // YOUR CODE GOES HERE
    
}

int main() {
    cin .tie(nullptr) -> sync_with_stdio(false);
    cout.tie(nullptr) -> sync_with_stdio(false);
    cerr.tie(nullptr) -> sync_with_stdio(false);

// PLEASE DO NOT EDIT, THANKS !!
#ifdef Zang_LOCAL
    //freopen("inp.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //freopen("err.txt", "w", stderr);
    rng.seed((ll)main ^ time(0));
    auto starttime = chrono::high_resolution_clock::now();
#endif

    int testcases = 1;
    For(test, 1, testcases) submain(test);

// PLEASE DO NOT EDIT, THANKS !!
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
