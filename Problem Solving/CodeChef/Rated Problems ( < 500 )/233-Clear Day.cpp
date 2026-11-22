#include <bits/stdc++.h>
using namespace std;

int main() {
    int tar, cnt = 0;
    cin >> tar;
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
        if (ar[i] == tar) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
