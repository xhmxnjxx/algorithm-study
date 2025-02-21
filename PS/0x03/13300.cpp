#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    int studentTable[6][2] = {0};
    int cnt = 0;

    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        int S, Y;
        cin >> S >> Y;
        studentTable[Y-1][S] ++;
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 2; j++) {
            int student = studentTable[i][j];
            if(student != 0) {
                int mod = student % K;
                if(mod == 0) {
                    cnt += student / K;
                }
                else {
                    int diff = K - student % K;
                    cnt += (student + diff) / K;
                }
            }
        }
       
    }

    cout << cnt;

    return 0;
}