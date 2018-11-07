#pragma once
template <class T1, class T2>
ref struct Node
{
	T1 key;
	T2 value;
};

using namespace System;

template <class Key_Type, class Value_Type>
ref class MyMap
{
private:
	array<Node<Key_Type, Value_Type>^>^ arr;
public:
	System::String^ name;
	MyMap();

	Value_Type^ operator[] (Key_Type key)
	{
		for (int i = 0; i < arr.Length; i++)
		{
			try
			{
				if (arr[i]->key == key)
					return %arr[i]->value;
			}
			catch (const System::IndexOutOfRangeException())
			{
				return %Value_Type();
			}
		}
	}

	int size();
	Node<Key_Type, Value_Type>^ at(int index);
	bool insert(Key_Type key, Value_Type value);
	void erase(Key_Type key);
	bool change(Key_Type key, Value_Type value);
	void sort();
};

template<class Key_Type, class Value_Type>
inline MyMap<Key_Type, Value_Type>::MyMap()
{
	arr = gcnew array<Node<Key_Type, Value_Type>^>(0);
}

template<class Key_Type, class Value_Type>
inline int MyMap<Key_Type, Value_Type>::size()
{
	return arr->Length;
}

template<class Key_Type, class Value_Type>
inline Node<Key_Type, Value_Type>^ MyMap<Key_Type, Value_Type>::at(int index)
{
	return arr[index];
}

template<class Key_Type, class Value_Type>
bool MyMap<Key_Type, Value_Type>::insert(Key_Type key, Value_Type value)
{
	Node<Key_Type, Value_Type> x;
	x.key = key;
	x.value = value;
	if (this[key] != nullptr)
		return false;
	arr->Resize(arr, arr->Length + 1);
	arr[arr->Length - 1] = %x;
	return true;
}

template<class Key_Type, class Value_Type>
void MyMap<Key_Type, Value_Type>::erase(Key_Type key)
{
	int k;
	for (int i = 0; i < arr.Length; i++)
		if (arr[i]->key == key)
		{
			k = i;
			break;
		}
	for (int i = k; i < arr->Length - 1; i++)
		arr[i] = arr[i + 1];
	arr->Resize(arr, arr->Length - 1);
}

template<class Key_Type, class Value_Type>
bool MyMap<Key_Type, Value_Type>::change(Key_Type key, Value_Type value)
{
	for (int i = 0; i < arr.Length; i++)
		if (arr[i]->key == key)
		{
			arr[i]->value = value;
			return true;
		}
	return false;
}
