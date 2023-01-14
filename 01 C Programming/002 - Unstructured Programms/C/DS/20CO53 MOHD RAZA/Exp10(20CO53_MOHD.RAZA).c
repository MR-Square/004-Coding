/*
.				Exp No.10:Implementation of binary search tree.

.             										@SHAIKH MOHD RAZA MOHD RAFIQUE
.													Roll No: 20CO53
.													Acadmic Year: 2021-22

.		Binary Search Tree is a node-based binary tree data structure which has the
following properties:
The left subtree of a node contains only nodes with keys lesser than the nodes key.
The right subtree of a node contains only nodes with keys greater than the nodes key.
The left and right subtree each must also be a binary search tree.

*/

#include<stdio.h>
#include<stdlib.h>

struct bstree
{
    int data;
    struct bstree *left;
    struct bstree *right;
};

struct bstree *insert(struct bstree *root, int d)
{
    struct bstree *p;
    if(root==NULL)
    {
        p=(struct bstree *)malloc(sizeof(struct bstree));
        if(p==NULL)
        {
            printf("\nNot enough memory");
            return root;
        }
        p->data=d;
        p->left=p->right=NULL;
        root=p;
        
    }
    else
        if(d<=root->data)
            root->left=insert(root->left,d);
        else
            root->right=insert(root->right,d);
    return root;
}

void inorder(struct bstree *root)
{
    // LRoR
    if(root!=NULL)
    {
        inorder(root->left);
        printf("\t%d",root->data);
        inorder(root->right);
    }
}

void preorder(struct bstree *root)
{
    // RoLR
    if(root!=NULL)
    {
        printf("\t%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct bstree *root)
{
    // LRRo
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("\t%d",root->data);
    }
}


struct bstree *search(struct bstree *root, int key)
{
    if(root!=NULL)
    {
        if(key==root->data)
            return root;
        else
            if(key < root->data)
                search(root->left,key);
            else
                search(root->right,key);
    }
    else
        return NULL;
    //return root;
}


int main()
{
    struct bstree *root;
    int ch,el;
    root=NULL;
    while(1)
    {
        printf("\n\n\t\t\tMENU\n1. Insert.\n2. Inorder Traversal.\n3. Predorder Traversal.");
        printf("\n4. Postorder Traversal.\n5. Search\n6. Exit.");
        printf("\n\tEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nPlease enter data: ");
            scanf("%d",&el);
            root=insert(root,el);
            break;
            case 2:
            printf("\n\nInorder Traversal:");
            inorder(root);
            break;
            case 3:
            printf("\n\nPreorder Traversal:");
            preorder(root);
            break;
            case 4:
            printf("\n\nPostorder Traversal:");
            postorder(root);
            break;
            case 5:
            printf("\nPlease enter key data: ");
            scanf("%d",&el);
            if(search(root,el)!=NULL)
                printf("\nThe key is present in BST.");
            else
                printf("\nThe key is not present in BST.");
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\nPlease enter correct choice...");
        }
    }
    return 0;
}


/*
Conclution:I understood how to implement bst  along with the 3 traversal techniques


Output:             MENU
1. Insert.
2. Inorder Traversal.
3. Predorder Traversal.
4. Postorder Traversal.
5. Search
6. Exit.
        Enter your choice :


*/
