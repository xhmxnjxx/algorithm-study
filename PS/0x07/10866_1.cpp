#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    deque<int> D;
    cin >> N;
    while(N--){
        string cmd;
        cin >> cmd;
        if(cmd=="push_front"){
            int x;
            cin >> x;
            D.push_front(x);
        } 
        else if(cmd=="push_back"){
            int x;
            cin >> x;
            D.push_back(x);
        }
        else if(cmd=="pop_front"){
            if(D.empty()) cout << -1 << '\n';
            else {
                cout << D.front() << '\n';
                D.pop_front();
            }
        }
        else if(cmd=="pop_back"){
            if(D.empty()) cout << -1 << '\n';
            else {
                cout << D.back() << '\n';
                D.pop_back();
            }
        }
        else if(cmd=="size") cout << D.size() << '\n';
        else if(cmd=="empty") cout << (int)D.empty() << '\n';
        else if(cmd=="front"){
            if(D.empty()) cout << -1 << '\n';
            else cout << D.front() << '\n';
        }
        else{ //back
            if(D.empty()) cout << -1 << '\n';
            else cout << D.back() << '\n';
        } 
    }
    return 0;
}