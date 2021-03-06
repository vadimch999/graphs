#ifndef GRAPHS_MENU_H
#define GRAPHS_MENU_H

#include "../graph/graph.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "../messages/messages.h"

//  Максимальное количество вершин при рандомном генерации графа
#define RANDOM_MAX_COUNT 10

//  Название файла, в который по стандарту записывается граф
#define LOAD_PATH "binaryGraph"

//  Максимальное количество вершин при таймированни
#define TIMING_MAX_COUNT 30

#define textMenu    "1. New empty graph\n"          \
                    "2. Add vertex\n"               \
                    "3. Add edge\n"                 \
                    "4. Display graph\n"            \
                    "5. Remove vertex\n"            \
                    "6. Remove edge\n"              \
                    "7. Write to file\n"            \
                    "8. Read from file\n"           \
                    "9. Breadth first search\n"     \
                    "10. Dijkstra\n"                \
                    "11. Flow network\n"            \
                    "12. Random graph\n"            \
                    "13. Timing\n"                  \
                    "0. exit\n"                     \


//  Основная функция меню.
void menu();

//  Возвращает новую строку из пользовательского ввода.
char* getStr();
//  Возвращает число из пользовательского ввода в заданном диапазоне.
int getInt(int min, int max);


//  Обёртка. Выделяется память под пустой граф
void createNewGraph(Graph** graph);
//  Обёртка. Добавление новой вершины
void addNewVertex(Graph* graph);
//  Обёртка. Добавление нового ребра
void addNewEdge(Graph* graph);
//  Вывести списки смежности на экран
void displayGraph(Graph* graph);
//  Обёртка. Удаление вершины
void removeVertex(Graph* graph);
//  Обёртка. Удалнеие ребра
void removeEdge(Graph* graph);
//  Удаление всего графа
void deleteGraph(Graph* graph);
//  Обёртка. Чтение графа из файла
void readGraph(Graph** graph);
//  Обёртка. Записать граф в файл
void writeGraph(Graph* graph);
//  Обёртка. Поиск в ширину
void startBFS(Graph* graph);
//  Обёртка. Дейкстра
void dijkstraAlg(Graph* graph);
//  Обёртка. Форд-Фалкерсон
void flowNetwork(Graph* graph);
//  Обёртка. Генерация рандомного графа
void randomGraph(Graph** graph);
//  Таймирование
void timing();

//  Чтение графа из файла
Graph* readFromFile(char* path);
//  Запись графа в файл
Graph* writeToFile(Graph* graph, char* path);
#endif
