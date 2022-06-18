n,m = map(int,input().split())
table = []
for i in range(n):
    table.append(list(input().strip()))

    for j in range(m):
        if table[i][j] == 'R':
            rx, ry = i, j
        if table[i][j] =='B':
            bx,by = i,j

dx = [-1,1,0,0]
dy = [0,0,1,-1]
queue = []
visited = []
ans = -1
queue.append((rx,ry,bx,by,0))
visited.append((rx,ry,bx,by))
def bfs():
    global queue, visited, ans
    while queue:
        
        rx,ry,bx,by,cnt = queue.pop(0)

        if cnt == 10:
            ans = -1
            return      
            

        for i in range(4):
            nrx,nry = rx,ry

            while True:
                nrx += dx[i]
                nry += dy[i]

                if table[nrx][nry] == '#':
                    nrx -= dx[i]
                    nry -= dy[i]
                    break

                if table[nrx][nry] == 'O':
                    break

            nbx,nby = bx,by

            while True:
                nbx += dx[i]
                nby += dy[i]
                if table[nbx][nby] == '#':
                    nbx -= dx[i]
                    nby -= dy[i]
                    break

                if table[nbx][nby] == 'O':
                    break
            if table[nbx][nby] != 'O':
                if table[nrx][nry] == 'O':
                    ans = cnt
                    return
                if nrx == nbx and nry == nby:
                    if abs(nrx-rx) + abs(nry - ry) > abs(nbx - bx) + abs(nby - by):
                        nbx -= dx[i]
                        nby -= dy[i]
                
                    else:
                        nrx -= dx[i]
                        nby -= dy[i]

            if (nrx,nry,nbx,nby) not in visited:
                queue.append((nrx,nry,nbx,nby,cnt+1))
                visited.append((nrx,nry,nbx,nby))

bfs()
print(ans)
