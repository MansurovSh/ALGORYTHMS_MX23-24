/// @file dfs.cpp
/// @brief Обход в глубину
/// @author Mansurov Sh.

#include "graph.hpp"
#include "edge_type.cpp"


void dfs(Graph *g, int v){     /*Поиск в глубину*/
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
    //process_vertex_late(v);
    time = time + 1;
    //exit_time[v] = time;  
    processed[v] = true;
}


int main(){
   
    Graph g;

    /* Инициализация графа */
    /* Инициализация списка смежности */
    initialize_graph(&g, true, 8);


    /* Добавление ребер */
    insert_edge(&g, 1, 2, true);
    insert_edge(&g, 3, 1, true);
    insert_edge(&g, 2, 5, true);
    insert_edge(&g, 2, 4, true);
    insert_edge(&g, 5, 3, true);
    insert_edge(&g, 5, 4, true);
    insert_edge(&g, 6, 3, true);
    insert_edge(&g, 4, 6, true);
    
    
    dfs(&g,1);
    print_graph(&g);
    std::cout<<edge_classification(2,6);

    
}