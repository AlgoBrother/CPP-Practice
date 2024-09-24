#include <iostream>

struct Node{
	std::string task;
	int priority;
	int id;
	Node* next;

	Node(int newId, const std::string& desc, int prio): id(newId), task(desc), priority(prio), next(nullptr){}
};

Node* insert(Node* head, std::string& newTask, int newId, int newPriority){
	Node* newNode = new Node(newId, newTask, newPriority);
	if(head == nullptr || newPriority < head -> priority){
		newNode -> next = head;
		return newNode;
	}

		Node* temp = head;
		while(temp -> next != nullptr && temp -> next -> priority <= newPriority){
			temp = temp -> next;
		}

		newNode -> next = temp -> next;
		temp -> next = newNode;

		return head;

} 

Node* deleteTask(Node* head, int idDelete){
	if(head == nullptr){
		std::cout << "No task to delete" << std::endl;
		return nullptr;
	}

	if(head -> id == idDelete){
		Node* temp = head;
		head = head -> next;
		delete temp;
		std::cout << "Task Deleted Successfully." << std::endl;
		return head;
	}

	Node* temp = head;
	while(temp -> next != nullptr && temp -> next -> id != idDelete){
		temp = temp -> next;
	}

	if(temp -> next != nullptr){
		Node* toDelete = temp -> next;
		temp -> next = temp -> next -> next;
		delete toDelete;
		std::cout << "Task deleted Successfully." << std::endl;
	}else{
		std::cout << idDelete << " does not exist." << std::endl;
	}

	return head;
}

void printTask(Node* head){
	if(head == nullptr){
		std::cout << "No task in the list" << std::endl;
		return;
	}

	Node* temp = head;
	while(temp != nullptr){
		std::cout << "Task ID: " << temp -> id << std::endl;
		std::cout << "Task: " << temp -> task << std::endl;
		std::cout << "Priority: " << temp -> priority << std::endl;
		std::cout << std::endl;
		temp = temp -> next;
	}
}

int main(){
	Node* head = nullptr;

	int id;

	std::string task;

	int priority;


	int num;
	std::cout << "How many tasks you want to add: ";
	std::cin >> num;

	for(int i = 0; i < num; i++){
		std::cout << "Enter id: ";
		std::cin >> id;
		std::cout << "Enter task: ";
		std::cin.ignore();
		std::getline(std::cin, task);
		std::cout << "Enter priority: ";
		std::cin >> priority;
		head = insert(head, task, id, priority);
	}

	printTask(head);

	std::cout << "Which task you want to delete: ";
	int idDelete;
	std::cin >> idDelete;

	head = deleteTask(head, idDelete);
	printTask(head);	
}