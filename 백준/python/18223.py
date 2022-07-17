from heapq import *
def dks(start):
    distance[start] = 0
    q= []
    heappush(q,[0,start])
    while q:
        dis, now = heappop(q)
        if distance[now] < dis:
            continue
        for note in graph[now]:
            cost = note[1] + dis
            if distance[note[0]] > cost:
                distance[note[0]] = cost
                parent[note[0]] = [now]
                heappush(q,[cost,note[0]])
            elif distance[note[0]] == cost:
                parent[note[0]].append(now)
                heappush(q,[cost,note[0]])

def find(note):
    if note == p:
        return True
    for i in parent[note]:
        if find(i):
            return True
v,e,p = map(int,input().split())
graph = [[]for _ in range(v+1)]
for _ in range(e):
    a,b,c = map(int,input().split())
    graph[a].append([b,c])
    graph[b].append([a,c])
INF = 999999
distance = [INF for _ in range(v+1)]
parent = [[] for _ in range(v+1)]
dks(1)
if find(v):
    print("SAVE HIM")
else:
    print("GOOD BYE")