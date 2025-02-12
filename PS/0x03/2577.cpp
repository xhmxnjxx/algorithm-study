#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 1;
    int occurence[10] = {0};
    for(int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        result *= num;
    }


    string resultToString = to_string(result);

    for(int i = 0; i < resultToString.length(); i++) {
        int digit = resultToString[i] - '0'; // '0'을 빼서 정수로 전환
        occurence[digit]++;
    }

    for(int i = 0; i < 10; i++) {
        cout << occurence[i] << "\n";
    }

    return 0;
}