/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
  Node* copyRandomList(Node* head) {
if (!head) return nullptr;
Node* iter = head;
Node* next;
// First round: make a copy of each node,
// and link them together side-by-side in a single list.
while (iter) {
next = iter->next;
Node* copy = new Node(iter->val);
iter->next = copy;
copy->next = next;

iter = next;
}
// Second round: assign random pointers for the copy nodes.
iter = head;
while (iter) {
if (iter->random) {
iter->next->random = iter->random->next;
}
iter = iter->next->next;
}
// Third round: restore the original list, and extract the copy list.
iter = head;
Node* pseudoHead = new Node(0);
Node* copy;
Node* copyIter = pseudoHead;
while (iter) {
next = iter->next->next;
// extract the copy
copy = iter->next;
copyIter->next = copy;
copyIter = copy;
// restore the original list
iter->next = next;
iter = next;
}
return pseudoHead->next;
        
    }
};