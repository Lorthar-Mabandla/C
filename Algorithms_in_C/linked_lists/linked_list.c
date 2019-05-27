/*****************************************************************************/
/*     file name : linked_list.c                                             */
/*     Author    : Lorthar Mabandla                                          */
/*     Date      : 27 May 2019                                               */
/*     Purpose   : program to display linked list, with head and tail nodes  */
/*****************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE_{
	int key;
	struct NODE_ *next;
} NODE;
NODE *head, *z;

//function declarations
void list_initialize(void);
void add_at_end(NODE *node);
void del_node(NODE *del);
void display_list(NODE *node);

void list_initialize(void){
	head = (NODE *)malloc(sizeof *head);
//	t = (NODE *)malloc(sizeof *t);
	z = (NODE *)malloc(sizeof *z);
	head->key = 0;
	head->next = z;
	z->next = z;
	return;
}

void add_at_end( NODE *node){
	NODE *temp;
	temp = (NODE *)malloc(sizeof *temp);
	while(z != node->next) node = node->next;
	temp->key = node->key + 1;
	temp->next = node->next;
	node->next = temp;
	return;
}

void del_node( NODE *del){
	while(z != del->next) del = del->next;
	if(del->next == z){
		NODE *temp;
		temp = del;
		del = del->next;
//		free(temp);
	}
	return;
}

void display_list( NODE *node){
	while(z != node->next){
		printf("*************************************************\n");
		printf("\nNode number : %d\n\n", node->key);
		printf("*************************************************\n");
		node = node->next;
	}
	return;
}

int main(void){
	char key= 0;
	list_initialize();
	while(key != 27){
		key = 0;
		printf(" Welcome\n 1 : Add node\n 2 : del node\n 3 : display list\n press ESC to exit\n");
		scanf("%c",&key);
		switch(key){
			case 27:
				break;
			case 49: 
				add_at_end(head);
				break;
			case 50:
				del_node(head);
				break;
			case 51:
				display_list(head); break;
		}
	}
	return 0;
}
