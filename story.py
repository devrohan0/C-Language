# import re
# with open('story.txt','r') as f:
#     story=f.read()
# keyword=input("Enter keyword ")

# if re.search(keyword,story):
#     print("Entered keyword is found ")

# else:
#     print("Entered keyword is not found ")

import re 
file1=open('story.txt','r')
story=file1.read()
keyword=input("Enter Keyword ")
if re.search(keyword, story):
    print("Entered keyword is found")

else:
    print("Entered keyword is not found")

