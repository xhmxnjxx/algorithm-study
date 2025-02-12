#include <iostream>
using namespace std;

int main(void) {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    string S;
    cin >> S;          

    for(char c = 'a'; c <= 'z'; c++) {
        int cnt = 0;
        for(int j = 0; j < S.length(); j++) {
            if(S[j] == c) {
                cnt++;
            }
        }
         cout << cnt << " ";
    }

    return 0;
}