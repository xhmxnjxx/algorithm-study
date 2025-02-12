#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int a[1000001];
    bool occurence[2000001] = {false};
    int cnt = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;

    for(int i = 0; i < n; i++) {
        int diff = x - a[i];
        if(diff > 0 && occurence[diff]) {
            cnt++;
        }
        occurence[a[i]] = true;
    }

    cout << cnt;

    return 0;
}