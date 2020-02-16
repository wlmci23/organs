from math import inf
from collections import deque

graph = []
"""
The graph is represented as sets of tuples in lists.
The tuples stored in graph[i] are the edges of the graph.
The first value of the tuple is the peer node,
and the second value is the weight (cost).
"""

def dijkstra(graph, starting_node):
    visited = set()
    cost = [inf for i in range(0, len(graph))]
    cost[starting_node] = 0
    queue = deque()
    queue.append(starting_node)
    while len(queue) != 0:
        node = queue.pop()
        visited.add(node)
        peer_nodes = graph[node]
        unvisited_peer_nodes = {i for i in peer_nodes if i[0] not in visited}
        for i in unvisited_peer_nodes:
            queue.append(i[0])
            cost[i[0]] = min(cost[i[0]], cost[node] + i[1])
        print(cost)
    return cost

"""
The output is a list where the ith element in the list
contains the cost of getting from starting_node to node i.
"""
