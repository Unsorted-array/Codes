#include "linkedlist.h"
int main()
{
	int ar[]={1,2,3,4};
	node * head=0;
	head=CreateAList(head,ar,4);
	//cout<<head->data<<"\n";
	PrintList(head);
	cout<<endl<<SearchANode(head,1)<<endl;
	head=deleteNode(head,1);
	cout<<endl;
	PrintList(head);

}