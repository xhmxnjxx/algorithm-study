#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    // 1. 원소 제거: pop_front
    // 2. 왼쪽으로 이동: push_back() -> pop_front
    // 3. 오른 쪽으로 이동 push_front() -> pop_back()
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M, idx, cnt=0;
    deque<int> DQ;
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        DQ.push_back(i);
        while(M--) {
        int x;
        cin >> x;
        for(int i = 0; i < DQ.size(); i++){
            if(x == DQ[i]) {
                idx = i;
                break;
            }
        }
        if(idx <= DQ.size()/2) { // front에 더 가까울 경우: 2. 왼쪽으로 이동(push_back() -> pop_front())
            while(1) {
                if(DQ.front() == x) {
                    DQ.pop_front();
                    break;
                }
                DQ.push_back(DQ.front());
                DQ.pop_front();
                cnt++;
            }
        }
        else { // back에 더 가까울 경우: 3. 오른쪽으로 이동(push_front() -> pop_back())
            while(1) {
                if(DQ.front() == x) {
                    DQ.pop_front();
                    break;
                }
                DQ.push_front(DQ.back());
                DQ.pop_back();
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

// 처음에 틀린 이유
// 오답 풀이
// if(idx < DQ.size()/2)
// 정답 풀이
// if(idx <= DQ.size()/2)
// 이 경우 왼쪽에서만 뺴는 것이 가능하기 때문에 왼쪽으로 이동하는 것이 더 효율적임

