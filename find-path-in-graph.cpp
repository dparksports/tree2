#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>

using namespace std;

class Tree {
public:
    map<int,vector<int>> graph;

    void findPath(queue<int> heads, int a, int b) {
        vector<int> children = graph[a];
        if (children.empty()) {
            return;
        }

        for (int i = 0; i < children.size(); ++i) {
            if (children[i] == b) {
                if (heads.empty()) {
                    cout << a << "," << b << endl;
                } else {
                    while (! heads.empty()) {
                        int front = heads.front();
                        heads.pop();
                        cout << front << ",";
                    }
                    cout << a << "," << b << endl;
                }
                break;
            }
        }

        heads.push(a);
        for (int j = 0; j < children.size(); ++j) {
            findPath(heads, children[j], b);
        }
    }

    void insertEdge(int a, int b) {
        int count = graph.count(a);
        cout << count;

        map<int,vector<int>>::iterator iterator = graph.find(a);
        if (iterator == graph.end()) {
            vector<int> children;
            children.push_back(b);

            graph[a] = children;

            cout << endl;
        } else {
            vector<int> children = graph[a];
            children.push_back(b);

            //
            // pass by value, so we copy it again
            // otherwise, children vector change is localized.
            //
            graph[a] = children;

            cout << endl;
        }
    }
};



int main(){
    Tree tree;
    string edgeString;
    int count;
    cin >> count;

    int a, b;
    while(count-- > 0) {
        cin >> a;
        cin >> b;

        tree.insertEdge(a, b);
    }

    int queries;
    cin >> queries;
    while(queries-- > 0) {
        cin >> a;
        cin >> b;

        queue<int> heads;
        tree.findPath(heads, a, b);
    }

    cout << " " << endl;
    return 0;
}
