def solution(id_list, report, k):
    id_report = {}
    id_reported = {}
    id_idx = {}
    answer = [0] * len(id_list)
    for idx, id in enumerate(id_list):
        id_report[id] = []
        id_reported[id] = 0
        id_idx[id] = idx

    report.sort()
    report_p = [id.split(" ")[0] for id in report]
    reported_p = [id.split(" ")[1] for id in report]

    reported = ""
    reporter = ""

    for i in range(len(report)):
        if report_p[i] == reporter and reported_p[i] == reported:
            continue
        id_report[report_p[i]].append(reported_p[i])
        id_reported[reported_p[i]] += 1
        reporter = report_p[i]
        reported = reported_p[i]

    for key, values in id_report.items():
        for value in values:
            if id_reported[value] >= k:
                answer[id_idx[key]] += 1

    return answer

'''
id_list                         	report                                                           	k	result
["muzi", "frodo", "apeach", "neo"]	["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"]	2	[2,1,1,0]
["con", "ryan"]	                    ["ryan con", "ryan con", "ryan con", "ryan con"]	                3	[0,0]
'''