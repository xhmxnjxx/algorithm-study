// STL list를 이용한 풀이

#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int M;
    list<char> list;

    cin >> s;
    for(auto c : s) {
       list.push_back(c);
    }
    auto cursor = list.end();
    cin >> M;
    while(M--) {
       char cmd;
       cin >> cmd;
       switch (cmd)
       {
       case 'L': // 왼쪽으로 커서 이동
        if(cursor != list.begin()) { // 커서가 문장의 맨 앞인 경우가 아니라면
            cursor--;
        }
        break;
       case 'D': // 오른쪽으로 커서 이동
        if(cursor != list.end()) { // 커서가 문장의 맨 뒤인 경우가 아니라면
            cursor ++;
        }
        break;
        case 'B': // 커서 왼쪽에 있는 문자 삭제
        if(cursor != list.begin()) { // 커서가 문장의 맨 앞인 경우가 아니라면
            cursor --; // 커서의 왼 쪽에 있는 문서를 삭제하기 위함
            cursor = list.erase(cursor);
        }
        break;
       case 'P': // $라는 문자를 커서 왼쪽에 추
        char c;
        cin >> c;
        list.insert(cursor, c);
        break;
       default:
        break;
       }
    }
    for(auto c : list) {
        cout << c;
    }   
    return 0;
}