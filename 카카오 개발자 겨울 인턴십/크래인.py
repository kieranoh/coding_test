#카카오 테스트 level 1
def solution(board, moves):
    result=[]
    answer = 0
    for i in range(len(moves)):
        for k in range(len(board)):
            if board[k] [moves[i]-1]!=0:
                if len(result)==0:
                    result.append(board[k][moves[i]-1])
                    count = 1
                    board[k][moves[i]-1] = 0
                else:
                    if result[count-1]==board[k][moves[i]-1]:
                        count = count -1
                        answer=answer+1
                        del result[-1]
                        board[k][moves[i]-1] = 0
                    else:
                        result.append(board[k][moves[i]-1])
                        count = count+1
                        board[k][moves[i]-1] = 0
                break
    return answer
a=[[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
b=[1,5,3,5,1,2,1,4]
c=4
print(solution(a,b))
