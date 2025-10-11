#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include "../include/TaskManager.hpp"

// Task struct constructor and methods

Task::Task(const std::string& desc, short int prio, short int pos, const std::string& cat)
		: description(desc), completed(false), priority(prio), position(pos), category(cat) {}

void Task::markCompleted() {
	completed = true;
}

std::string Task::toString() const {
	std::stringstream ss;
	ss << "Task: " << description << "| Priority: " << priority
	   << "| Category: " << category << "| Completed: " << completed;
	return ss.str();
}

// TaskManager methods and tasks vector

void TaskManager::addTask(const Task& task) {
	taskStorage.push_back(task);
}

void TaskManager::deleteTask(const Task& task) {

}