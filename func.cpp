#include"lib.h"


Stack Double(Stack stk)
{
	vector<Data> set;
	Stack list;
	bool f;

	if (stk.GetSize() == 0)
		return list;

	set.push_back(stk[0]);


	for (int i = 1; i < stk.GetSize(); i++)
	{
		f = true;
		for (int j = 0; j < set.size(); j++)
		{
			if (set[j] == stk[i])
			{
				f = false;
				break;
			}
		}
		if (f)
		{
			set.push_back(stk[i]);
		}
	}

	int cx;
	for (int i = 0; i < set.size(); i++)
	{
		f = false;
		for (int j = 0; j < stk.GetSize(); j++)
		{
			if (set[i] == stk[j])
			{
				f = true;
				break;
			}
		}
		if (f)
		{
			list.push(set[i]);
		}
	}
	return list;
}