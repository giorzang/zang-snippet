#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

#define use_themis 0
#define int long long
const string NAME = "", inp_type = ".in", out_type = ".out";

long long Rand(long long l, long long h) {
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}


const int NTEST = 25;
signed main() {
    //
    for(int iTest = 25; iTest <= NTEST; iTest++) {
        srand((time(NULL) + iTest) * (iTest % 71) * (iTest * 71353) % 31 + iTest);
        cerr << "Make test " << iTest << " : ";
        string nTest = "";
        int buffer = iTest;
        while(buffer > 0) {
            nTest += char(buffer%10 + '0');
            buffer /= 10;
        }
        reverse(nTest.begin(), nTest.end());
        if (use_themis) {
            if (iTest < 10) nTest = '0' + nTest;
            nTest = "Test" + nTest;
            CreateDirectory(nTest.c_str(), NULL);
            nTest += '/' + NAME;
        } else nTest = NAME + nTest;
        string inName =  nTest + inp_type;
        string outName = nTest + out_type;
        ofstream inp, out;
        //ifstream fi(inName);            // stream read input
        inp.open(inName.c_str());       // stream write input
        out.open(outName.c_str());      // stream write output
        
        // Code phần sinh input, output ở đây
        int n = Rand(2e5, 2e5);
        inp << n << '\n';

        for (int i = 1; i <= 2 * n; i++) {
            inp << Rand(-1e9, 1e9) << ' ';
        }

        //fi.close();
        inp.close();
        out.close();
        cerr << "Done\n";
    }
    return 0;
}
 
