#include <string>
#include <vector>
#include <iostream>
#include "queue_head.h"



void displayTasks(const std::vector<tasksToDo> &tasks) {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout <<  i + 1 << ". " <<  tasks[i].title << " - " << tasks[i].description
                  << " [" << tasks[i].status << "]" << std::endl;
    }
}

void addTask (std::vector<tasksToDo> &tasks,  std::string &title,  std::string &description,  std::string &status){
    tasksToDo task1 (title, description, status);
    tasks.push_back (task1);
}

void remTask(std::vector<tasksToDo> &tasks, size_t index){
    if (index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

