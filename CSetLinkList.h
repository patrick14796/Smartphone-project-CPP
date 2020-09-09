#include <iostream>
#include "Node.h"
using namespace std;


class CSetLinkList      // create a class  CsetLinkedList//
{
public:
	CSetLinkList();    // CTOR //
	~CSetLinkList();   // DTOR //
	CSetLinkList(const CSetLinkList& other);   // COPY CTOR //
	CSetLinkList& operator=(const CSetLinkList& other);     // operator = "copy" the value of the list into the another list and chnge the another list to be this list //
	CSetLinkList& operator+=(const int);    // operator += that adding a new number to the start of the list //
	CSetLinkList& operator-=(const int);      // operator -= that recive a number and check if it appear in the list , if it appear it will remove it //
	CSetLinkList operator+(const CSetLinkList& other)const;    // operator + that operates on a group and receives as an additional group parameter, the result of the operator is a new group obtained as a union of the two groups (all the unique organs from both). //
	CSetLinkList operator-(const CSetLinkList& other)const;    // An operator that acts on a group and receives as an additional group parameter, the result of the operator is a new group consisting of all the members of the base group and not included in the parameter group. // 
	CSetLinkList& operator--();    // operator -- (prefix) //
	CSetLinkList& operator--(int);    // operator -- (postfix) //
	bool operator==(const CSetLinkList& other) const;    // boolean method Checks whether the two groups are the same (do not contain the same organs) //
	bool operator!=(const CSetLinkList& other) const; // bolean method Checks whether the two groups are Not the  same ( if they contains at least one same organs) // 
	friend ostream& operator<<(ostream& out, const CSetLinkList& other);   // method that print to screen //
	Node* createNode(const int data, Node* next = nullptr);    // Ctor that create a new node //
	Node* get(int index) const;
	void print() const;   //  method print //
	unsigned length() const;     // methode check the lenght of the list //
	void append(const int data);    // method that add a new value to the end of the list //
	void prepend(const int data);     // // method that add a new value to the start of the list //
	void insert(const int data, int index);    // method that insert a new value to the list in a index number //
	const int at(int index) const;    // return the value in index number //
	void remove(int index);    // method that remove value in list at index number //
	bool contains(const int value) const;     // method check if the value appear in the list or not // 


private:
	Node* head;    // head of the list //
	Node* tail;     // tail of the list //
	unsigned int size;    // size of list //

};

