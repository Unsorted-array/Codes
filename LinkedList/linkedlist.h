#include "node.h"
#include <iostream>
using namespace std;
void PrintList(node *head1)
{
	node *head =head1;
	while(head!=0)
	{
		cout<<head->data<<" ";
		head=head->next;

	}
}

node* AddaNode(node * head,int data)
{
	//cout<<"adding\n";
	if(head==0)
	{
		return new node(data);
	}
	node* temp =head;

	while(temp->next)
	{
		temp=temp->next;
	}
	node* Auc=new node(data);
	temp->next= Auc;
	//cout<<"\n"<<Auc->data;
	return head;
}

node* CreateAList(node* head,int ar[],int n)
{
	//cout<<"creating\n";
	for(int i=0;i<n;i++)
	{
		head=AddaNode(head,ar[i]);
	}
	//cout<<"return\n";
	return head;

}
int SearchANode(node* head,int data)
{
	//cout<<data;
	int cnt=0;
	while(head!=0)
	{
		if(head->data==data)
		{
			return cnt;
		}
		head=head->next;
		cnt++;
	}
	return -1;
}
int length(node *head1)
{
	int cnt=0;
	node *head =head1;
	while(head!=0)
	{
		//cout<<head->data<<" ";
		head=head->next;

		cnt++;
	}
	return cnt;
}

node* deleteNode(node* head,int data)
{
	int pos =SearchANode(head,data);
	if(pos==0)
	{
		node* temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	else if(pos != -1)
	{
		node* temp =head;
		int cnt=0;
		while(cnt<pos-1)
		{
			temp=temp->next;
			cnt++;
		}
		node * Aux = temp->next;
		temp->next=Aux->next;
		delete(Aux);
		return head;

	}
	return head;
}