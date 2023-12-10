/// @file dfs.cpp
/// @brief Обход в глубину
/// @author Mansurov Sh.

#include "graph.hpp"


void dfs(Graph *g, int v){ 
    Edgenode *р; 
    int у; 
    if (finished) 
        return; 
    discovered[v] = true; 
    time = time + 1; 
    entry_time[v] = time; 
     
    process_vertex_early(v); 
    р = g->edges[v]; 
    while (р != NULL){ 
        у = р->y; 
        if ( !discovered[y]){ 
            parent[y] = v; 
            process_edge(v, у); 
            dfs (g, у); 
        }
        else if (((!processed[y]) && (parent [v] != y)) || (g->directed)) 
            process_edge(v, у);

        if (finished) 
            return; 
        р = p -> next;
    } 
    process_vertex_late(v); 
    time = time + 1; 
    exit_time[v] = time ; 
    processed[v] = true;
}