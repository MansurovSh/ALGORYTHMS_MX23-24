/// @file graph.cpp
/// @brief Structur Graph
/// @author Mansurov Sh

struct Edgenode{
    int y;
    Edgenode *next;
};

struct Graph{
    bool directed;
    Edgenode *edges[];
    
};


bool discovered[];
int parent[];
bool processed[];
int exit_time[];

