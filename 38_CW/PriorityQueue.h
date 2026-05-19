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
				Node<U>* p = Queue<U>::current;
				while (p != nullptr && p->info < el->info) {
					p = p->prev;
				}

				if (p == Queue<U>::current) {
					Queue<U>::push_back(el->info);
					delete el;
				}
				else if (p == nullptr) {
					el->next = Queue<U>::head;
					Queue<U>::head->prev = el;
					Queue<U>::head = el;
				}
				else {
					Node<U>* p2 = p->next;
					el->prev = p;
					p->next = el;
					el->next = p2;
					p2->prev = el;
				}
			}
		}
	};

}
