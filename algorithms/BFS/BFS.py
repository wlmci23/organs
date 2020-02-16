from collections import deque

graph = []
"""
The graph is represented as sets in lists.
The integers stored in graph[i] are the nodes that node i points to.
"""

def bfs(graph, starting_node):
    visited = set()
    queue = deque()
    queue.append(starting_node)
    while len(queue) != 0:
        node = queue.pop()
        visited.add(node)
        connected_nodes = graph[node]
        connected_unvisited_nodes = connected_nodes.difference(visited)
        queue.extend(connected_unvisited_nodes)
    return visited
