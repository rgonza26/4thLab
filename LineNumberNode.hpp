

class lineNumberNode{
	public:
		int val;
		lineNumberNode* next;

		lineNumberNode();
		lineNumberNode(int val);
		~lineNumberNode();

		void addNode(lineNumberNode* newNode);
		std::string ToString();
		std::string ToString_expand();

};