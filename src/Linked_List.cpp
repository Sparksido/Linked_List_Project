/*
 * Linked_List.cpp

 *
 *  Created on: Jan 11, 2017
 *      Author: owner
 */
#include <iostream>
#include <string>
#include "Linked_List.hpp"
using namespace std;

linked_list::linked_list(void){
	head = 0;
}

void linked_list::insert(string data){
	node *new_node;
	new_node = new node;
	new_node->data = data;
	new_node->next = head;
	new_node->prev = NULL;
	head = new_node;
}

void linked_list::remove(string data){
	node *iterator;
	iterator = head;
	while(iterator != NULL){
		if(iterator->data == data){
			node* next_holder = iterator->next;
			node* prev_holder = iterator->prev;
			delete &iterator;
			next_holder->prev = prev_holder;
			prev_holder->next = next_holder;
			return;
		}

		iterator = iterator-> next;
	}
}

void linked_list::print(){
	node *new_node = new node;
	new_node = head;
	while(new_node != NULL){
		cout << "The next value is: " << new_node->data << endl;
		new_node = new_node->next;
		cout << "new node is:" << new_node << endl;
	}

}




