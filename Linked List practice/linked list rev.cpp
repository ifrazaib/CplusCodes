#include<iostream>
#include<string>
using namespace std;
class node
{
public:
	node* next;
	int data;
	node(int d)
	{
		this->data = d;
		this->next = nullptr;
	}
	void insert_data(node* &head, int d)
	{
		node* temp = new node(d);
		temp->next = head;
		head = temp;

	}
	node* k_re(node* head, int k)
	{
		if (head == nullptr)
		{
			return nullptr;
		}
		node* curr = head;
		node* prev = nullptr;
		int count = 0;
		while (curr != nullptr&&count<k)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			count++;
		}
		if (next != nullptr)
		{
			head->next = k_re(next, k);
		}
		return prev;
	}
	node* rev_list(node* head)
	{
		node* curr = head;
		node* forward = nullptr;
		node* prev = nullptr;
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		
		while (curr != nullptr)
		{
			forward = curr->next;
			curr->next= prev;
			prev = curr;
			curr = forward;
		}
	     return prev;
	}
	void print(node* head)
	{
		node* temp = head;
		while (temp!= nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};
int main()
{
	node* obj1 = new node(5);
	node* head = obj1;
	obj1->insert_data(head,2);
	obj1->insert_data(head, 3);
	obj1->insert_data(head, 4);
	obj1->print(head);
	node* ins_k = obj1->k_re(head, 2);
	obj1->print(ins_k);
	node* rev = obj1->rev_list(head);
	obj1->print(rev);
	system("pause");
}