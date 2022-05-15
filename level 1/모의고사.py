#정수 배열 numbers가 주어집니다. numbers에서 서로 다른 인덱스에 있는 두 개의 수를 뽑아 더해서 만들 수 있는 모든 수를 배열에 오름차순으로 담아 return 하도록 solution 함수를 완성해주세요.

#제한사항
#numbers의 길이는 2 이상 100 이하입니다.
#numbers의 모든 수는 0 이상 100 이하입니다.
#입출력 예
#numbers	result
#[2,1,3,4,1]	[2,3,4,5,6,7]
#[5,0,2,7]	[2,5,7,9,12]
def solution(answers):
    pattern1= [ 1,2,3,4,5]
    pattern2=[2,1,2,3,2,4,2,5]
    pattern3=[3,3,1,1,2,2,4,4,5,5]
    score=[0,0,0]
    result = []

    for idx, answer in enumerate(answers):
        if answer == pattern1[idx%len(pattern1)]:
            score[0]+=1
        if answer== pattern2[idx%len(pattern2)]:
            score[1]+=1
        if answer==pattern3[idx%len(pattern3)]:
            score[2]+=1

    for idx ,s in enumerate(score):
        if s == max(score):
            result.append(idx+1)

    return result
