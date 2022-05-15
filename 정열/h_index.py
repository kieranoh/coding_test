#어떤 과학자가 발표한 논문의 인용 횟수를 담은 배열 citations가 매개변수로 주어질 때, 이 과학자의 H-Index를 return 하도록 solution 함수를 작성해주세요.

#제한사항
#과학자가 발표한 논문의 수는 1편 이상 1,000편 이하입니다.
#논문별 인용 횟수는 0회 이상 10,000회 이하입니다.
#입출력 예
#citations	return
#[3, 0, 6, 1, 5]	3
#입출력 예 설명
#이 과학자가 발표한 논문의 수는 5편이고, 그중 3편의 논문은 3회 이상 인용되었습니다. 그리고 나머지 2편의 논문은 3회 이하 인용되었기 때문에 이 과학자의 H-Index는 3입니다.

#※ 공지 - 2019년 2월 28일 테스트 케이스가 추가되었습니다.
#https://programmers.co.kr/learn/courses/30/lessons/42747/solution_groups?language=python3
def count(i,list):
    count = 0
    for k in range(len(list)):
        if list[k]>=i:
            count=count+1
    if i <=count:
        return True
    else:
        return False
def solution(citations):
    answer = 0
    for i in range(len(citations)+1):
        if count(i,citations)==True:
            answer = i
    return answer
