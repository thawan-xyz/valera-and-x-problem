#include <bits/stdc++.h>
#define array vector
#define uset unordered_set
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 404A - Valera and X (Codeforces)
// @url: https://codeforces.com/contest/404/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int matrix; cin >> matrix;
    uset<char> diagonal, other;

    for (int i = 0; i < matrix; ++i) {
        for (int j = 0; j < matrix; ++j) {
            char character; cin >> character;
            
            if ((i == j) || (i + j == matrix - 1)) {
                diagonal.insert(character);
            }
            else {
                other.insert(character);
            }
        }
    }

    bool valid = (diagonal.size() == 1 && other.size() == 1) && (*diagonal.begin() != *other.begin());
    cout << (valid ? "YES" : "NO");

    return 0;
}
