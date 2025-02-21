#include <iostream>
using namespace std;

int dat[10001];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
   if(pos > 0) {
        pos --;
        cout <<  dat[pos] << "\n";
   } else {
        cout <<  -1 << "\n";
   }
  
}

void size() {
    cout << pos << "\n";
}

void empty() {
    pos > 0 ? cout << 0 << "\n" : cout << 1 << "\n";
}

void top() {
    pos > 0 ? cout << dat[pos - 1] << "\n" : cout << -1 << "\n";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while(N--) {
        string cmd;
        cin >> cmd;
        if(cmd == "push") {
            int x;
            cin >> x;
            push(x);
        } else if(cmd == "pop") {
            pop();
        } else if (cmd == "size") {
            size();
        } else if(cmd == "empty") {
            empty();
        } else if(cmd == "top") {
            top();
        }
    }
    return 0;
}