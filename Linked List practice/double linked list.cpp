//#include<iostream>
//#include<string>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* prev;
//	node* next;
//	node(int d)
//	{
//		this->data = d;
//		this->next = nullptr;
//		this->prev = nullptr;
//	}
//	void insert_head(node* &head, int d)
//	{
//		node* temp = new node(d);
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	void insert_tail(node*& tail, int d)
//	{
//		node* temp = new node(d);
//		tail->next = temp;
//		temp->prev = tail;
//		tail = temp;
//	}
//	void insert(node*& tail, node*& head, int pos, int d)
//	{
//		if (pos == 1)
//		{
//			insert_head(head, d);
//		}
//		node* temp = head;
//		int cnt = 1;
//		while (cnt < pos - 1)
//		{
//			temp = temp -> next;
//			cnt++;
//		}
//		node* ins = new node(d);
//		ins->next = temp->next;
//		temp->next->prev = ins;
//		ins->prev = temp;
//		if (temp->next != nullptr)
//		{
//			insert_tail(tail, d);
//		}
//		
//	}
//	
//	void print(node* &head)
//	{
//		node* temp = head;
//		while (temp != nullptr)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void get_length(node*& head)
//	{
//		int len = 0;
//		node* temp = head;
//		while (temp != nullptr)
//		{
//			len++;
//			temp = temp->next;
//		}
//		cout <<"Length is:"<<len << endl;
//	}
//	void delete_p(node*& head, int pos)
//	{
//		if (pos == 1)
//		{
//			node* temp = head;
//			temp->next->prev = nullptr;
//			head = temp->next;
//			temp->next = nullptr;
//			delete temp;
//		}
//		else
//		{
//			node* curr = head;
//			node* prev = nullptr;
//			int count = 1;
//			while (count < pos)
//			{
//				prev = curr;
//				curr = curr->next;
//				count++;
//			}
//			curr->prev = nullptr;
//			prev->next = curr->next;
//			curr->next = nullptr;
//			delete curr;
//
//		}
//	}
//	~node()
//	{
//		int v = this->data;
//		if (next != nullptr)
//		{
//			delete next;
//			next = nullptr;
//		}
//	}
//};
//int main()
//{
//	node* obj1 = new node(10);
//	node* head = obj1;
//	node* tail = obj1;
//	obj1->insert_head(head, 12);
//	obj1->insert_tail(tail, 15);
//	obj1->insert(tail, head, 1, 45);
//	obj1->print(head);
//	obj1->get_length(head);
//	obj1->delete_p(head, 2);
//	obj1->print(head);
//	system("pause");
//}