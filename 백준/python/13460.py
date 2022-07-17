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
queue.append((rx,ry,bx,by,1))
visited.append((rx,ry,bx,by))
def bfs():
    global ans, queue, visited
    while queue:
        
        rx,ry,bx,by,cnt = queue.pop(0)

        if cnt > 10:
            ans  = -1
            break     
            

        for i in range(4):

            nrx,nry = rx,ry
            rcnt, bcnt = 0 , 0
            while  table[nrx + dx[i]][nry+ dy[i]] != '#' and table[nrx][nry] != 'O':
                nrx += dx[i]
                nry += dy[i]
                rcnt += 1

            nbx,nby = bx,by
            while table[nbx + dx[i]][nby+ dy[i]] != '#' and table[nbx][nby] != 'O':
                nbx += dx[i]
                nby += dy[i]
                bcnt += 1
                

            if table[nbx][nby] != 'O':
                if table[nrx][nry] == 'O':
                    ans = cnt
                    return
                if nrx == nbx and nry == nby:
                    if rcnt < bcnt:
                        nbx -= dx[i]
                        nby -= dy[i]
                
                    else:
                        nrx -= dx[i]
                        nry -= dy[i]

                if (nrx,nry,nbx,nby) not in visited:
                    queue.append((nrx,nry,nbx,nby,cnt+1))
                    visited.append((nrx,nry,nbx,nby))
                    
    ans = -1

bfs()
print(ans)