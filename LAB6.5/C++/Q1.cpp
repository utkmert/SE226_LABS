#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list<int> intersection(list<int> list1, list<int> list2) {
    list<int> result;
    for (int element : list1) {
        if (find(list2.begin(), list2.end(), element) != list2.end()) {
            result.push_back(element);
        }
    }
    return result;
}

int main() {
    list<int> list1 = {1,2,3,4,5};
    list<int> list2 = {1,2,4,5,7,9,10,16};
    list<int> result = intersection(list1, list2);
    for (int element : result) {
        cout << element << " ";
    }
    return 0;
}
