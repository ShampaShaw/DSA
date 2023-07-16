#include<bits/stdc++.h>
using namespace std;

void explainVector() {
    vector<int> v;    //form a empty vector of int type

    v.push_back(1);      //giving a value of 1 to empty vector
    v.emplace_back(2);   //dynamicall increases it size and adding 2 {1,2};  //faster than pusg back

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); //{100,100,100,100,100}

    vector<int> v(5); //size of 5 with garbage value

    vector<int> v1(5,20); //{20,20,20,20,20}
    vector<int> v2(v1);  //coppy of v1






    vector<int>::iterator it = v.begin();  //point to the memory of the first element
    it++;                //shifted to next memory
    cout<< *(it) << " "; //by giving * element inside memory is excess

    it = it+2;

    //v={20,10,30,40}

    vector<int>::iterator it = v.end();   //after 40

    // vector<int>::iterator it = v.rend();  //{40,30,10,20} after 20

    // vector<int>::iterator it = v.rbegin(); //pointing to 40 reverse iterator

    cout << v[0] << " " << v.at(0); //element at position 0

    cout << v.back() << " ";      //{10,20,30}  element at 30

    //loop

    for( vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout<< *(it) << " ";
    }

    for (auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it:v) {
        cout << it << " ";
    }


    //{10,20,12,35}
    v.erase(v.begin()+1);

    //{10,20,12,23,35}
     v.erase(v.begin()+2, v.begin()+4); //delete from 12 to 23 (10,20,35)

    //insert function

    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(), 300); //{300,100,100}
    v.insert(v.begin() + 1, 2, 5); //{300,5,5,100,100}

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,5,5,100,100}

    //{10,20}
    cout << v.size(); // 2

    //{10,20}
    v.pop_back(); //{10}

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40}  v2 -> {10,20}

}