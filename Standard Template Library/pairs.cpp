#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {2, {1, 2}};
    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    pair<int, string> arr[] = {{1, "tom"}, {2, "jerry"}};
    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
}
