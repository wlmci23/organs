"""
The following code compares s1 and s2 and counts how many times
a character from s1 has to be removed or replaced and how many times
a new character has to be added to s1, for the two string to be equal.
"""

def edit_dist(s1, s2):
    m = []
    for i in range(0, len(s1)+1):
        m.append([])
        for j in range(0, len(s2)+1):
            m[-1].append(None)
    for i in range(0, len(s1)+1):
        m[i][0] = i
    for i in range(0, len(s2)+1):
        m[0][i] = i

    for i in range(1, len(s1)+1):
        for j in range(1, len(s2)+1):
            if s1[i-1] == s2[j-1]:
                replace_cost = m[i-1][j-1]
            else:
                replace_cost = m[i-1][j-1] + 1

            insert_cost = m[i-1][j] + 1
            remove_cost = m[i][j-1] + 1

            m[i][j] = min(replace_cost, insert_cost, remove_cost)

    return m[-1][-1]
