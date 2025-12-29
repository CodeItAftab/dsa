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

int checkIfPresent(Node * head, int val){
    Node * temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

Node * deleteHead(Node * head){
    if(head == NULL) return NULL;
    Node * temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node * deleteLast(Node * head){
    if(head == NULL || head->next == NULL) return NULL;
    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next->next);
    temp->next = NULL;
    return head;
}

void printLL(Node * head){
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node * deleteK(Node * head, int k){
    if(head == NULL) return NULL;
    if(k == 1){
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    int count = 0;
    Node * temp = head;
    Node * prev = NULL;
    while(temp){
        count ++;
        if(count == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;

}

Node * removeEl(Node * head, int el){
    if(head == NULL) return NULL;
    if(head->data == el){
        Node * temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node * temp = head;
    Node * prev = NULL;
    while(temp!=NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}


// ! Insertion

Node * insertHead(Node * head, int val){
    Node * temp = new Node(val,head);
    return temp;
}

Node * insertTail(Node * head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node * temp = head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    Node * newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node * insertAtK(Node * head, int el, int k){
    if(head == NULL){
        if(k == 1) return new Node(el);
        else return NULL;
    }
    if(k == 1){
        Node * temp = new Node(el,head);
        return temp;
    }
    Node * temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt +=1;
        if(cnt == k-1){
            Node * newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp ->next;
    }

    return head;
}

Node * insertBeforeVal(Node * head, int el, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        Node * temp = new Node(el,head);
        return temp;
    }
    Node * temp = head;

    while(temp!=NULL){
       if(temp->next->data == val){
            Node * newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp ->next;
    }

    return head;
}



int main() {
    vector<int> arr = {2,5,8,7};
    Node * head = convertArr2LL(arr);
    printLL(head);
    // head = insertTail(head,3);
    head = insertBeforeVal(head,4,8);
    printLL(head);
    return 0;
}