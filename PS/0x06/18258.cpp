#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    queue<int> Q;
    cin >> N;
    while(N--) {
        string cmd;
        cin >> cmd;
        if(cmd=="push"){
            int x;
            cin >> x;
            Q.push(x);
        } 
        else if(cmd=="pop"){
            if(Q.empty()) cout << -1 << '\n';
            else {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if(cmd=="size") cout << Q.size() << '\n';
        else if(cmd=="empty") cout << (int)(Q.empty()) << '\n';
        else if(cmd=="front"){
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.front() << '\n';
        }
        else{ //back
            if(Q.empty()) cout << -1 << '\n';
            else cout << Q.back() << '\n';
        }
    }

    return 0;
}