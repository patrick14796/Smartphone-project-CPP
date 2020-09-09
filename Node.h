#pragma once
#include <iostream>
using namespace std;
#ifndef CPP_NODE_H
#define CPP_NODE_H



class Node {          // class Node //
private:
	int Data;      // private variables DATA and NEXT //
	Node* Next;
public:
	Node();     // default CTOR //
	Node(const int Data, Node* Next = nullptr);    // CTOR recive data and next //
	Node(Node const &  node);// copy constrcutor //  
	Node operator=(Node const & node);   // Placement operator //
	~Node();   //DTOR  //
	Node* getNext() const { return this->Next; }   // methode get the next Address//
	void setNext(Node* nex);    //methode put the Next //
	int getData() const { return Data; }   // methode that return the data //  
	void setData(const int dat);   // methode put data in a Node //

};

#endif // !CPP_NODE_H