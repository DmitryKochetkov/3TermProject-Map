#pragma once
template <class T1, class T2>
ref struct Node
{
	T1 key;
	T2 value;
};

template <class Key_Type, class Value_Type>
ref class MyMap
{
public:
	System::String^ name;
	array<Node<Key_Type, Value_Type>^>^ arr;
	MyMap();

	Value_Type operator[] (Key_Type key)
	{
		for (int i = 0; i < arr.Length; i++)
			if (arr[i].key == key)
				return arr[i].value;
		throw System::IndexOutOfRangeException();
	}

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
bool MyMap<Key_Type, Value_Type>::insert(Key_Type key, Value_Type value)
{
	Node<Key_Type, Value_Type> x;
	x.key = key;
	x.value = value;
	try
	{
		this[key];
	}
	catch (System::IndexOutOfRangeException())
	{
		return false;
	}
	arr->Add(x);
	return true;
}
