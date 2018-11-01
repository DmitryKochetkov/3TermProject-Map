#include "MyMap.h"

template<typename KeyType, typename ValueType>
inline MyMap<KeyType, ValueType>::MyMap()
{
	arr = gcnew array<Node>();
}

template<class KeyType, class ValueType>
bool MyMap<KeyType, ValueType>::insert(KeyType key, ValueType value)
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

template<class KeyType, class ValueType>
void MyMap<KeyType, ValueType>::erase(KeyType key)
{
	for (int i = 0; i < arr.Length; i++)
		if (arr[i].key == key)
			arr->RemoveAt(i);
}

template<class KeyType, class ValueType>
bool MyMap<KeyType, ValueType>::change(KeyType key, ValueType value)
{
	for (int i = 0; i < arr.Length; i++)
		if (arr[i].key == key)
			arr[i].value = value;
}

template<class KeyType, class ValueType>
void MyMap<KeyType, ValueType>::sort()
{
	arr->Sort();
	//throw gcnew System::NotImplementedException();
}

