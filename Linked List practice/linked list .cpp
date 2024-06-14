//#include<iostream>
//#include<string>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int data)
//	{
//		this->data = data;
//		this->next = nullptr;
//	}
//	void insert_head(node*& head, int d)
//	{
//		node* temp = new node(d);
//		temp ->next= head;
//		head = temp;
//	}
//	void insert_tail(node*& tail, int d)
//	{
//		node* temp = new node(d);
//		tail->next = temp;
//		tail = tail->next;
//	}
//	void insert_position(node*&tail,node*&head,int pos, int data)
//	{
//		node* temp = head;
//		int count = 1;
//		if (pos == 1)
//		{
//			insert_head(head, data);
//		}
//		while (count < pos - 1)
//		{
//			temp = temp->next;
//			count++;
//		}
//		if (temp->next == nullptr)
//		{
//			insert_tail(tail, data);
//		}
//		node* insert = new node(data);
//		insert->next = temp->next;
//		temp->next = insert;
//		
//
//	}
//	void print(node*& head)
//	{
//		node* temp = head;
//		while (temp != nullptr)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void delete_node(node*& head, int pos)
//	{
//		if (pos == 1)
//		{
//			node* temp = head;
//			head = head->next;
//			temp->next = nullptr;
//			delete temp;
//		}
//		else
//		{
//			node* curr = head;
//			node* prev = nullptr;
//			int cot = 1;
//			while (cot <= pos)
//			{
//				prev = curr;
//				curr = curr->next;
//				cot++;
//			}
//			prev->next = curr->next;
//			curr->next = nullptr;
//			delete curr;
//
//		}
//	
//	}
//	
//	~node()
//	{
//		int val =this->data;
//		if (this->next != nullptr)
//		{
//			delete next;
//			this->next = nullptr;
//		}
//		
//
//	}
//};
//int main()
//{
//	node* obj1 = new node(10);
//	node* head = obj1;
//	node* tail = obj1;
//	obj1->print(head);
//	obj1->insert_head(head, 12);
//	obj1->print(head);
//	obj1->insert_head(head, 15);
//	obj1->print(head);
//	obj1->insert_tail(tail, 13);
//	obj1->print(tail);
//	obj1->insert_position(tail,head, 3,4);
//	obj1->print(head);
//	obj1->delete_node(head,3);
//	obj1->print(head);
//	cout << "head:" << head->data << endl;
//	cout << "tail:" << tail->data << endl;
//	system("pause");
//}