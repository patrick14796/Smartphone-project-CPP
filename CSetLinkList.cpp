#include <iostream>
using namespace std;
#include "CSetLinkList.h"
#include "Node.h"


Node* CSetLinkList::createNode(const int data, Node* next) {
	Node* newy = new Node(data, next);   // create a new Node //
	size++;   // increase the size //
	return newy;  // return the node//

}


Node* CSetLinkList::get(int index) const {

	Node* temp;         // create a new node in name temp //
	temp = head;
	for (int i = 0; i <= index - 1; i++)    // loop from 0 to the index-1 to get the next of the previuos node // 
	{
		temp = temp->getNext();
	}
	return temp;
}


CSetLinkList::CSetLinkList() {     // default  CTOR //
	size = 0;
	head = NULL;
	tail = NULL;
}

CSetLinkList::~CSetLinkList() {
	if (head != NULL)
	{
		Node* tmp = head->getNext();      // create a node //
		Node* This = head;                // the node is the head //
		while (This != NULL)
		{
			delete This;         // delete the node if the linkedlist is no empty // 
			--size;               // decrease the size of the list //
			if (tmp == NULL)
			{
				This = NULL;
			}
			else
			{
				This = tmp;
				tmp = tmp->getNext();        // get the nex of the node //
			}
		}

	}
}


CSetLinkList::CSetLinkList(const CSetLinkList& other) {

	tail = NULL;
	head = NULL;                        // if the linkedlist is empty the tail and head is NULL and the size is 0 //
	this->size = 0;

	if (other.size != 0)
	{
		Node* tmp = other.get(0);
		tail = head = createNode(tmp->getData(), NULL);
		tmp = tmp->getNext();
		while (tmp)
		{
			this->append(tmp->getData());
			tmp = tmp->getNext();
		}        // if the linked list is NOT empty i creat a new node and comp all the node in the linked list that recive //

	}
}


bool CSetLinkList::contains(const int value) const {
	Node* tmp;
	tmp = head;                          // create temp node //
	for (int i = 0; i < size; ++i)
	{
		if (tmp->getData() == value)           // compare between the data i recive to check and the data in the node //
		{

			return true;    // return true if the 2 data is equal //
		}
		tmp = tmp->getNext();
	}


	return false;     // return false if the 2 data is NOT equal //

}


void CSetLinkList::print() const {

	if (length() == 0)     // if the list is emty //
	{
		cout << "The list is empty!!!" << endl;    // print to screen this //
	}
	else
	{                                  // else it will run in loop and print the data in the nodes . //
		Node *temp = head;
		for (int j = 0; j < length(); ++j)
		{
			cout << temp->getData() << endl;
			temp = temp->getNext();
		}
	}
}


unsigned CSetLinkList::length() const {

	return size;   // return the size //
}



void CSetLinkList::append(const int data) {

	if (length() == 0)
	{
		// if the length of the linked list is 0 (empty)//
		Node* newNode = createNode(data);
		Node* tmp = head;
		head = newNode;                                // create a new node and set him to be tail and head of the list //
		head->setNext(tmp);
		tail = newNode;
	}
	else                                          // if the length of the linked list is Not 0 //
	{

		Node* newNode = createNode(data);
		Node* tmp = head;
		while (tmp->getNext() != NULL)
		{
			tmp = tmp->getNext();                    // create new Node and in while loop get the next //
		}
		tail = tmp;
		tmp->setNext(newNode);
		tail = newNode;                              // and place the tail to be the new Node //
	}
}


void CSetLinkList::prepend(const int data) {
	if (length() == 0)
	{

		Node* newNode = createNode(data);
		Node* tmp = head;
		head = newNode;                            // if the size of the Linked list is 0 (empty) i creat a new tmp of node and make it head //
		head->setNext(tmp);                       // and also the tail is the new node because we have only 1 node in the list //
		tail = newNode;
	}
	else
	{

		Node* newNode = createNode(data);
		Node* tmp = head;                        // else the linked list is not empty i create a new node and make it to be the head and the next is the node that was the head before// 
		head = newNode;
		head->setNext(tmp);
	}

}


