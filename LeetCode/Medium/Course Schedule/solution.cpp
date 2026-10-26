class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);

        for(int i = 0; i < prerequisites.size(); i++) {
            int course = prerequisites[i][0];
            int prereq = prerequisites[i][1];

            graph[prereq].push_back(course);
            indegree[course]++;
        }

        queue<int> q;

        for(int i = 0; i < numCourses; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        int completedCourses = 0;

        while(!q.empty()) {
            int curr = q.front();
            q.pop();

            completedCourses++;

            for(int i = 0; i < graph[curr].size(); i++) {
                int nextCourse = graph[curr][i];

                indegree[nextCourse]--;

                if(indegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
        }

        if(completedCourses == numCourses)
            return true;

        return false;
    }
};