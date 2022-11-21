#pragma once
#include<iostream>
#include<vector>

using namespace std;

class Data
{
public:
	int value;

	void Display();
	void EnterData();

};

class Stack
{
public:

	Stack();



	class Node
	{
	public:
		Node(Data data, Node* pNext);
		Node* pNext;
		Data data;
	};

	void push(Data data);

	bool pop();

	Data operator[](int index);

	void MakeNull();

	Data Retrieve(int pos);

	void Display();

	int GetSize();


private:
	Node* top;
	int size;

};

bool operator==(Data data1, Data data2);

Stack Double(Stack stk);