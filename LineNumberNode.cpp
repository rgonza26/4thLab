<<<<<<< HEAD
#include "LineNumberNode.h"
=======
#include "LineNumberNode.hpp"
>>>>>>> FETCH_HEAD
#include <cstdio>	//for NULL
#include <sstream>

LineNumberNode::LineNumberNode(){
	this->val = NULL;
	this->next = NULL;
}

LineNumberNode::LineNumberNode(int val){
	this->val = val;
	this->next = NULL;
}

LineNumberNode::~LineNumberNode(){
	if(next != NULL){
		delete next;
	}
}

void LineNumberNode::addNode(LineNumberNode *&headNode, LineNumberNode* newNode){
	if(headNode == NULL){
		headNode = newNode;
		return;
	}else{
		LineNumberNode* ptr = headNode;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = newNode;
		return;
	}
}

std::string LineNumberNode::ToString(){
	std::ostringstream oss;
	oss << val;
	return oss.str();
}

std::string LineNumberNode::ToString_expand(){
	std::ostringstream oss;
	oss << val << '\t';
	if(next != NULL){
		oss << next->ToString_expand();
	}
	return oss.str();
}

std::string LineNumberNode::operator<<(const LineNumberNode &rhs){
	LineNumberNode tmp = rhs;
	return tmp.ToString_expand();
}
