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
a=[i for i in range(1,31)]
for i in range(28):
    a.remove(int(input()))
    
for i in a:
    print(i)

