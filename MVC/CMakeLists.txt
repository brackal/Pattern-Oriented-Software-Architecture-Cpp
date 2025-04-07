cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME MVC)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/${PROJECT_NAME}/Model/Model.cpp
    src/${PROJECT_NAME}/View/View.cpp
    src/${PROJECT_NAME}/Controller/Controller.cpp
)

include_directories(
    src/${PROJECT_NAME}
    src/${PROJECT_NAME}/Model/
    src/${PROJECT_NAME}/View/
    src/${PROJECT_NAME}/Controller/
)