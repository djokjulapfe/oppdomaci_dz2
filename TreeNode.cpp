#include "TreeNode.h"

TreeNode::TreeNode(int start, int end, BigDecimal *val) : start(start),
														  end(end),
														  val(*val) {
	left = nullptr;
	right = nullptr;
}

void TreeNode::setLeft(const TreeNode *left) {
	TreeNode::left = left;
}

void TreeNode::setRight(const TreeNode *right) {
	TreeNode::right = right;
}

int TreeNode::getStart() const {
	return start;
}

int TreeNode::getEnd() const {
	return end;
}

TreeNode::~TreeNode() {
}

std::ostream &operator<<(std::ostream &out, const TreeNode &treeNode) {
	out << treeNode.val << "[" << treeNode.start << ":" << treeNode.end << "]";
}

TreeNode::TreeNode(const TreeNode &treeNode) {
	start = treeNode.start;
	end = treeNode.end;
	val = treeNode.val;
	left = nullptr;
	right = nullptr;
}

bool TreeNode::covers(int start, int end) {
	return this->start <= start && this->end >= end;
}

