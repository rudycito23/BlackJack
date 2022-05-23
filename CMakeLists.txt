cmake_minimum_required(VERSION 3.16)
project(BlackJack)

set(CMAKE_CXX_STANDARD 14)

add_executable(BlackJack main.cpp Players.cpp Players.h Cards.cpp Cards.h Dealer.cpp Dealer.h Game.cpp Game.h)
