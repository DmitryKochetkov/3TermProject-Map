#pragma once
template <class Key_Type, class Value_Type>
ref class MyMap
{
	ref struct Node
	{
		Key_Type key;
		Value_Type value;
	};

public:
	
	System::String^ name;
	array<Node^>^ arr;
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
	arr = gcnew array<Node^>(0);
}
