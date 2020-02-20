# Graphs

## Graph traversals
Graph traversal means visiting every node and edge exactly once in a well defined order. While using certain graph algorithms 
you must ensure that each vertex of the graph is visited exactly once ther order is important

### Bread First Search

There are many ways to traverse a graph BFS is the most common one


### Traversing the child nodes

A graph can contain cycles, which may bring you to the same node again while traversing the graph
To avoid processing the node more than once use the boolean array which marks the after it has been processed


```
BFS(G, s)
	let Q be queue.
	Q.enque(s).
	
	mark s as visited
	while( Q is not empty )
		remove that vertex from the queue

