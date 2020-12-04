#include <bits/stdc++.h>

using namespace std;

int main(void) {

    long long int arr[10000];
    int n = 1;
    int i = 0;
    bool found = false;

    while(true) {
        cin >> arr[i];
        n++;
        if(arr[i] == 1779) break;
        i++;
    } 

    for(i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 2020) {
                    cout << arr[i] * arr[j] * arr[k];
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(found) break;
    }

    return 0;
}