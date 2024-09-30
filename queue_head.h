//
// Created by William McCarty on 6/26/24.
//
#include <iostream>
#include <string>
#include <vector>

struct task {
    std::string title, description, status;

    task() : title(""), description(""), status("") {}
    task(std::string &title, const std::string &description, const std::string &status)
    : title(title), description(description), status(status){}
};

void displayTasks(const std::vector<task> &tasks);
void addTask(std::vector<task> &tasks, const std::string &title, const std::string &description, const std::string &status);
void remTask(std::vector<task> &tasks);






#ifndef TODO_QUEUE_HEAD_H
#define TODO_QUEUE_HEAD_H

#endif //TODO_QUEUE_HEAD_H
