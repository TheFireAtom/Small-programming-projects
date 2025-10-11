#include <iostream>
#include <list>
#include <string>

struct Task	// Will change this in the nearest future
{
	std::string description;
	bool completed;
	short int priority;
	std::string category;
	Task(const std::string& desc, short int prio, const std::string& cat)
		: description(desc), completed(false), priority(prio), category(cat) {}
	

};

std::list<Task> myTasksList;

