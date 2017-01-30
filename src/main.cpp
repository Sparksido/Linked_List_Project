//====================================
//This is the main file to the project
//Which aims to implement and apply
//The linked list data structure
//====================================

#include <iostream>
#include <string>
#include "Linked_List.hpp"
using namespace std;

int main(){
	linked_list first_list;
	first_list.insert("abc");
	first_list.insert("def");
	first_list.insert("ghi");
	first_list.insert("jkl");
	first_list.insert("mno");
	first_list.insert("pqr");
	first_list.remove("jkl");

	first_list.print();

}
