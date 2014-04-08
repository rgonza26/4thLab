#ifndef Lab4_LineNumberNode
#define Lab4_LineNumberNode


#include <string>
using namespace std;

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