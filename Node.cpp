#include <iostream>
using namespace std;
#include "Node.h"



Node::Node() {   	/*DEFAULT CONSTRUCOTR*/

	this->Data = NULL;
	this->Next = NULL;

}

Node::Node(Node const &  node)      // copy constrcutor //
{
	setData(node.getData());
	Next = node.getNext();
}


Node::Node(const int Data, Node* Next) {   // CTOR recive data and next //

	this->Data = Data;  // creat a new char* of data in the same size of the data I recive //
	this->Next = Next;

}


Node Node::operator=(Node const & node) {      // Placement operator //

	if (this != &node)   // check if the Node are NOt different //
	{
		setData(node.getData());   //get data //
		Next = node.getNext();     // get next //
	}

	return *this;    // return the Node //

}


Node::~Node() {     /*DESTRCUTOR*/

	if (this->Data != NULL)   // if the data in the Node is not NULL //
		Data = NULL;

}


void Node::setNext(Node* nex)    //methode put the Next //
{
	if (nex == nullptr)   // check if the next i recive in this method is null//
	{
		Next = NULL;
	}
	else   // if the next i recive in this method is not null 
	{
		this->Next = nex;
	}

}



void  Node::setData(const int dat)  // methode put data in a Node //
{
	if (Data != NULL)   // check if the data is NULL //
	{
		Data = NULL;   // delete the DATA //
	}
	this->Data = dat;   // and create a new DATAT in the same size //

}
