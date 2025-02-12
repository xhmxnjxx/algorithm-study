#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    bool isPossible = true;
    int occur[26] = {0};

    cin >> N;
    for(int i = 0; i < N; i++) {
        bool isPossible = true;
        int occur[26] = {0};
        string str1, str2;
        cin >> str1 >> str2;
        for(int j = 0; j < str1.length(); j++) {
            int idx = str1[j] - 'a';
            occur[idx] ++;
        }
        for(int j = 0; j < str2.length(); j++) {
            int idx = str2[j] - 'a';
            occur[idx] --;
        }

        for(int j = 0; j < 26; j++) {
            if(occur[j] != 0) {
                isPossible = false;
            }
        }
        if(isPossible)
            cout << "Possible" << "\n";
        else
            cout << "Impossible" << "\n";
    }
    return 0;
}