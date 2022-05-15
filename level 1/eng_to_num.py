def solution(s):
    answer = []
    word = []
    words = ["zero","one","two","three","four","five","six","seven","eight","nine"]
    for element in s:
        if element.isdigit():
            answer.append(str(element))
        else:
            word.append(element)
            temp = "".join(word)
            if temp in words:
                answer.append(str(words.index(temp)))
                word = []
    answer = int("".join(answer))
    return answer

'''
s	                result
"one4seveneight"	1478
"23four5six7"	    234567
"2three45sixseven"	234567
"123"	            123
'''