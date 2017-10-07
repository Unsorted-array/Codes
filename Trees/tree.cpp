#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
class node {
public:
		int data;
		node* left,* right;

		node(int d){
			data =d;
			left =0;
			right =0;
		}
};
node * createBinaryTree(node * head)
{
	int x ;
	cin>>x;

	if(x==-1)
	{
		return NULL;
	}
	head = new node(x);

	head->left=createBinaryTree(head->left);
	head->right= createBinaryTree(head->right);
	return head;
}
void PrintInorder(node * head)
{
	if(head == NULL)
	{
		return ;
	}
	PrintInorder(head->left);
	cout<<head->data<<" ";
	PrintInorder(head->right);
}
void PrintlevelOrder(node * head)
{
	//cout <<head->data<<" ";
	if(head)
	{
	queue<node *> q;
	q.push(head);
	while(q.empty()==false)
	{
		node * temp = q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left)
		{
			q.push(temp->left);
		}
		if(temp->right)
		{
			q.push(temp->right);
		}
	}
	}	

}
int CountNoofNodes(node * head)
{
	if(head ==0)
	{
		return 0;
	}
	if(head->left ==0 && head->right ==0)
	{
		return 1;
	}
	int countL = CountNoofNodes(head->left);
	int countR = CountNoofNodes(head->right);

	return countL+countR+1; 
}
bool findAnode(node * head,int data)
{
	if(head == 0)
	{
		return false;
	}
	if(head->data ==data )
	{
		return true;
	}
	 bool result = findAnode(head->left,data);
	 if(result ) return result;	
	 else{
	  return findAnode(head->right,data);
	}
}
node * mirrorBinaryTree(node * head)
{
	if(head == 0)
	{
		return head;
	}
	else if(head->left && head->right)
	{
		node *temp = head->left;
		head->left = head->right;
		head->right = temp;
	}

	mirrorBinaryTree(head->left);
	mirrorBinaryTree(head->right);
	return head;
}
int heightBinaryTree( node * head)
{
	if(head==0)
	{
		return 0;
	}

	int lheight = heightBinaryTree(head->left)+1;
	int rheight = heightBinaryTree(head->right)+1;

	return max(lheight,rheight);
}
bool heightBalanced(node* head)
{
	int lheight = heightBinaryTree(head->left);
	int rheight = heightBinaryTree(head->right);

	if( abs(lheight - rheight )<=1) return true;
	return false;
}
int main()
{
	node * head = createBinaryTree(head);

	PrintlevelOrder(head);
	cout<<"\n";
	PrintInorder(head);
	cout<<endl;
	cout<<CountNoofNodes(head);
	//int ele;
	//cin>>ele;
	cout<<endl;

	//cout<<boolalpha<<findAnode(head,ele);
	head = mirrorBinaryTree(head);

	PrintlevelOrder(head);
	cout<<endl<<heightBinaryTree(head);
	cout<<endl<<boolalpha<<heightBalanced(head);
}