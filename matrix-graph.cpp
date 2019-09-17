#include <iostream>
using namespace std;

class Parent {
 private:
    int a;
  
 protected:
    int b;

  public:
  int c:
}

class Child : public Parent {
 

  void funcA() {
    cout << b;
    cout << c;
  }
}

m x n ?
  
  source = (0, 0)
  matrix[0][0] 
  
  target = (3, 1)
  matrix[3][1]
  
  path1 = (0,0), (0,1), (1,1), (2,1), (3,1)
  path2 = (0,0), (1,0), (1,1), (2,1), (3,1)
  
  min steps = 5
  
  directions = [right, left, top, bottom]
  steps would not repeat [right, left, right]
  
  
  m x n (2nd dimensional matrix)
  
  dy / dx -> directional 
  
  (f' - f) = delta_y  (decrement delta f)
   
   
  class Node {
    int value;
    int x,y;
    
    Node *top;
    Node *bottom;
    Node *left;
    Node *right;
  }
   
   
  void insert_node(Node *node) {
    if (node == nil) return;
    
    Node node;
    
    Node topNode = topNode(M, x, y);
    Node bottomNode = bottomNode(M, x, y);
    Node lNode = lNode(M, x, y);
    Node rNode = rNode(M, x, y);
    
    node.top = topNode;
    node.bottom = bottomNode;
    node.left = lNode;
    node.right = rNode;
    
      insert_node(topNode);
          insert_node(bottomNode);
      insert_node(lNode);
      insert_node(rNode);

  }

   
  vector<Path> paths;      
  void find_path(Node source, Node target) {
    if (source.x - target.x) > 0 ) {
      find_path(source.leftNode, target);
    }
    else 
          find_path(source.rightNode, target);



  }
   
   
   
   
  
  main() {
    Node sourceNode;
    node.x = source.x;
    node.y = source.y;
    
    insert_edge(sourceNode);  
    
    find_path(source, target);
  }
   
 
  
 
  [   1   ]
  [ 1 R 1 ]
  [   1   ]
   
  
  
  
  
Given a matrix
M = [(1) 1  1 1 0 0 1
      1  1  1 0 0 1 1
      0  1  1 1 1 1 0
      1 (1) 1 0 0 1 0]

Return the minimum number of steps and its path from a given source to a target (1: valid; 0: invalid)

Ex: source = (0, 0)
    Target = (3, 1)
  
  
