def solution(lottos, win_nums):
    count = 0
    ranking = {6: 1, 5: 2, 4: 3, 3: 4, 2: 5, 1: 6, 0: 6}
    for lotto in lottos:
        if lotto in win_nums:
            count += 1
    count_no_see = lottos.count(0)

    answer = []
    answer.append(ranking[count + count_no_see])
    answer.append(ranking[count])
    return answer



'''
lottos	                 win_nums	                result
[44, 1, 0, 0, 31, 25]	[31, 10, 45, 1, 6, 19]	    [3, 5]
[0, 0, 0, 0, 0, 0]	    [38, 19, 20, 40, 15, 25]	[1, 6]
[45, 4, 35, 20, 3, 9]	[20, 9, 3, 45, 4, 35]	    [1, 1]
'''