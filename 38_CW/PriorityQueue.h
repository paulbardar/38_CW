#pragma once
#include "Queue.h"

namespace myQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::current = el;
			}
			else {
				Node<U>* p = current;
				while (p != nullptr && p->info < el - info) {
					p = p->prev;
				}

				if (p == current) {
					Queue<U>::push_back(el->info);
					delete el;
				}
				else if (p == nullptr) {
					el->next = Queue<U>::head;
					Queue<U>::head->prev = el;
					Queue<U>::head = el;
				}
				else {
					Queue<U>* p2 = el;
					el->prev = p;
					el->next = p2;
					p2->prev = el;
				}
			}
		}
	};

}
