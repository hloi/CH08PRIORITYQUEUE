#include <iostream>
#include <vector>
#include "priority_queue.h"
using namespace std;

int main() {
    KW::priority_queue<int, vector<int>> pq;
    pq.push(1);
    pq.push(4);
    pq.push(100);
    pq.push(67);
    pq.push(89);
    cout << pq.size() << endl;
    vector<int> testq = pq.get_container();
    cout << "print unordered heap." << endl;
    for (int i=0; i<pq.size(); i++) {
        cout << testq.at(i) << endl;
    }
    cout << "print end unordered heap." << endl;
//    int size = pq.size();
//    for (int i=0; i<size; i++) {
//        cout << pq.top() << endl;
//        pq.pop();
//    }

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
//    cout << pq.empty() << endl;
    return 0;
}
