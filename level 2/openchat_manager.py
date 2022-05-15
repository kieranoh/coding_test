records = ["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Muzi",
           "Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]

def solution(record):
    result = []
    info = {}
    for r in record:
        r = r.split()
        if r[0] == "Enter":
            result.append([r[1], "님이 들어왔습니다."])
            info[r[1]] = r[2]
        elif r[0] == "Leave":
            result.append([r[1], "님이 나갔습니다."])
        else:
            info[r[1]] = r[2]
    result = list(map(lambda x : info[x[0]]+x[1], result))
    return result