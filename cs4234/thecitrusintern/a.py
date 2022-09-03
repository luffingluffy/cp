import math
import array

MAX_VAL = math.inf


def dp(current):
    if len(subordinates[current]) == 0:
        minBribe[current] = cost[current]
        minNotBribe[current] = 0
        minNotBribeCovered = cost[current]
        return

    minBribe[current] = cost[current]
    for subordinate in subordinates[current]:
        if minNotBribe[subordinate] == -1:
            dp(subordinate)
        minBribe[subordinate] += minNotBribe[subordinate]

    minNotBribe[current] = 0
    for subordinate in subordinates[current]:
        if minBribe[subordinate] == -1 or minNotBribeCovered[subordinate] == -1:
            dp(subordinate)
        minNotBribe[subordinate] += min(minBribe[subordinate],
                                        minNotBribeCovered[subordinate])

    minNotBribeCovered[current] = MAX_VAL
    for subordinate in subordinates[current]:
        currentCost = minNotBribe[subordinate] - \
            min(minBribe[subordinate], minNotBribeCovered[subordinate])
        currentCost += minNotBribe[subordinate]
        minNotBribeCovered[subordinate] = min(currentCost, minNotBribeCovered)


# N = int(input())
# cost = array.array([0 for i in range(100005)])
# degree = array.array([0 for i in range(100005)])
# subordinates = array.array([[0 for j in range(100005)] for i in range(100005)])

# for i in range(0, N):
#     subInput = []
#     temp = input().split()
#     for t in temp:
#         subInput.append(int(t))
#     cost[i] = subInput[0]
#     U = subInput[1]
#     for j in range(0, U):
#         degree[j + 2] += 1
#         subordinates[i].append(j + 2)

# for i in range(0, N):
#     if degree[i] == 0:
#         root = i

# minBribe = [-1 for i in range(100005)]
# minNotBribe = [-1 for i in range(100005)]
# minNotBribeCovered = [-1 for i in range(100005)]

# dp(root)

# print(min(minBribe[root], minNotBribeCovered[root]))
