# tree-perfect-matching
## 程式簡介
### 簡述
> 使用 Depth-First Search ( DFS ) 實作

Give a linear-time algorithm that takes as input a tree ( undirected tree ) and determines whether it has a perfect matching: a set of edges that touches each node exactly once.

* Input：the first two are maximal node label【contiguous】and the number of edge. The rest are all edges
* Output：Is there a perfect matching, Exist or Doesn't exist

Example 1
```
Input:  6 5 1 2 1 3 2 4 2 5 3 6
Output: Doesn't exist perfect matching
```
![圖片1](https://user-images.githubusercontent.com/93152909/139877741-920a78f9-0246-45e3-8719-6e19107e4858.png)

Example 2
```
Input: 4 3 1 2 1 3 2 4
Output: Exist perfect matching
```
![圖片1](https://user-images.githubusercontent.com/93152909/139877842-87c46f15-6d3b-47e2-a47a-dcd5d1fd6b38.png)

Example 3
```
Input: 6 5 1 2 1 3 1 4 2 5 3 6
Output: Exist perfect matching
```
![圖片1](https://user-images.githubusercontent.com/93152909/139903766-9f38755b-7b43-4ed2-9e37-14d554dc651a.png)

### 範例圖
![image](https://user-images.githubusercontent.com/93152909/150297968-1337bb72-5106-4968-bd04-8036a6c39500.png)
### 時間複雜度
O(V+E)：using adjacency list and DFS
