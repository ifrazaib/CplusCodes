#include<iostream>
#include<string>
using namespace std;
class node
{
public:
	int data;
	node* next;
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
	void insert_tail(node*& tail,node*&head, int d)
	{
		node* temp = new node(d);
		tail->next = temp;
		tail = tail->next;
	}
	void print(node*& head)
	{
		node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	node* rev(node* head)
	{
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		node* forward = nullptr;
		node* prev = nullptr;
		node* curr = head;
		while (curr != nullptr)
		{
			forward = curr->next;
			curr->next = prev;
			prev = curr;
			 curr= forward ;
		}
		return prev;
	}
	node* add(node* first, node* second)
	{
		node* ans_head = nullptr;
		node* ans_tail = nullptr;
		int carry = 0;
		while (first != nullptr && second != nullptr)
		{
			
			int sum = carry + first->data + second->data;
			int digit = sum % 10;
			node* temp = new node(digit);
			insert_tail(ans_head, ans_tail, digit);
			carry = sum / 10;
		}
		while (first != nullptr)
		{
			int sum = carry + first->data;
			int digit = sum % 10;
			insert_tail(ans_head, ans_tail, digit);
			carry = sum / 10;
			first = first->next;
		}
		while (second != nullptr)
		{
			int sum = carry + first->data;
			int digit = sum % 10;
			insert_tail(ans_head, ans_tail, digit);
			carry = sum / 10;
			second = second->next;
		}
		while (carry != 0)
		{
			int sum = carry;
			int digit = sum % 10;
			insert_tail(ans_head, ans_tail, digit);
			carry = sum / 10;
		}
		return ans_head;
	}
	node* add_list(node* &first, node* &second)
	{
		first = rev(first);
		second = rev(second);
	
		node* ans = add(first, second);
		ans = rev(ans);
		return ans;
	}
};
int main()
{
	cout << "First Linked list:" << endl;
	node* obj1 = new node(2);
	node* head = obj1;
	obj1->insert_data(head, 4);
	obj1->insert_data(head, 3);
	obj1->print(head);
	node* rev_list = obj1->rev(head);
	cout << "Reversed linked list:" << endl;
	obj1->print(rev_list);
	cout << "Second Linked list:" << endl;
	node* obj2 = new node(5);
	node* head2 = obj2;
	obj2->insert_data(head2, 6);
	obj2->insert_data(head2, 4);
	obj2->print(head2);
	node* rev_li = obj2->rev(head2);
	cout << "Reversed linked list:" << endl;
	obj2->print(rev_li);
	node* add_li = obj2->add_list(head2,head);
	cout << "Reversed linked list:" << endl;
	obj2->print(add_li);
	system("pause");
}
