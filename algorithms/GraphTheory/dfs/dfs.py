graph = []
"""
The graph is represented as sets in lists.
The integers stored in graph[i] are the nodes that node i points to.
"""

def dfs(graph, node, visited=set()):
    if node in visited:
        return visited
    visited.add(node)
    connected_nodes = graph[node]
    connected_unvisited_nodes = connected_nodes.difference(visited)
    for i in connected_unvisited_nodes:
        dfs(graph, i, visited)
    return visited
