/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head != NULL){
		struct node* i;
		struct node* j;
		for (i = head; i != NULL; i = i->next){
			for (j = i->next; j != NULL; j = j->next){
				if ((i->num) > (j->num)){
					int temp = i->num;
					i->num = j->num;
					j->num = temp;
				}
			}
		}
		return head;
	}
	return NULL;
}