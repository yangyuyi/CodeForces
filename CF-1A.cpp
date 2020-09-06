#include <iostream>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    unsigned long long h = (n % a == 0) ? n / a : n / a + 1;
    unsigned long long v = (m % a == 0) ? m / a : m / a + 1;
    unsigned long long ans = h * v;
    cout << ans << endl;
    return 0;
}