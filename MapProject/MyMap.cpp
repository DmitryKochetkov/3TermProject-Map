#include "MyMap.h"

template<class Key_Type, class Value_Type>
bool MyMap<Key_Type, Value_Type>::insert(Key_Type key, Value_Type value)
{
	Node x;
	x.key = key;
	x.value = value;
	try
	{
		this[key];
		catch (System::IndexOutOfRangeException())
		{
			return false;
		}
	}
	arr->Add(x);
}

template<class Key_Type, class Value_Type>
void MyMap<Key_Type, Value_Type>::erase(Key_Type key)
{
	for (int i = 0; i < arr.Length; i++)
		if (arr[i].key == key)
			arr->RemoveAt(i);
}

template<class Key_Type, class Value_Type>
bool MyMap<Key_Type, Value_Type>::change(Key_Type key, Value_Type value)
{
	for (int i = 0; i < arr.Length; i++)
		if (arr[i].key == key)
			arr[i].value = value;
}

template<class Key_Type, class Value_Type>
void MyMap<Key_Type, Value_Type>::sort()
{
	arr->Sort();
	//throw gcnew System::NotImplementedException();
}

