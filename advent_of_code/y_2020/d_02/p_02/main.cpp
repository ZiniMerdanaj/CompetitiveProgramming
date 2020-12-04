#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, ct, res = 0;
    char temp;
    char c;
    string s;

    while(cin >> a >> temp >> b >> c >> temp >> s) {

        ct = 0;
        if(s[a-1] == c) ct++;
        if(s[b-1] == c) ct++;

        if(ct == 1) res++;
    }

    cout << res;

    return 0;
}