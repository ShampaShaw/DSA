#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p={1,3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> q = {1, {3,4} };

    cout << q.first << " " << q.second.second << " " << q.second.first;

    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6} };

    cout << arr[1].second;
}