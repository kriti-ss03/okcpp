class Solution {
public:
    //M1 put in vector n then sort n then put into new ll
//OTHER MTHD inorder--play with ptr, divide n conquer priority queue

   


    //M1----------------------------------------
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       ListNode* temp;
       vector<int>v;

       for(int i=0; i<lists.size();i++){
            temp=lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
       }

       sort(v.begin(),v.end());
 //constructing ListNode*h=NULL means only one node,thus we have to creat enode n then assign value n go for next***
        ListNode* h = NULL;
        ListNode* curr = NULL;
        for(int i=0;i<v.size();i++){
            ListNode* newNode = new ListNode();
            newNode->val = v[i];
            newNode->next = NULL;
            if(h == NULL){
                h = newNode;
                curr = newNode;
            }
            else{
                curr->next = newNode;
                curr=curr->next;//or curr = newNode; 
            }
        }

    // ListNode* h = NULL; will show err------------------------------
    //     h->val=v[0];
    //     temp=h;
    //     h=h->next;
    //  // h->next=NULL;
    //     temp=h;
    //     temp=temp->next;
    //    for(int i=1; i<v.size();i++){
    //         h->val=v[i];
    //         h=h->next;
    //    }
        return h;
    }
};