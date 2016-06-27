#include <vector>
#include <list>
#include <queue>
#include <memory>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

class Graph {
	vector<list<int>> adj;
	vector<bool> visited;
	vector<int> parent;


public:
	vector<char> data;
	Graph(int n) : adj(n), visited(n, false), parent(n, -1), data(n, ' ') {}

	void add_edge(int s, int v) {
		adj[s].push_back(v);
		adj[v].push_back(s);
	}

	string bfs(int s, char t) {
		for (size_t n = 0; n < adj.size(); ++n) {
			visited[n] = false;
			parent[n] = false;
		}

		queue<int> frontier;
		frontier.push(s);
		visited[s] = true;
		parent[s] = -1;

		while (!frontier.empty()) {
			int c = frontier.front();
			for (auto n : adj[c]) {
				if (!visited[n]) {
					frontier.push(n);
					visited[n] = true;
					parent[n] = c;
					if (data[n] == t) {//found princess
						int t = n;
						while (parent[t] != s) {
							t = parent[t];
						}
						if (t == s + 1) return "RIGHT";
						else if (t == s - 1) return "LEFT";
						else if (t > s) return "DOWN";
						else if (t < s) return "UP";
					}
				}
			}
			frontier.pop();
		}
		return "NONE";
	}
};


void next_move(vector <string> board) {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine rng(seed);
	std::uniform_int_distribution<int> dist(1, 4);

	auto width = board.front().size();
	auto height = board.size();
	auto count = width * height;

	string b{};
	for (auto r : board) b.append(r);
	auto pos = distance(begin(b), find(begin(b), end(b), 'm'));

	Graph g(count);
	for (auto s = 0; s < count - 1; ++s) {
		if (s % width != width - 1) g.add_edge(s, s + 1);
		if (s + width < count) g.add_edge(s, s + width);
		
	}
		
	for (auto c = 0; c < b.size(); ++c) {
		g.data[c] = b[c];
	}
	auto dir = g.bfs(pos, 'p');

	cout << dir;
}

int main(int argc, char **argv) {
	int n, x, y; cin >> n >> x >> y;
	vector <string> board;

	for (int i = 0; i<n; i++) {
		string s; cin >> s;
		board.push_back(s);
	}
	next_move(board);
	return 0;
}