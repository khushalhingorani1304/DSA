#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int src, dest, weight;
};

void bellmanFord(int routers, int source, vector<Edge>& edges) {
    vector<int> distance(routers,1e9);
    distance[source] = 0;

    // Relax all edges (routers - 1) times
    for (int i = 0; i < routers - 1; i++) {
        for (const auto& edge : edges) {
            if (distance[edge.src] != 1e9 && 
                distance[edge.src] + edge.weight < distance[edge.dest]) {
                distance[edge.dest] = distance[edge.src] + edge.weight;
            }
        }
    }

    // Check for negative weight cycles
    for (const auto& edge : edges) {
        if (distance[edge.src] != 1e9 && 
            distance[edge.src] + edge.weight < distance[edge.dest]) {
            cout << "Network contains a negative weight cycle!" << endl;
            return;
        }
    }

    // Output shortest path cost from source
    cout << "Router delays from source " << source << ":\n";
    for (int i = 0; i < routers; i++) {
        cout << "Router " << i << " -> Delay: ";
        if (distance[i] == 1e9)
            cout << "Unreachable";
        else
            cout << distance[i];
        cout << endl;
    }
}

int main() {
    int routers, edgesCount, source;
    cout << "Enter the number of routers: ";
    cin >> routers;
    cout << "Enter the number of connections (edges): ";
    cin >> edgesCount;
    cout << "Enter the source router: ";
    cin >> source;

    vector<Edge> edges(edgesCount);
    cout << "Enter connections in format: Source Destination Delay\n";
    for (int i = 0; i < edgesCount; i++) {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    bellmanFord(routers, source, edges);
    return 0;
}
