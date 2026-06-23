#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> vec;
    vec.push_back(50);
    vec.push_back(10);
    vec.push_back(40);
    vec.push_back(20);
    vec.push_back(30);
    cout << "Elements inserted into vector:\n";
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\nVector Size: " << vec.size();
    cout << "\nVector Capacity: " << vec.capacity();
   sort(vec.begin(), vec.end());
    cout << "\n\nVector after Sorting:\n";
    for(int value : vec) {
        cout << value << " ";
    }
    return 0;
}
