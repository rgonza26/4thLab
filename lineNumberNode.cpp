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

void lineNumberNode::addNode(lineNumberNode* newNode){
	if(next == NULL){
		next = newNode;
	}else{
		next->addNode(newNode);
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

