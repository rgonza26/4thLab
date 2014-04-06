#include "LineNumberNode.hpp"
#include <cstdio>	//for NULL
#include <sstream>

lineNumberNode::lineNumberNode(){
	this->val = NULL;
	this->next = NULL;
}

lineNumberNode::lineNumberNode(int val){
	this->val = val;
	this->next = NULL;
}

lineNumberNode::~lineNumberNode(){
	if(next != NULL){
		delete next;
	}
}

void lineNumberNode::addNode(lineNumberNode *&headNode, lineNumberNode* newNode){
	if(headNode == NULL){
		headNode = newNode;
		return;
	}else{
		lineNumberNode* ptr = headNode;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = newNode;
		return;
	}
}

std::string lineNumberNode::ToString(){
	std::ostringstream oss;
	oss << val;
	return oss.str();
}

std::string lineNumberNode::ToString_expand(){
	std::ostringstream oss;
	oss << val << '\t';
	if(next != NULL){
		oss << next->ToString_expand();
	}
	return oss.str();
}

std::string lineNumberNode::operator<<(const lineNumberNode &rhs){
	lineNumberNode tmp = rhs;
	return tmp.ToString_expand();
}