#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2;
    int occur[26] = {0};
    int cnt = 0;


    cin >> str1 >> str2;

    for(int i = 0; i < str1.length(); i++) {
        int idx = str1[i] - 'a';
        occur[idx] ++; 
    }
    for(int i = 0; i < str2.length(); i++) {
        int idx = str2[i] - 'a';
        occur[idx] --; 
    }
    for(int i = 0; i < 26; i++) {
        if(occur[i] != 0) {
            if(occur[i] > 0)
                cnt += occur[i];
            else
                cnt -= occur[i];
        }
    }

    cout << cnt;
    return 0;
}