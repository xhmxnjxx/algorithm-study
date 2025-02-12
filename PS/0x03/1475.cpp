#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int occurence[10] = {0};
    
    cin >> N;

    string NToString = to_string(N);
    for(int i = 0; i <NToString.length(); i++) {
        int digit = NToString[i] - '0';
        occurence[digit] ++;
    }

    int min = 1;

    int sum = occurence[6] + occurence[9];
    if(sum % 2 == 0) {
        occurence[6] = sum / 2;
        occurence[9] = sum / 2;
    }
    else {
        occurence[6] = (sum+1) / 2;
        occurence[9] = (sum+1) / 2;
    }


    for(int i = 0; i < 10; i++) {
        if(occurence[i] > min) {
            min = occurence[i];
        }
    }

    cout << min;

    return 0;
}