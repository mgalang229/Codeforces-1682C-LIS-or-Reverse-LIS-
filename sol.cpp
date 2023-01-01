#include <bits/stdc++.h>
using namespace std;

/*

2 5 4 5 2 4
2 4 5 5 4 2

palindrome of increasing numbers
first half -> 1 to k
second half -> n to k

2 2 2 4 4 5 5 5
2 4 5 5 5 4 2 2

2 = 3
4 = 2
5 = 3

1 3 3 2
solo = 2
not solo = 1

either a or a'

1 2 4 3 1
solo = 1
not solo = 3

2 3 4 5
2 5 4 3
= (n/2)

2 3 4 5 6
2 6 3 5 4
= ceil(n/2)

*/

void test_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int solo = 0;
    for(pair<int, int> p : mp) {
        if(p.second > 1) {
            solo++;
        }
    }
    int not_solo = (int) mp.size() - solo;
    cout << solo + (not_solo + 1) / 2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        test_case();
    }
}
