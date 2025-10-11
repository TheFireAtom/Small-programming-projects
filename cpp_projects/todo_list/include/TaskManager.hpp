#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP
#include <string>

struct Task	// Will change this in the nearest future
{
	std::string description;
	bool completed;
	short int priority;
	short int position;
	std::string category;

	Task(const std::string& desc, short int prio, short int pos const std::string& cat);

	void markCompleted();
	std::string toString() const;

};

class TaskManager {
private: 
	std::vector<Task> taskStorage;
	short int tasksQuantity = 0; // Variable for tracking tasks amount

public: 
	// Changing tasks
	void addTask(const Task& task);
	void deleteTask(const Task& task);
	void changeTask(const Task& task);
	// Additional methods
	void printAllTasks();
	// void changePositions(const Task& task1, const Task& task2); may not be useful
	void deleteList();
};

#endif // TASK_MANAGER_HPP

