cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME Layers)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Layers/Client.cpp
    src/Layers/Layer1/DataLink.cpp
    src/Layers/Layer2/Transport.cpp
    src/Layers/Layer2/L2Provider.cpp
    src/Layers/Layer3/Session.cpp
    src/Layers/Layer3/L3Provider.cpp
)

include_directories(
    src/
    src/Layers/
    src/Layers/Layer1/
    src/Layers/Layer2/
    src/Layers/Layer3/
)