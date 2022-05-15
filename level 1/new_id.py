new_id = "=.="

new_id = "".join(new_id.translate(str.maketrans('\'~!@#$%^&*()=+[{]}:?,<>/','                        ')).split()).lower()
target = []
temp = ""
for idx , char in enumerate(new_id):
    if temp == '.' and char == temp:
        continue
    else:
        target.append(char)
    temp = char
if target[0]=='.': del(target[0])
if len(target) != 0 and target[-1]=='.': del(target[-1])

if len(target) == 0: target.append("a")
if len(target) >=16: target = target[0:15]
if target[-1]=='.': del(target[-1])
if len(target) <=2 :
    for i in range(len(target),3):
        target.append(target[-1])
print( "".join(target))

