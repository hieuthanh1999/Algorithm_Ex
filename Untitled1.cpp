#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 0) return 0;
    if (n % 2 == 1) {
        return sum(n-1);
    } else {
        return n+sum(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
