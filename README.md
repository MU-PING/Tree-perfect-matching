# tree-perfect-matching
## 程式簡介
### 簡述
> 使用 Depth-First Search ( DFS ) 實作

Give a linear-time algorithm that takes as input a tree ( undirected tree ) and determines whether it has a perfect matching: a set of edges that touches each node exactly once.

* Input：the first is maximal node label【Labels are contiguous】. The rest are all edges
* Output：Is there a perfect matching, Yes or NO

Example 1
```
Input:  6 1 2 1 3 2 4 2 5 3 6
Output: No
```
![圖片1](https://user-images.githubusercontent.com/93152909/139877741-920a78f9-0246-45e3-8719-6e19107e4858.png)

Example 2
```
Input: 4 1 2 1 3 2 4
Output: Yes
```
![圖片1](https://user-images.githubusercontent.com/93152909/139877842-87c46f15-6d3b-47e2-a47a-dcd5d1fd6b38.png)

Example 3
```
Input: 6 1 2 1 3 1 4 2 5 3 6
Output: Yes
```
![圖片1](https://user-images.githubusercontent.com/93152909/139903766-9f38755b-7b43-4ed2-9e37-14d554dc651a.png)
