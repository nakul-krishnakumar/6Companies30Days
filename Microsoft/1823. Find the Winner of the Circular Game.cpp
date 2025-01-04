#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k) {
    vector<int> friends;
    for (int i=1; i<=n; i++) {
        friends.push_back(i);
    }

    int start = 0;
    while (friends.size() > 1) {
        start = (start + k - 1) % friends.size();
        friends.erase(friends.begin() + start);
    }

    return friends[0];
} // O(n^2)

/*  Time Complexity -> O(n)
    int findTheWinner(int n, int k) {
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            ans = (ans + k) % i;
        }
        // add 1 to convert back to 1 indexing
        return ans + 1;
    }
*/

int main() {
    int n, k;
    cin >> n >> k;
    cout << "Winner: " << findTheWinner(n, k);
}