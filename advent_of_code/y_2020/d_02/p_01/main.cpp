#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, i, count, res = 0;
    char temp;
    char c;
    string s;

    while(true) {
        cin >> a >> temp >> b >> c >> temp >> s;
        if(s == "fqmwcncsmp") break;

        i = 0, count = 0;
        while(s[i] != '\0') {
            if(s[i] == c) count++;
            i++;
        }

        if(count >= a && count <= b) res++;
    }

    cout << res;

    return 0;
}