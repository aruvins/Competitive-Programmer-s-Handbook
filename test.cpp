# include <bits/stdc++.h>

using namespace std;

long long factorial_mod(int n, int m) {
    long long x = 1;
    for (int i = 2; i <= n; i++) {
        x = (x*i) % m;
    }
    return x % m;
}

int main() {
    // Solution comes here
    int n;
    int m;

    cin >> n >> m;
    cout << factorial_mod(n, m) << "\n";
}