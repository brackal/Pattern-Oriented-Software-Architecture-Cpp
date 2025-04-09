cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME MVC)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Client.cpp
    src/Model/Model.cpp
    src/View/View.cpp
    src/View/ConcreteView/BarChartView.cpp
    src/View/ConcreteView/TableView.cpp
    src/Controller/Controller.cpp
    src/Controller/ConcreteController/TableController.cpp
)

include_directories(
    src/
    src/Model/
    src/View/
    src/Controller/
    src/View/ConcreteView/
    src/Controller/ConcreteController/
)