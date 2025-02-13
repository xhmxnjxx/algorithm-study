#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;
    while(N--) {
        list<char> list;
        auto cursor = list.begin();
        string input, password;
        cin >> input;
        for(auto c : input) {
            switch (c)
            {
            case '-': // 백스페이스 입력
                if(cursor != list.begin()) { // 커서의 바로 앞에 글자가 존재한다면
                    cursor--;
                    cursor = list.erase(cursor);
                }
                break;
            case '<': // 커서의 위치를 왼쪽으로 이동
                if(cursor != list.begin()) { // 커서가 맨 앞에 있지 않는 경우에만
                    cursor --;
                }
                break;
            case '>': // 커서의 위치를 오른쪽으로 이동
                if(cursor != list.end()) {
                    cursor ++;
                }
                break;
            default:
                list.insert(cursor, c);
                break;
            }
        }
        for(auto c : list) {
            cout << c;
        }
        cout << "\n";
        
    }

    return 0;
}