# Dijkstra Traverse (India-Based)

## Overview

* This project implements a travel route using **Dijkstra’s Algorithm** to compute the shortest path between cities. The system models cities as nodes and routes as weighted edges, where weights represent distance or time.

* The dataset has been customized to include Indian cities such as **Delhi, Lucknow, Prayagraj, Varanasi, Mumbai, and others** to simulate real-world routing scenarios.

---

## Key Features

* Shortest path calculation using **Dijkstra’s Algorithm**
* Graph-based representation of cities and routes
* Supports distance/time-based routing
* Custom dataset with Indian cities
* Efficient path computation using priority queue logic

---

## Tech Stack

* Language: **C++**
* Concepts: Graphs, Dijkstra Algorithm, Priority Queue, Header Files
* Data Handling: CSV files

---

## How It Works

1. Cities are loaded from `cities.csv`
2. Routes are loaded from `routes.csv`
3. A graph is constructed using adjacency lists
4. Dijkstra’s Algorithm is applied to compute the shortest path
5. The optimal route and cost are displayed

---

## Sample Input

Source: Delhi
Destination: Varanasi

## Sample Output

**Shortest Path:** *Delhi → Lucknow → Prayagraj → Varanasi*
**Total Distance:** *870*

---

## How to Run

```bash
g++ Main.cpp -o run
run
```

---

## Concepts Covered

* Graph Representation (Adjacency List)
* Dijkstra’s Shortest Path Algorithm
* Greedy Strategy
* **Time Complexity:** *O((V + E) log V)*

---

## Author

Vaibhav Pandey
Computer Science Engineering Student
