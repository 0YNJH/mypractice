# baekjoon 10807
# n=int(input())
# lis = list(map(int,input().split()))
# v=int(input())
# print(lis.count(v))

# baekjoon 10871
# n,x=map(int,input().split())
# a=list(map(int,input().split()))
# for i in a:
#     if  (i<x): print("%d"%i,end=" ")

# baekjoon 10818
# n=int(input())
# n_list=list(map(int,input().split()))
# print(min(n_list),max(n_list))

# baekjoon 2562
# n=[]
# for i in range(9):
#     n.append(int(input()))
    
# print(max(n),n.index(max(n))+1,sep="\n")

#baekjoon 5597
# a=[i for i in range(1,31)]
# for i in range(28):
#     a.remove(int(input()))
    
# for i in a:
#     print(i)

#baekjoon 3052
# n=[]
# for i in range(10):
#     a=int(input())
#     b=a%42
#     n.append(b)
# s= set(n)
# print(len(s))

# baekjoon 1546
# cnt=int(input())
# num=list(map(int,input().split()))
# sum=0
# for i in num:
#     sum +=(i/max(num)*100)
# print(sum/cnt)

# baekjoon 8958
# n=int(input())
# for i in range(n):
#     ox=input()
#     cnt=0
#     score=0
#     for i in range(len(ox)):
#         if(ox[i]=='O'):
#             cnt+=1
#             score+=cnt
#         else:
#             cnt=0
#     print(score)

# baekjoon 4344
# c=int(input())
# final_values=[]
# for i in range(c):
#     scores=list(map(int,input().split()))
#     n=scores[0]
#     scores.pop(0)
#     scores_average=sum(scores)/len(scores)
#     middle_value=[]
#     for i in range(n):
#         if scores[i] > scores_average:
#             middle_value.append(scores[i])
#     final_value=len(middle_value)*100/len(scores)
#     final_values.append(final_value)
# for i in range(c):
#     print("{:0.3f}%".format(final_values[i]))

# baekjoon 1157

