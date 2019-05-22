#include "AdjLinkedGraph.h"
#include "ShortestPath.h"
int main()
{
    AdjLinkedGraph<char> graph(1);
    char c;

    // 创建有向图
    for (c='0'; c<='5'; c++)
        graph.AddOneVertex(c);
    graph.AddOneEdge(0, 1, 1);
    graph.AddOneEdge(0, 3, 1);
    graph.AddOneEdge(0, 4, 1);
    graph.AddOneEdge(1, 4, 1);
    graph.AddOneEdge(2, 3, 1);
    graph.AddOneEdge(3, 5, 1);

    graph.AddOneEdge(1, 0, 1);
    graph.AddOneEdge(3, 0, 1);
    graph.AddOneEdge(4, 0, 1);
    graph.AddOneEdge(4, 1, 1);
    graph.AddOneEdge(3, 2, 1);
    graph.AddOneEdge(5, 3, 1);

    // 按Dijkstra算法计算graph的最短路径
    cout<<"按Dijkstra算法计算graph的最短路径："<<endl;
//    ShortestPathDij(0, graph);
//    ShortestPathDij(1, graph);
    ShortestPathDij(2, graph);
//    ShortestPathDij(3, graph);
//    ShortestPathDij(4, graph);
    // 按Floyd算法计算graph的最短路径
//    cout<<"按Floyd算法计算graph的最短路径："<<endl;
//    ShortestPathFloyd(graph);
    return 0;
}