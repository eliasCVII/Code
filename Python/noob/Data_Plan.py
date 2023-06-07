# Data Plan
monthly_mb = int(input())
n = int(input())
excess = 0
for _ in range(n):
    # Process Month
    used = int(input())
    excess = excess + monthly_mb - used
print(excess + monthly_mb)
