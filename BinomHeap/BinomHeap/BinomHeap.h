#ifndef _BINOMHEAP
#define _BINOMHEAP
template<typename Key_type> struct Node {
	Node* parent_;
	Key_type key_;
	int degree_;
	Node* child_;
	Node* sibling_;
	Node():parent_(nullptr),key_(0),degree_(0),child_(nullptr),sibling_(nullptr){};
	Node(const Key_type& in):parent_(nullptr),key_(in),degree_(0),child_(nullptr),sibling_(nullptr){};
};

template<typename Key_type> class BinomHeap {
private:
	Node<Key_type>* head_;
	int size_;
	void mergeHeaps(BinomHeap<Key_type>* bheap_1,BinomHeap<Key_type>* bheap_2);
	BinomHeap* rotateChildren();
	void deleteTree(Node<Key_type>* current) {
		if(current == nullptr)
			return;
		Node<Key_type>* next = current->sibling_;
		while(next != nullptr) {
			deleteTree(current->child_);
			delete current;
			current = next;
			next = current->sibling_;
		}
		deleteTree(current->child_);
		delete current;
		current = nullptr;
	}
public:
	void unionHeaps(BinomHeap<Key_type>* bheap);
	BinomHeap():head_(nullptr), size_(0){};
	~BinomHeap() {
		deleteTree(head_);
	};
	int size() { return size_;};
	const Key_type top();
	Node<Key_type>* push(const Key_type& in);
	void pop();
	void decreaseKey(Node<Key_type>* node, const Key_type& new_key);
	void deleteKey(Node<Key_type>* node);
};

#include"BinomHeap.hpp"
#endif