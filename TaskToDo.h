//
// Created by benba on 2024-09-30.
//

#ifndef TASK_H
#define TASK_H
#include<string>
  struct TaskToDo {
   public:
   std::string title, description;
   std:: bool status;
    public:
    TaskToDo();
    TaskToDo(string,string,bool);
    };
#endif //TASK_H
