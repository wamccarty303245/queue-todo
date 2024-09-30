//
// Created by William McCarty on 6/26/24.
//
#include <string>
#include <vector>
#include <iostream>
#include "queue_head.h"



void displayTasks(const std::vector<task> &tasks) {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << tasks[i].title << " - " << tasks[i].description
                  << " [" << tasks[i].status << "]" << std::endl;
    }
}

void addTask (std::vector<task> &tasks, const std::string &title, const std::string &description, const std::string &status){
 tasks.push_back(task(title, description, status));
}

void remTask(std::vector<task> &tasks, size_t index){
    if (index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

