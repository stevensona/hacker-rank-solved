#include <vector>
#include <list>
#include <queue>
#include <memory>
#include <sstream>
#include <iostream>
#include <algorithm>
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
					if (data[n] == t) {//found dirt
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
		return "NO DIRT"; //should never happen
	}
};

void next_move(vector <string> board) {
	auto width = board.front().size();
	auto height = board.size();
	auto count = width * height;

	string b{};
	for (auto r : board) b.append(r);
	auto pos = distance(begin(b), find(begin(b), end(b), 'b'));
	if (pos == b.length()) {
		cout << "CLEAN";
		return;
	}

	Graph g(count);
	for (auto s = 0; s < count - 1; ++s) {
		if (s % width != width - 1) g.add_edge(s, s + 1);
		if (s + width < count) g.add_edge(s, s + width);
		
	}
		
	for (auto c = 0; c < b.size(); ++c) {
		g.data[c] = b[c];
	}
	cout << g.bfs(pos, 'd');

}

int main(int argc, char **argv) {
	//istringstream cin{ "0 1 -b--d -d--d --dd- --d--	----d" };
	int pos[2];
	vector <string> board;
	cin >> pos[0] >> pos[1];
	for (int i = 0; i<5; i++) {
		string s; cin >> s;
		board.push_back(s);
	}
	next_move(board);
	return 0;
}