#pragma once
template <class KeyType, class ValueType>
ref class MyMap
{
	ref struct Node
	{
		KeyType key;
		ValueType value;
	};

public:
	System::String^ name;
	array<Node^>^ arr;
	MyMap();

	ValueType operator[] (KeyType key)
	{
		for (int i = 0; i < arr.Length; i++)
			if (arr[i].key == key)
				return arr[i].value;
		throw System::IndexOutOfRangeException();
	}

	bool insert(KeyType key, ValueType value);
	void erase(KeyType key);
	bool change(KeyType key, ValueType value);
	void sort();
};

template<class KeyType, class ValueType>
inline MyMap<KeyType, ValueType>::MyMap()
{
	arr = gcnew array<Node^>(0);
}
