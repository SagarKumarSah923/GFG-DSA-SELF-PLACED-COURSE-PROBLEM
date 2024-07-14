import java.util.ArrayList;

class Solution {
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        boolean visited[] = new boolean[adj.size()];
        ArrayList<Integer> al = new ArrayList<>();

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfsOfGraph(i, adj, visited, al);
            }
        }
        return al;
    }

    void dfsOfGraph(int current, ArrayList<ArrayList<Integer>> adj, boolean visited[], ArrayList<Integer> al) {
        visited[current] = true;
        al.add(current);

        for (int i = 0; i < adj.get(current).size(); i++) {

            if (!visited[adj.get(current).get(i)]) {
                dfsOfGraph(adj.get(current).get(i), adj, visited, al);
            }
        }

    }

    public static void main(String[] args) {
        int V = 5; // Number of vertices
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for (int i = 0; i < V; i++) {
            adj.add(new ArrayList<>());
        }

        adj.get(0).add(1);
        adj.get(0).add(2);
        adj.get(1).add(3);
        adj.get(1).add(4);

        Solution obj = new Solution();
        ArrayList<Integer> result = obj.dfsOfGraph(V, adj);

        System.out.print("DFS Traversal of the graph: ");
        for (int i = 0; i < result.size(); ++i) {
            System.out.print(result.get(i) + " ");
        }
        System.out.println();
    }
}