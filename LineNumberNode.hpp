

class lineNumberNode{
	public:
		int val;
		lineNumberNode* next;

		lineNumberNode();
		lineNumberNode(int val);
		~lineNumberNode();

		static void addNode(lineNumberNode* &headNode, lineNumberNode* newNode);
		std::string ToString();
		std::string ToString_expand();
		std::string operator<<(const lineNumberNode &rhs);

};