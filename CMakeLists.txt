cmake_minimum_required(VERSION 3.21)
project(graphs C)

set(CMAKE_C_STANDARD 17)

add_executable(graphs main.c graph/graph.c graph/graph.h menu/menu.c menu/menu.h queue/queue.c queue/queue.h messages/messages.c messages/messages.h)

target_link_libraries(graphs m)
