#include <iostream>
#include <list>
using namespace std;

const int MX = 5001;
int pre[MX];
int nxt[MX];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);


    for(int i = 1; i <= N; i++) {
        if(i == 1) {
            pre[i] = N;
            nxt[i] = i + 1;
        }
        else if(i == N) {
            pre[i] = i - 1;
            nxt[i] = 1;
        }
        else {
            pre[i] = i - 1;
            nxt[i] = i + 1;
        }
    }

    cout << "<";
    int cur = 1;

    while(N > 0) { // 사람들이 모두 제거될 때까지
        for(int i = 0; i < K - 1; i++) { // k번째
            cur = nxt[cur]; // 다음 사람으로 이동
        }
        if(N == 1) {
            cout << cur << ">";
        }
        else {
            cout << cur << ", ";
        }
        nxt[pre[cur]] = nxt[cur];
        pre[nxt[cur]] = pre[cur];
        cur = nxt[pre[cur]]; // 커서를 다음 사람으로 이동
        N --;
    }

    return 0;
}