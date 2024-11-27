#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myStack {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) { info = value; next = prev = nullptr; }
	};


	template <typename U>
	class Stack {
		Node<U>* head;
		Node<U>* current;
	public:
		Stack() { head = current = nullptr; }
		~Stack() {  }

		bool isEmpty()const { 
			return head == nullptr;
		}
		U top()const { 
			if (isEmpty()) throw "stack is empty";

			return current->info;
		}
		void push_back(U value) { 

		}
		void pop_back() { ... }
		void showStack()const { ... }
	};
}
