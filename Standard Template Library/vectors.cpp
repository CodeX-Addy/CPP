#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;

    // insertion
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);

    cout << v[0] << " " << v[1] << endl;

    // vector of pairs
    vector <pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(1,2);

    vector<int>vec(5, 100); // means {100, 100, 100, 100, 100}
    vector<int>vec1(5); // means {0,0,0,0,0} or any garbage depending upon compiler

    vector<int>vec2(vec1); //copy the value of vec1 to vec2, separate copy

    vector<int>::iterator it = v.begin(); // it points to the memory and not the first element
    it++;
    cout << *(it) << endl; //to print the first element 

    vector<int>::iterator it1 = v.end(); // it points to the memory somewhere exactly right after the last element and not the last element

    //looping over the vector
    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto i: v)
        cout << i << " ";

    // v = {1, 2, 3}
    v.erase(v.begin(), v.begin() + 2); // it will delete 1 and 2 like [v.begin(), v.end)

    cout << endl;
    
    for(auto i: v)
        cout << i << " ";


}
