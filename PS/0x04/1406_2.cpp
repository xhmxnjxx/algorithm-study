// 야매 인접 리스트를 이용한 풀이

#include <iostream>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX]; 
int nxt[MX];
int unused = 1;

void traverse(){
    int cur = nxt[0];
    while(cur != -1){
      cout << dat[cur];
      cur = nxt[cur];
    }
  }

void insert(int addr, char c){
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) { // 마지막 원소가 아니라면
        pre[nxt[addr]] = unused;
    }
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) {
        pre[nxt[addr]] = pre[addr];
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int M;
    int cursor = 0;

    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);

    cin >> s;
    for(auto c : s) {
        insert(cursor, c);
        cursor++;
    }
    cin >> M;
    while(M--) {
       char cmd;
       cin >> cmd;
       switch (cmd)
       {
       case 'L': // 왼쪽으로 커서 이동
        if(pre[cursor] != -1) { // 커서가 문장의 맨 앞인 경우가 아니라면
            cursor = pre[cursor];
        }
        break;
       case 'D': // 오른쪽으로 커서 이동
        if(nxt[cursor] != -1) { // 커서가 문장의 맨 뒤인 경우가 아니라면
            cursor = nxt[cursor];
        }
        break;
        case 'B': // 커서 왼쪽에 있는 문자 삭제
        if(pre[cursor] != -1) { // 커서가 문장의 맨 앞인 경우가 아니라면
            erase(cursor);
            cursor = pre[cursor];
        }
        break;
       case 'P': // $라는 문자를 커서 왼쪽에 추
        char c;
        cin >> c;
        insert(cursor, c);
        cursor = nxt[cursor];
        break;
       default:
        break;
       }
    }
    traverse();    
    return 0;
}