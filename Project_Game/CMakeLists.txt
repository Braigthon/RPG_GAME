cmake_minimum_required(VERSION 3.27)
project(Project_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Project_Game main.cpp
        Character/Character.cpp
        Character/Character.h
        Player/Player.cpp
        Player/Player.h
        Enemy/Enemy.cpp
        Enemy/Enemy.h
        Utils.h
        Combat/Combat.cpp
        Combat/Combat.h
        Combat/Action.h
)
