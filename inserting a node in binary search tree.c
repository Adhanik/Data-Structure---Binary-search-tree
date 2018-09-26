
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root = NULL;
void insert(int d)
{
    struct node* temp,*p;//temp and p are pointer variables and are allocated memory somewhere
    p=root;
    temp= (struct node*)malloc(sizeof(struct node));//made a node (consist of data , left,right) in memory and its address is stored in temp.
    temp->data=d;
    temp->left= NULL;
    temp->right= NULL;
    //now the node to be inserted is ready along with the data and both the addresses which are null for now
    if (root == NULL)//we check if the B.S.T is empty or not.
    {
        root=temp; //first node of b.s.t is created
    }
    else
    {
        struct node* curr;
        curr=root;
        while(curr)
        {
            p=curr;
            //we have to find the parent node of the element that is being inserted
            
            if(temp->data > curr->data )
            {
                curr=curr->right; //current now points to memory address that is located on right of root node
            }
            else
            {
                curr = curr->left;
            }
        }
        if(temp->data > p->data)//now we know parent node , we compare with the node data that has to be inserted to where insert in the parent node 
        {
            p->right=temp;
        }
        else
        {
            p->left=temp;
        }
    }
    
    
}

int main()
{
    int ele;
    printf("enter the element");
    scanf("%d",&ele);
    insert(ele);

    return 0;
}
