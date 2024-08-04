/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* dummyHead = new ListNode(0);  
        ListNode* current = dummyHead; // Pointer to build the new list  
        int carry = 0; // Variable to store the carry value  

        // Traverse both lists  
        while (l1 != nullptr || l2 != nullptr || carry) {  
            int sum = carry; // Start with carry value  

            if (l1 != nullptr) {  
                sum += l1->val; // Add value from l1  
                l1 = l1->next;  // Move to next node in l1  
            }  

            if (l2 != nullptr) {  
                sum += l2->val; // Add value from l2  
                l2 = l2->next;  // Move to next node in l2  
            }  

            carry = sum / 10; // Calculate new carry  
            current->next = new ListNode(sum % 10); // Create a new node with the result digit  
            current = current->next; // Move to the newly created node  
        }  

        return dummyHead->next; // Return the summed list, skipping the dummy head  
    }  
        
    };
