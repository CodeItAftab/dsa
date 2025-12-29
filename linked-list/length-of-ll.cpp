#include <iostream>
#include<vector>

using namespace std;

class Node {
    public:
    int data;
    Node * next;
    
    public:
    Node(int data1, Node * next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * convertArr2LL(vector<int> arr){
    Node * head = new Node(arr[0]);
    Node * mover = head;
    for(int i = 1;i<arr.size();i++){
        Node * temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthOfLL(Node * head){
    Node * temp = head;
    int len = 0;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
}



int main() {
    vector<int> arr = {2,5,8,7};
    Node * head = convertArr2LL(arr);
    
    //* Traversal
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"length of LL:"<<lengthOfLL(head)<<endl;
    return 0;
}