#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    queue<int> Q;
    cin >> N;
    for(int i=1; i<=N;i++) Q.push(i);
    while(!Q.empty()){
        if(Q.size() == 1) break;
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front() << '\n';
    return 0;
}