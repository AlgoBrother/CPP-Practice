#include <iostream>

struct Node{
  int data;
  Node* next;
};

Node* insert(Node*& head, int newData){
  Node* newNode = new Node();
  newNode -> data = newData;
  newNode -> next = nullptr;

  if(head == nullptr){
    head = newNode;
  } else{
    Node* temp = head;
    while(temp -> next != nullptr){
      temp = temp -> next;
    }
    temp -> next = newNode;
  }
  return head;
}

Node* deleteElem(Node* head, int target){
  if(head == nullptr){
    std::cout << "The list is empty." << std::endl;
    return head;
  }

  if(head -> data == target){
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
  }

  Node* temp = head;
  while(temp -> next != nullptr && temp -> next -> data != target){
    temp = temp -> next;
  }

  if(temp -> next != nullptr){
    Node* toDelete = temp -> next;
    temp -> next = toDelete -> next;
    delete toDelete;
  } else{
    std::cout << "Target Not Found" << std::endl;
  }

  return head;
}

void printList(Node* head){
    Node* temp = head;
    if(temp == nullptr){
        std::cout << "List is empty." << std::endl;
        return;
    }

    while(temp != nullptr){
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}


int main(){
  Node* head = nullptr;
  int range;
  std::cout << "Enter number of elements: ";
  std::cin >> range;
  for(int i = 0; i < range; i++){
    int data;
    std::cin >> data;
    insert(head, data);
  }

  printList(head);
  std::cout << "Enter the target integer to delete: ";
  int target;
  std::cin >> target;
  deleteElem(head, target);
  printList(head);
}