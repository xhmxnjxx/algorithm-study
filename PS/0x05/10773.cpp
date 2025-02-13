#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K , sum = 0;
    stack<int> S;
    cin >> K;
    while(K--) { // K번동안 반복
        int num;
        cin >> num;
        if(num == 0) {
            if(!S.empty()) {
                S.pop();
            }
        } 
        else {
            S.push(num);
        }
    }

    while(!S.empty()) {
        sum += S.top();
        S.pop();
    }

    cout << sum;
    return 0;
}