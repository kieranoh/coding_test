N,M = map(int,input().split())
table = []
for _ in range(N):
    table.append(list(map(int,input().split())))
time_init = 1
day_init = 1
dx = [1,-1,0,0]
dy = [0,0,1,-1]

def bfs():
    global ans
    sun_init = 0
    q= []
    visited=[]
    q.append([0,0,time_init,day_init,sun_init])
    visited.append([0,0,time_init,sun_init])
    ans = "-1"
    while q:
        
        x_pos,y_pos ,time,day,sun= q.pop(0)
        if sun==0 and time > M:
            sun = 1
            time -= M
        elif sun == 1 and time > M:
            sun = 0
            time -= M
            day += 1
        if x_pos == N-1 and y_pos == N-1:
            if sun==0:
                ans = str(day) + " sun"
            else:
                ans = str(day) + " moon"
            return
        if sun == 0:
            for i in range(4):
                t_x,t_y = x_pos + dx[i],y_pos+dy[i]
                if t_x < 0 or t_y < 0 or t_x >= N or t_y >= N:
                    continue
                if table[t_x][t_y] == 1:
                    continue

                if [t_x,t_y,time+1,sun] not in visited:
                    q.append([t_x,t_y,time+1,day,sun])
                    visited.append([t_x,t_y,time+1,sun])
            

        
        if sun == 1:
            for i in range(4):
                t_x,t_y = x_pos + dx[i],y_pos+dy[i]
                if t_x < 0 or t_y < 0 or t_x >= N or t_y >= N:
                    continue
                if table[t_x][t_y] == 1:
                    while (t_x >= 0 and t_x < N and t_y >= 0 and t_y < N) and table[t_x][t_y] != 0:
                        t_x,t_y = t_x + dx[i],t_y+dy[i]
                    if t_x < 0 or t_y < 0 or t_x >= N or t_y >= N:
                        continue
                if [t_x,t_y,time+1,sun] not in visited:
                    q.append([t_x,t_y,time+1,day,sun])
                    visited.append([t_x,t_y,time+1,sun])    
         
bfs()
print(ans)
'''
5 2
0 0 0 0 0
0 0 1 1 1
0 0 1 1 1
0 0 1 1 1
0 0 1 1 0
'''