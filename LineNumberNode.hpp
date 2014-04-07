

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