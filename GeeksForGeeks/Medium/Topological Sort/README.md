# Topological Sort

## Difficulty: Medium

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/topological-sort/1)

## Solved On
27 Oct 2026 at 02:39 pm

<h2><a href="https://www.geeksforgeeks.org/problems/topological-sort/1">Topological Sort</a></h2><h3>Difficulty Level: Medium</h3><hr><p><span style="font-size: 14pt;">Given a Directed Acyclic Graph (DAG) with <strong>V</strong> vertices numbered from 0 to V - 1, represented by an adjacency list <strong>adj[][]</strong>, return a topological ordering of its vertices.</span></p><p><span style="font-size: 14pt;">A topological ordering is a linear ordering of vertices such that for every directed edge u -&gt; v, vertex u appears before vertex v in the ordering.</span></p><p><span style="font-size: 14pt;"><strong>Note: </strong>Multiple valid topological orderings may exist. Any valid ordering is accepted. The output is true if the returned ordering is valid; otherwise, it is false.</span></p><p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p><pre><span style="font-size: 14pt;"><strong>Input: </strong>adj[][] = [[], [0], [0], [0]]</span><br><span style="font-size: 14pt;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700255/Web/Other/blobid0_1744196747.jpg" width="330" height="247"></span><br><span style="font-size: 14pt;"><strong>Output: </strong>true</span><br><span style="font-size: 14pt;"><strong>Explanation</strong>: The output true denotes that the order is valid. Few valid Topological orders for the given graph are:
[3, 2, 1, 0]</span><br><span style="font-size: 14pt;">[1, 2, 3, 0]</span><br><span style="font-size: 14pt;">[2, 3, 1, 0]</span></pre><pre><span style="font-size: 14pt;"><strong style="font-size: 14pt;">Input: </strong><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">adj[][] = [[], [3], [3], [], [1, 0], [0, 2]]</span><br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700255/Web/Other/blobid1_1744196789.jpg" width="361" height="269"><br></span><strong style="font-size: 14pt;">Output: </strong><span style="font-size: 14pt;">true
</span><strong style="font-size: 14pt;">Explanation: </strong><span style="font-size: 14pt;">The output true denotes that the order is valid. Few valid Topological orders for the graph are:<br>[4, 5, 0, 1, 2, 3]<br>[5, 2, 4, 0, 1, 3]</span></span></pre>