class Solution {
public:
    Node* flatten(Node* head) {

        Node* curr = head;

        while(curr != NULL){

            if(curr->child == NULL){
                curr = curr->next;
            }
            else{
                // Step 1: store next
                Node* nextNode = curr->next;

                // Step 2: connect child
                curr->next = curr->child;
                curr->child->prev = curr;

                // Step 3: find tail of child list
                Node* temp = curr->child;
                while(temp->next != NULL){
                    temp = temp->next;
                }

                // Step 4: connect tail with nextNode
                temp->next = nextNode;
                if(nextNode != NULL){
                    nextNode->prev = temp;
                }

                // Step 5: remove child pointer
                curr->child = NULL;

                curr = curr->next;
            }
        }

        return head;
    }
};