
from random import randrange
import os


print ("works")
for i in range(1):
    a = randrange(
        41720394871239048723902347832412312312312312156236463263462543)
    b = randrange(4172039487123904872390234783241231231312312313)
    # print(a+b)

    if a < b:
        a, b = b, a
# +" > test.txt"
    os.system("./a.out "+str(a)+ " "+str(b))
#     c = a + b
#     f = open("../test.txt", "r")
#     if c != int(f.read()):
#         print("error")
#         print("a: "+str(a))
#         print("b: "+str(b))
#         exit()
#     else:
#         print("Ok")
#     f.close()
