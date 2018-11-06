#pragma once
using namespace System;

ref class Consumer
{
public:
	String^ surname;
	String^ name;
	String^ fathername;
	String^ series;
	String^ number;
	String^ tel;
	
	Consumer();
	Consumer(const Consumer %o);
	Consumer% operator = (Consumer% o);
};


