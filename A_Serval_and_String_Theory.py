def can_make_universal(s, k):
    rev_s = s[::-1]
    if s < rev_s:
        return "YES"

    if k == 0:
        return "NO"
    
    n = len(s)

    if n == 1:
        return "NO"
    
    if s == rev_s:
        for i in range(n):
            for j in range(i + 1, n):
                if s[i] != s[j]:
                    new_s = list(s)
                    new_s[i], new_s[j] = new_s[j], new_s[i]
                    new_s = ''.join(new_s)
                    if new_s < new_s[::-1]:
                        return "YES"
        return "YES" if k >= 2 else "NO"

    first_diff = 0
    while first_diff < n and s[first_diff] == rev_s[first_diff]:
        first_diff += 1
    
    for j in range(first_diff + 1, n):
        if s[j] < rev_s[first_diff]:
            return "YES"
    return "YES" if k >= 2 else "NO"

def process_test_cases():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    results = []
    for _ in range(t):
        n = int(data[index])
        k = int(data[index + 1])
        s = data[index + 2]
        index += 3
        results.append(can_make_universal(s, k))
    
    return results

def main():
    results = process_test_cases()
    for result in results:
        print(result)

if __name__ == "__main__":
    main()