///week14-3.cpp 厩策璸礶 Linked List 材4肈
///445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* head){///璹ㄧ计(糶筁week13-2.cpp)
        if(head==nullptr || head->next==nullptr)return head;///沧ゎ兵ン
        ListNode* ans = myReverse(head->next);///ㄧΑ㊣ㄧΑ
        head->next->next=head;///р玡 程は筁ㄓ程玡
        head->next = nullptr;///ΜЮ
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1);///は筁ㄓ
        ListNode* list2 = myReverse(l2);///は筁ㄓ

        ListNode* ans = myAddTwoNumbers(list1, list2);///㊣秅week13-2.cpp
        return myReverse(ans);///は筁ㄓ
    }
    ///临myAddTwoNumbers()ㄧΑ 璶рウ糶ㄓ
    ListNode * myAddTwoNumbers(ListNode* list1,ListNode* list2){
        ListNode* ans = new ListNode(999);///繦獽つつ 氮穦つつ娩
        ListNode* ans2 = ans;///璽砫腊ansΜЮ
        int carry = 0;///秈
        while(list1 != nullptr || list2 != nullptr){
            int now = carry;///瞷璶矪瞶计
            if(list1 != nullptr){
                now += list1->val;///
                list1 = list1->next;///传掸 ㏑
            }
            if(list2 != nullptr){
                now += list2->val;///
                list2 = list2->next;///传掸 ㏑
            }
            ans2->next = new ListNode( now%10 );///癘{计}
            carry = now / 10;///秈场だ
            ans2 = ans2->next;///传掸
        }
        if(carry>0)ans2->next = new ListNode(carry);/// ///(畉翴翴)а矪瞶秈
        return ans->next;
    }
};


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
