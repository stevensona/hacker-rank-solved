#include <vector>
#include <list>
#include <queue>
#include <memory>
#include <sstream>
#include <iostream>

class Graph {
	std::vector<std::list<int>> adj;
	std::vector<bool> visited;
	std::vector<int> parent;
	std::vector<int> distance;

public:
	Graph(int n) : adj(n), visited(n, false), parent(n, -1), distance(n, 0) {}

	void add_edge(int s, int v) {
		adj[s].push_back(v);
		adj[v].push_back(s);
	}

	void bfs(int s, std::ostream &out) {
		for (size_t n = 0; n < adj.size(); ++n) {
			visited[n] = false;
			parent[n] = false;
			distance[n] = -1;
		}

		std::queue<int> frontier;
		frontier.push(s);
		visited[s] = true;
		parent[s] = -1;
		distance[s] = 0;

		while (!frontier.empty()) {
			int c = frontier.front();
			for (auto n : adj[c]) {
				if (!visited[n]) {
					frontier.push(n);
					visited[n] = true;
					parent[n] = c;
					distance[n] = distance[c] + 6;
				}
			}
			frontier.pop();
		}
		for (size_t n = 0; n < adj.size(); ++n) {
			if (n == s) {
				continue;
			}
			out << distance[n] << ' ';
		}
		out << '\n';
	}
};

using namespace std;


int main() {
	int T, N, M, S; cin >> T;
	for (auto a0 = 0; a0 < T; ++a0) {
		cin >> N >> M;
		Graph g(N);
		for (auto a1 = 0; a1 < M; ++a1) {
			int x, y; cin >> x >> y;
			g.add_edge(x - 1, y - 1);
		}
		cin >> S;
		g.bfs(S - 1, cout);

	}
	
}