class Solution {
public:
   int dfs(vector<vector<int>> &stones, vector<int> &visited, int i, int s, int r){
	        visited[i] = 1;
	        for(int j = 0; j < s; j++){
		        if( (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) && visited[j] == 0 ){
			        r = dfs(stones, visited, j, s, r);      // if any node connected horozontal or vertical then 
		        }                                                   // implement dfs for that node
	        }
	        r = r + 1;
	        return r;
        }

        int removeStones(vector<vector<int>>& stones) {
	        int s = stones.size();
	        vector<int> visited(s, 0);  // a vector is created that tracks if a node is visited or not
	        int ans = 0;
	        for(int i = 0; i<s; i++){     
		        if(visited[i] == 0) {                        // if node is unvisited then we find if any node is 
			        ans = dfs(stones, visited, i, s, ans);   // connected to that node either horizontal or vertical
			        ans--;     // we dont calculate the initial node, so decrement by 1                                        
		        }    
	        }
	        return ans;
        }
};