#include <iostream>
using namespace std;

#ifndef HEAP_H
#define HEAP_H

class Heap{

	vector <int> v;
	int sze ;

	int parent(int i)
	{
		return i >>1 ; //right shift operator divided by 2

	}
	int left(int i) { return i<<1 ;}
	int right(int i){ return (i<<1)+1 ;}

	void heapify (int i){
		if(i >=sze) return ;

		if( left(i) <=sze && v[left(i)] < v[parent(i)])
		{
			swap(v[parent(i)],v[i]);
		}
		if(right(i)<=sze && v[right(i)] < v[parent(i)] )
		{
			swap(v[parent(i)],v[i]);
		}
	
	}

public:
	Heap(){
		v[0]=-1;
		sze =0;
	}
	void push(int d)
	{
		v.push_back(d);
		++size;
		int i =sze;

		while(i>1 && (v[parent(i)]<v[i]) ){
			swap(v[parent(i)],v[i]);
			i=parent(i);
		}
	}
	void pop(){
		if(sze == 0) return ;
		swap( v[1] , v[sze]);
		v.pop_back();
		--sze;

		heapify(1);
	}
	bool empty()
	{
		return sze ==0 ;
	}
	int top(){
		if(empty())
		{
			return -1;
		}
		return v[1];
	}
	

}

