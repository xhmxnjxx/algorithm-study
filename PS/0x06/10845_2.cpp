#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0;
int tail = 0;

void push(int x){
  dat[tail++] = x;
}

void pop(){
  head++;
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail-1];
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  while(N--){
    string cmd;
    cin >> cmd;
    if(cmd=="push"){
      int x;
      cin >> x;
      push(x);
    }
    else if(cmd=="pop"){
      if(tail==head) cout << -1 << '\n';
      else{
        cout << front() << '\n';
        pop();
      }
    }
    else if(cmd=="size") cout << tail-head << '\n';
    else if(cmd=="empty") cout << (int)(tail==head) << '\n';
    else if(cmd=="front"){
      if(tail==head) cout << -1 << '\n';
      else cout << front() << '\n';
    }
    else{ // back
      if(tail==head) cout << -1 << '\n';
      else cout << back() << '\n';
    }
  }
  return 0;
}