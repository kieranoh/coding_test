participant = ["mislav", "stanko", "mislav", "ana"]
completion = ["stanko", "ana", "mislav"]
def solution(participant,completion):
    participant.sort()
    completion.sort()
    for idx, runner in enumerate(completion):
        if runner != participant[idx]:
            return participant[idx]
    return participant[-1]


'''
def solution (particiapnt, completion)
    for finish in completion:
        del participant[participant.index(finish)]
    return participant[0]
    
    0 point for efficiency
'''


