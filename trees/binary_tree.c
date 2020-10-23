#include<stdio.h>
#include<stdlib.h> // For malloc

struct emp {
	struct emp *left_child;
	struct emp *right_child;
	int emp_id;
	int count;
};

struct emp *add_node(struct emp *, int);
void print_node(struct emp *);
void print_tree(struct emp *);

int main() {
	struct emp node, *root;
	root = NULL;	
	root = add_node(root, 20);
	root = add_node(root, 10);
	root = add_node(root, 30);
	root = add_node(root, 40);
	root = add_node(root, 5);
	root = add_node(root, 3);
	root = add_node(root, 8);
	root = add_node(root, 25);
	root = add_node(root, 36);
	root = add_node(root, 40);
	root = add_node(root, 3);
	root = add_node(root, 2);
	root = add_node(root, 5);
	root = add_node(root, 22);
	root = add_node(root, 37);
	print_tree(root);
}

struct emp *create_node(void) {
	/*
		- This function creates a new node for emp.
	   */
	return (struct emp *) malloc(sizeof(struct emp));
}

struct emp *add_node(struct emp *root, int emp_id) {
	/* Add node to the root */

	if (root == NULL) {
		root = create_node();
		root->emp_id = emp_id;
		root->count = 1;
		root->left_child = NULL;
		root->right_child = NULL;
	}

	else {
		if (root->emp_id == emp_id) {
			root->count += 1;	
		}
		
		else if (root->emp_id < emp_id) {
			root->right_child = add_node(root->right_child, emp_id);
		}
		
		else {
			root->left_child = add_node(root->left_child, emp_id);
		}
	}
	return root;
}

void print_node(struct emp *node) {
	if (node != NULL) {
		printf("%d, ", node->emp_id);
	}
}

void print_tree(struct emp *node) {
	if (node != NULL) {
		print_tree(node->left_child);
		print_node(node);
		print_tree(node->right_child);
	}
}
