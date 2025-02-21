#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, v;
    int occur[201] = {0};

    cin >> N;
    for(int i = 0; i < N; i++) {
        int e;
        cin >> e;
        occur[e + 100] ++;
    }
    cin >> v;

    cout << occur[v+100];

    return 0;
}