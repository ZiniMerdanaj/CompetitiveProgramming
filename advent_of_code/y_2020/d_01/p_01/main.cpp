#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int arr[10000];
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
            if(arr[i] + arr[j] == 2020) {
                printf("%d", arr[i] * arr[j]);
                found = true;
                break;
            }
        }
        if(found) break;
    }

    return 0;
}