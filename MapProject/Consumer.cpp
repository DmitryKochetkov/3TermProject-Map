#include "Consumer.h"

Consumer::Consumer()
{

}

Consumer::Consumer(const Consumer % o)
{
	this->surname = o.surname;
	this->name = o.name;
	this->fathername = o.fathername;
	this->series = o.series;
	this->number = o.number;
	this->tel = o.tel;
}

Consumer % Consumer::operator=(Consumer % o)
{
	this->surname = o.surname;
	this->name = o.name;
	this->fathername = o.fathername;
	this->series = o.series;
	this->number = o.number;
	this->tel = o.tel;
	return *this;
}

