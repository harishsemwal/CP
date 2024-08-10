/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) {
            return head;
        }

        Node* current = head;
        std::stack<Node*> st;

        while (current != nullptr) {
            if (current->child != nullptr) {
                if (current->next != nullptr) {
                    st.push(current->next);
                }

                current->next = current->child;
                if (current->next != nullptr) {
                    current->next->prev = current;
                }
                current->child = nullptr;
            }

            if (current->next == nullptr && !st.empty()) {
                current->next = st.top();
                st.pop();
                if (current->next != nullptr) {
                    current->next->prev = current;
                }
            }

            current = current->next;
        }

        return head;
    }
};