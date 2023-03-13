# #using tell() method
# # file1=open("xyz.txt","r")
# # str1=file1.read(10)
# # print(str1)
# # str2=file1.tell()
# # file1.seek(10,0)


# #using strip() method

# # list1=["rohan\n","2506\n","1234567890\n"]
# # fptr=open("xyz.txt","w")
# # fptr.writelines(list1)
# # fptr.close()

# # fptr=open("xyz.txt","r")
# # ctr=0
# # for line in fptr:
# #     ctr+=1
# #     print("{0} {1}".format(ctr,line.strip()))


# #try block and except block

# # try:
# #     even=[2,4,6,8]
# #     a=even[2]
# #     print(a)
# #     x=5
# #     c=10/x
# #     print(c)
# # except ZeroDivisionError:
# #     print("Zero can not be in denominator")
# # except IndexError:
# #     print("index value do not match")

# a=[10,20]
# b=a
# b+=[30,40]
# print(a)


# try except block
# try:
#     x=int(input("enter number :"))
#     assert x % 2 ==0
# except:
#     print("odd number entered")

# else:
#     a=1/x
#     print("the inverse of number =",a)


# Meta character in regular expression

import re
givenstr="Learning regular expression in python environment"
found=re.findall("Learning",givenstr)
if found:
    print("The given content start with the word Learning")
else:
    print("Do not start with the assignment")