void CSetLinkList::insert(const int data, int index) {

	Node* newy = createNode(data);
	if (index < 0 || index > size + 1) {              // create a new node  //
		cout << "Invalid position!" << endl;      // print to the screen this message if the index is incorrect //
	}
	if (index == 0)    // if the index is 0 //
	{
		Node* tmp = head;
		head = newy;                      // create a new node and set him to be the head and the tail //
		newy->setNext(tmp);
	}
	if (index == length())         // if the index is equal to the size of the list //
	{
		Node* blast = get(index - 1);      // create a new Node //
		blast->setNext(newy);          // set the next of this node i creat to the node of the tail in the linkedlist //
		tail = newy;
	}
	else if (index < length() && index != 0 && index != length())
	{
		Node* tmp;
		Node* temp2;
		temp2 = get(index - 1);
		tmp = temp2->getNext();
		temp2->setNext(newy);
		newy->setNext(tmp);
	}
}



bool CSetLinkList::operator==(const CSetLinkList& other) const {
	Node* temp1 = this->head;
	Node* temp2 = other.head;           // create 2 nodes one point to the head of this list and the another to the head of the other head //
	if (this->size != other.length())
	{
		cout << "The 2 objects are different!  (FALSE)" << endl;
		return false;
	}

	else
	{
		int counter = 0;                          // create variable //
		for (int i = 0; i < length(); ++i)    // loop from 0 to the length of the list //
		{
			Node* temp2 = other.head;
			for (int j = 0; j < length(); ++j)
			{
				if (temp1->getData() == temp2->getData())     // compare between the 2 temps //
				{
					++counter;    // if the 2 temps are equal i increase the counter //
					break;
				}
				else
				{
					temp2 = temp2->getNext();         // get the next of the temp 2 //
				}
			}
			temp1 = temp1->getNext();
		}
		if (counter == size)
		{
			cout << "The 2 objects are equal !!!   (TRUE)" << endl;
			return true;
		}
		else
		{
			cout << "The 2 objects are different!   (FALSE)" << endl;
			return false;
		}
	}

}



bool CSetLinkList::operator!=(const CSetLinkList& other) const {   // bolean method Checks whether the two groups are Not the  same ( if they contains at least one same organs) // 
	Node* temp1 = this->head;   // create a node to be the head of this list //
	Node* temp2 = other.head;    // create a node to be the head of the other list //
	if (this->size != other.length())     // check if the the size of this list is not equal to the other size of list //
	{
		cout << "The 2 objects are different!   (TRUE)" << endl;    // print to screen //
		return true;    // return true //
	}
	else
	{
		int counter = 0;                          // create variable //
		for (int i = 0; i < length(); ++i)    // loop from 0 to the length of the list //
		{
			Node* temp2 = other.head;
			for (int j = 0; j < length(); ++j)
			{
				if (temp1->getData() == temp2->getData())     // compare between the 2 temps //
				{
					++counter;    // if the 2 temps are equal i increase the counter //
					break;
				}
				else
				{
					temp2 = temp2->getNext();         // get the next of the temp 2 //
				}
			}
			temp1 = temp1->getNext();
		}
		if (counter == size)
		{
			cout << "The 2 objects are equal !!!    (FALSE)" << endl;
			return false;
		}
		else
		{
			cout << "The 2 objects are NOT equal !!!     (TRUE)" << endl;
			return true;
		}
	}
}


const int CSetLinkList::at(int index) const {    // return the value in index number //
	Node* temporary;      // create a node temp //
	temporary = get(index);   // insert to the node temp the value of the node at in index number //
	return temporary->getData();   // return the node temp //

}


