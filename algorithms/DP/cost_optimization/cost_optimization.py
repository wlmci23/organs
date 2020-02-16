import copy

MAX_DP = 100

MAX_DP += 1

items = {}
"""
The input of this DP program should be a dictionary containing a tuple (a, b) at key N,
where N is an item that when b is spent, a can be profited.

The output of this DP program is an array where ith index contains the most optimal arragement of items available
to get the maximum possible profit with budget i.

Note that here we assume there are infinite number of items available.

Example:
items = {'a': [10, 5], 'b': [4, 6], 'c': [100, 10]}

In this case, the item 'a' costs 5 and gives off a profit of 10, 'b' costs 6 and gives off a profit of 4, and 'c' costs 10 and gives off a profit of 100.
"""

dp = [[[], 0] for i in range(0, MAX_DP)]

for i in items:
    dp[items[i][1]] = [[i], items[i][0]]

for i in range(0, MAX_DP):
    possibilities = [copy.deepcopy(dp[i])]
    for item in items:
        if i-items[item][1] <= 0:
            continue
        prev_item = copy.deepcopy(dp[i-items[item][1]])
        prev_item[0].append(item)
        prev_item[1] += items[item][0]
        possibilities.append(prev_item)
    if len(possibilities) == 0:
        continue
    possibilities.sort(key=lambda x:x[1])
    dp[i] = possibilities[-1]
