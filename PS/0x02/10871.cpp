#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, X;
    cin >> N >> X;

    while(N--) {
        int n;
        cin >> n;
        if(n < X) {
            cout << n << " ";
        }
    }
}