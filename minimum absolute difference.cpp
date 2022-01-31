least = max(max(arr), min(arr) * -1) * 2

arr = sorted(arr)

for i in range(0, math.ceil(len(arr) / 2)):

    f = abs(arr[i] - arr[i + 1])

    b = abs(arr[-(i + 1)] - arr[-(i + 2)])

    if (least > min(f, b)):

        least = min(f, b)

        if (least == 0):

            return 0

return least
