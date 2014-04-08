//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#pragma warning(disable: 4996)

#include "Token.h"
#include <string>
#include <sstream>

Token::Token()
{
    //What code do I need here to initialize everything.
	//???????????????????????????
}
Token::~Token()
{
    delete lines;
}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
LiteralType Token::getType()
{
    return this->type;
}
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}
int Token::getIntLiteral()
{
    return this->literal.integer;
}
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}
float Token::getRealLiteral()
{
    return this->literal.real;
}
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}
Token* Token::getLeft(){
	return left;
}
Token* Token::getRight(){
	return right;
}


//What methods am I missing to implement a binary tree.
//?????????????????????????

//Binary tree methods
//	Operator overloads
bool Token::operator<(const Token &rhs){
	return tokenString < rhs.tokenString;
}
bool Token::operator<=(const Token &rhs){
	return tokenString <= rhs.tokenString;
}
bool Token::operator==(const Token &rhs){
	return tokenString == rhs.tokenString;
}
bool Token::operator>=(const Token &rhs){
	return tokenString >= rhs.tokenString;
}
bool Token::operator>(const Token &rhs){
	return tokenString > rhs.tokenString;
}

void Token::addLineNumber(int lineNumber){
	LineNumberNode* n = new LineNumberNode(lineNumber);
	LineNumberNode::addNode(this->lines, n);
}

void Token::addTokenNodeToBinarySearchTree(Token* &headToken, Token* newToken, int lineNumber){
	if(headToken == NULL){
		headToken = newToken;
		headToken->addLineNumber(lineNumber);
	}else{
		if(*newToken < *headToken){
			addTokenNodeToBinarySearchTree(headToken->left, newToken, lineNumber);
		}else if(*newToken > *headToken){
			addTokenNodeToBinarySearchTree(headToken->right, newToken, lineNumber);
		}else if(*newToken == *headToken){
			headToken->addLineNumber(lineNumber);
		}
	}
}

std::string Token::getLinesString(){
	return lines->ToString_expand();
}


std::string Token::getBinarySearchTreeLinesStringsInOrder(Token* head){
	ostringstream oss;

	if(head != NULL){
		oss << getBinarySearchTreeLinesStringsInOrder(head->getLeft());
	}

	if(head != NULL){
		oss << head->tokenString << "\t\t\t";
		oss << head->getLinesString() << "\n";
	}
	
	if(head != NULL){
		oss << getBinarySearchTreeLinesStringsInOrder(head->getRight());
	}

	return oss.str();
}











