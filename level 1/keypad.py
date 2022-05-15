def solution(numbers, hand):
    numbers = [str(num)  for num in numbers]
    distance = [[0, 4, 3, 4, 3, 2, 3, 2, 1, 2, 1, 1], 0, [3, 1, 0, 1, 2, 1, 2, 3, 2, 3, 4, 4], 0, 0,
                [2, 2, 1, 2, 1, 0, 1, 2, 1, 2, 3, 3], 0, 0, [1, 3, 2, 3, 2, 1, 2, 1, 0, 1, 2, 2]]
    left_h = ["1","4","7"]
    right_h = ["3","6","9"]
    mid_key = ["2","5","8","0"]
    left = "10"
    right = "11"
    answer = []
    for number in numbers:
        if number in left_h:
            answer.append("L")
            left = number
        elif number in right_h:
            answer.append("R")
            right = number
        else:

            if distance[int(number)][int(left)] < distance[int(number)][int(right)]:
                answer.append("L")
                left = number
            elif distance[int(number)][int(left)] > distance[int(number)][int(right)]:
                answer.append("R")
                right = number
            else:
                if hand =="right":
                    answer.append("R")
                    right = number
                else:
                    left = number
                    answer.append("L")
    answer = "".join(answer)
    return answer

'''
numbers	                            hand     result
[1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]	"right"	"LRLLLRLLRRL"
[7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]	"left"	"LRLLRRLLLRR"
[1, 2, 3, 4, 5, 6, 7, 8, 9, 0]	    "right"	"LLRLLRLLRL"
'''





