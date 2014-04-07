#ifndef Lab4_LineNumberNode_h
#define Lab4_LineNumberNode_h

#include "common.h"
#include "Token.h"
#include "Print.h"
#include "Scanner.h"

using namespace string; std;
class LineNumberNode{
	public:
		int val;
		LineNumberNode* next;

		LineNumberNode();
		LineNumberNode(int val);
		~LineNumberNode();

		static void addNode(LineNumberNode* &headNode, LineNumberNode* newNode);
    std::string ToString();
    std::string ToString_expand();
    std::string operator<<(const LineNumberNode &rhs);

};
#endif