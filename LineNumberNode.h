#ifndef Lab4_LineNumberNode
#define Lab4_LineNumberNode

using namespace std;
#include <string>

class LineNumberNode{
	public:
		int val;
		LineNumberNode* next;

		LineNumberNode();
		LineNumberNode(int val);
		~LineNumberNode();

		static void addNode(LineNumberNode* &headNode, LineNumberNode* newNode);
		string ToString();
		string ToString_expand();
		string operator<<(const LineNumberNode &rhs);

};
#endif