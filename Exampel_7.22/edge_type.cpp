/// @file edge_type.cpp
/// @brief Определяем тип ребра
/// @author Mansurov Sh.

#include <iostream>
#include "dfs.cpp"

int TREE = 2;
int BASK = 3;
int FORWARD = 4;
int CROSS = 5;

int edge_classification(int x, int y){
    if(parent[y] == x)
        return TREE;
    if(discovered[y] && !processed[y])
        return BASK;
    if(processed[y] && (entry_time[x] < entry_time[y]))
        return FORWARD;
    if(processed[y] && (entry_time[y] < entry_time[x]))
        return CROSS;
    
    std::cout <<"Warning: self loop ("<<x<< ","<<y<<")"<<std::endl;
    return -1;
}