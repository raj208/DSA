#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int main()
{
    ListNode* head = nullptr;
    head = new ListNode (1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);

    ListNode* current = head;
    while (current != nullptr)
    {
        cout<<current->val<<endl;
        current = current->next;

    }
    
    
    return 0;
}