cmake_minimum_required(VERSION 3.26)
project(Dungeons_and_Dragons)

set(CMAKE_CXX_STANDARD 20)

add_executable(Dungeons_and_Dragons
        main.cpp
        Matrix.hpp
        Map.cpp
        Map.hpp
        Direction.hpp
        Cell.hpp
        functions.cpp
        functions.hpp
        Class.hpp
        Entity.cpp
        Entity.hpp
        Dragon.cpp
        Dragon.hpp
        Player.cpp
        Player.hpp
        Constants.hpp
        Item.cpp
        Item.hpp
        ItemType.hpp
        Game.cpp
        Game.hpp
)
