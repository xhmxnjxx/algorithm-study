#include <iostream>
#include <stack>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  stack<int> stack;
  while(N--){
    string cmd;
    cin >> cmd;
    if(cmd == "push"){
      int x;
      cin >> x;
      stack.push(x);
    }
    else if(cmd == "pop"){
      if(stack.empty()) cout << -1 << '\n';
      else{
        cout << stack.top() << '\n';
        stack.pop();
      }
    }
    else if(cmd == "size")
      cout << stack.size() << '\n';
    else if(cmd == "empty")
      cout << (int)stack.empty() << '\n';
    else if(cmd == "top"){
      if(stack.empty()) cout << -1 << '\n';
      else cout << stack.top() << '\n';
    }
  }
}