#include<bits/stdc++.h>
using namespace std;

void explainQueue() {
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() +=5;

    cout << q.back() << " "; //4+5 = 9

    // q= {1,2,9}
    cout << q.front(); //1

    q.pop(); //{2,9}

    q.front(); //2

    //rest same as stack
}