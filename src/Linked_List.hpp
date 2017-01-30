#include <iostream>
#include <string>

using namespace std;

#ifndef LINKED_LIST
#define LINKED_LIST
//#define NULL 0

//the node definition
struct node{
	string data;
	node *next;
	node *prev;
};

//the linked list class definition
class linked_list{

	public:
		node* head;
		linked_list();
		void insert(string data);
		void remove(string data);
		void print();
};


#endif
