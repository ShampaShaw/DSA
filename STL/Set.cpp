#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin, end,rbegin,rend,size,empty,swap are same as vector

    //{1,2,3,4,5}
    auto it = st.find(3); //return iterator which points to the 3

    //{1,2,3,4,5}
    auto it = st.find(6); //if the number is not present it return the iterator after the end element

    //{1,4,5}
    st.erase(5); //{1,4}

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);        //takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //erase {2,3} we get {1,4,5}

    //upper_bound(), lower_bound() works in the same way as in vector

    //syntax of upper_bound(), lower_bound()
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

}

void explainMultiSet() {
    //everything is same as set
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.insert(1);  //{1,1,1}

    ms.erase(1); //all 1's erased

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2); //find element 1 and go till 2

}