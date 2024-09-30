
#include <iostream>
#include <string>
#include <vector>

struct tasksToDo {
    std::string title, description, status;

    tasksToDo(){
        title="";
        description="";
        status="";
    }
    tasksToDo(std::string &title, std::string &description, std::string &status)
            : title(title), description(description), status(status){}
};

void displayTasks(const std::vector<tasksToDo> &tasks);
void addTask(std::vector<tasksToDo> &tasks,  std::string &title,  std::string &description,  std::string &status);
void remTask(std::vector<tasksToDo> &tasks);






#ifndef TODO_QUEUE_HEAD_H
#define TODO_QUEUE_HEAD_H

#endif //TODO_QUEUE_HEAD_H