CSetLinkList CSetLinkList::operator+(const CSetLinkList& other)const {       // operator + that operates on a group and receives as an additional group parameter, the result of the operator is a new group obtained as a union of the two groups (all the unique organs from both). //
	CSetLinkList temp;    // create a temp list //
	if (this->size == 0 && other.size == 0)   // check if the size of this list and the size of the another list is zero 
	{
		print();  // print to screen //
	}

	else if (this->size == 0 && other.size != 0)    // check if the size of this list is zero and the size of the another list is NOT zero 
	{
		other.print();   // print to screen 
	}

	else if (this->size != 0 && other.size == 0)     // check if the size of this list is not zero and the another list size is zero 
	{
		this->print();   // print to screen //
	}

	else    // else //
	{
		Node* temp1 = this->head;   // creat a new node temp and make him to be this head of the list 
		Node* temp2 = other.head;    // creat a new node temp and make him to be this head of the other list 

		for (int i = 0; i < (this->size); ++i)     // for loop 
		{
			temp.insert(temp1->getData(), i);    // insert to the temp list all the values of this list //
			temp1 = temp1->getNext();         // temp1 advence to the next node in the list //
		}

		for (int j = 0; j < other.size; ++j)    // for loop //
		{
			if (this->contains(other.at(j)) == false)   // check if this list contains the same value in the another list //
			{
				temp.append(other.at(j));    // if not it will add this value to the end of the list //
			}

			temp2 = temp2->getNext();    //temp2  advence to the next node in the list //
		}

	}
	return temp;     //return the temp list //
}



CSetLinkList& CSetLinkList::operator+=(const int x) {       // operator += that adding a new number to the start of the list //
	if (this->contains(x) == false)  // check if the value I recive appear in the liat // 
	{
		this->prepend(x);    // if not it will add this value to the head of the list //
	}
	return *this;   // return the list //
}


void CSetLinkList::remove(int index) {
	Node* x = head;                       // creat a Node //
	if (index > size || index < 0)      // check if the index given is correct or not //
	{
		cout << "The index is incorrect!" << endl;   // print to screen //
	}

	else if (index == 0 && length() == 1)      // check if the index is 0 (the firs node) and the length of the list is 1 mean is the only node //
	{
		tail = NULL;
		head = NULL;
		--size;       // decrease the size of the list //
	}

	else if (index > 0 && length() > 1)           // check if the index is bigger than 0 and the length also//
	{
		Node* blast = get(index - 1);     //A new node and inserts the index in one place before //
		blast->setNext(blast->getNext()->getNext());
		--size;      // decrease the size of the list //
	}
	else if (index == 0 && length() > 1)     // check if the index given is 0 and the length is bigger than 1 //
	{
		Node* first = head;     //A new node and is the head  //
		Node* second = get(index + 1);   //A new node and is the Next node in the list //
		head = second;   // the head is the second node //
		--size;   // decrease the size of the list //
	}

	else if (index = length())    // check if the index given is equal to the size of thr list //
	{
		for (int i = 0; i < size - 2; ++i)
		{
			x = x->getNext();   //get the next of the node x , the end is the node one befor the finall node // 
		}
		tail = NULL;
		x->setNext(NULL);     // make the tail node to NULL  //
		tail = x;    // the tail is x node // 
		--size;   // decrease the size of the list //
	}

}



CSetLinkList& CSetLinkList::operator-=(const int x) {        // operator -= that recive a number and check if it appear in the list , if it appear it will remove it //
	if (this->contains(x) == true)    // check if the value appears in the list //
	{
		Node* tmp = head;  // create node temp-is the head of the list  //
		int indexVal;   // create variable //
		for (int i = 0; i < this->length(); ++i)  // for loop //
		{
			if (tmp->getData() == x)   // check if the value in the list is equal to the value I recive from the user //  
			{
				indexVal = i;
			}
			tmp = tmp->getNext();   // advance the temp // 
		}
		this->remove(indexVal);   // remove the value in the index //
	}
	return *this;  // return this //
}



