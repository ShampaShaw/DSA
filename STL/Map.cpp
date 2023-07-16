#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    
    map<int, int> mpp; //int-key int-value

    map<int, pair<int, int>> mpp;
    map< pair<int, int>, int> mpp;

   mpp[1] = 2;
   mpp.emplace({3,1});

   mpp.insert({2,4});

   mpp[{2,3}] = 10;

   for( auto it: mpp) {
    cout << it.first << " " << it.second << endl;
   }

   cout << mpp[1]; //2
   cout << mpp[5]; //print 0 or null because 0 doesn't exist

   auto it = mpp.find(3); //it={3,1}
   cout << *(it).second;

   auto it = mpp.find(5); //if not present then its ppoint after the map

   auto it = mpp.lower_bound(2);
   auto it = mpp.upper_bound(3);

   //erase swap empty size are same as above
}

 void explainMultiMap() {
    //same as map, only it stores multiple key
    //only map[key] cannot be used here

   }

   void explainUnorderedMap(){
    //same as set and unordered_set difference;
    //unique key but not sorted
   }

   bool comp(pair<int, int>p1, pair<int, int>p2) {
        if(p1.second < p2.second) {
            return true;
        } else if(p1.second == p2.second){
            if(p1.first>p2.first) return true;
        } 
        return false;
   }
     