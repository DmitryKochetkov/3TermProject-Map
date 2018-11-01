#pragma once
template <typename KeyType, typename ValueType>
ref class MyMap
{
	ref struct Node
	{
		KeyType key;
		ValueType value;
	};
public:
	MyMap();
	System::String^ name;
	array<System::String^>^ arr;

	ValueType operator[] (KeyType key)
	{
		for (int i = 0; i < arr.Length; i++)
			if (arr[i].key == key)
				return arr[i].value;
		throw System::IndexOutOfRangeException();
	}

	void insert(KeyType key, ValueType value);
	void erase(KeyType key);
	void change(KeyType key, ValueType value);
};