CSetLinkList CSetLinkList::operator-(const CSetLinkList& other)const {     // An operator that acts on a group and receives as an additional group parameter, the result of the operator is a new group consisting of all the members of the base group and not included in the parameter group. // 
	CSetLinkList temp;     // create temp list //
	if (this->size == 0)  // check if the size of the list is zero // 
	{
		print();   // print to screen //
	}

	else if (this->size != 0 && other.size == 0)   // check if the size of this list is not zero and the size of the other size is zero //
	{
		this->print();  // print to screen //
	}

	else if (this->size != 0 && other.size != 0)    // check if the size of this list is NOT zero and the size of the another list is NOT zero 
	{
		Node* temp1 = this->head;   // create a node temp1 and make him the head of this list //
		Node* temp2 = other.head;   // create a node temp2 and make him the head of the other list //

		for (int i = 0; i < this->size; ++i)   // for loop
		{
			int counter = 0;  // create variable //
			for (int j = 0; j < other.size; ++j)   // for loop //
			{
				if (temp1->getData() != temp2->getData())   // check if the data in this list is not equal to the data in the other list //
				{
					++counter;   // increase the counter //
					if (counter == other.size)   // if the counter is equal to the size of the other list 
					{
						temp.append(temp1->getData());   // insert the data to the end of the list 
						temp2 = other.head;
						break;
					}
				}
				else
				{
					counter = 0;
					temp2 = other.head;
					break;
				}
				temp2 = temp2->getNext();    // move the node-temp2 to the next node //
			}
			temp1 = temp1->getNext();  // move the node-temp1 to the next node //
		}
	}
	return temp;   // return the temp list 
}



CSetLinkList& CSetLinkList::operator=(const CSetLinkList& other) {    // operator = "copy" the value of the list into the another list and chnge the another list to be this list //

	if (this->size == 0)    // check if the size of this list is zero 
	{
		for (int i = 0; i < other.size; ++i)   // for loop  // 
		{
			this->insert(other.at(i), i);  // insert to this list the data of the other list in the index (i of the loop ) //
		}
		return *this;   // return this //
	}


	else if (other.size == 0)    // if the other list size is zero //
	{
		for (int j = this->length(); j > 0; --j)   // for loop //
		{
			this->remove(j - 1);  // remove all the data in this list //
		}
		return *this;   // return this //
	}


	else if (this->size == other.size)   // check if the size of this list is equal to the size of the other list //
	{
		if (this->operator==(other) == true)   // check if the data is equal in the 2 lists //
		{
			return *this;   //retuen this //
		}

		else   // else //
		{
			for (int i = this->size; i > 0; --i)   // for loop //
			{
				this->remove(i - 1);   // remove all the data in the list //
			}

			for (int k = 0; k < other.size; ++k)
			{
				this->insert(other.at(k), k);   // insert the data to this list from the other list 
			}

			return *this;   // return this list 
		}
	}

	else
	{
		for (int i = this->size; i > 0; --i)  // for loop 
		{
			this->remove(i - 1);   // remove the data 
		}

		for (int k = 0; k < other.size; ++k)
		{
			this->insert(other.at(k), k);  // insert the data to this list from the other list in specific index //
		}
		return *this;   // return this //
	}
}



CSetLinkList& CSetLinkList:: operator--() {       // prefix//
	remove(0);    // remove the data in the head of the list //
	CSetLinkList tmp = CSetLinkList();
	for (int i = 0; i < this->size; ++i)
	{
		tmp.insert(this->at(i), i);  // insert in the temp list the data of this list in the specific index (i in the loop ) //
	}
	return *this;   // return this list //
}



CSetLinkList& CSetLinkList::operator--(int x) {   // postfix//
	remove(size - 1);    // remove the last data in the list //
	return *this;   // return this list //
}



ostream& operator<<(ostream& out, const CSetLinkList& other) {    // method that print to screen //
	

	out << other.get(0);
	////for (int i = ; i < other.size; ++i)   // for loop //
	////{
	////	if (i == other.size - 1)
	////	{
	////		out << other.at(i);
	////	}
	////	else
	////	{
	////		out << other.at(i) << ",";   // print to the screen //
	////	}
	//}
	
	return out;  // return from the operator cout to print //
}