import heapq

class Solution:
    def findMaximizedCapital(self, k, w, profits, capital):
        projects = [(capital[i], profits[i]) for i in range(len(profits))]
        projects.sort()
        heap = []

        i = 0
        for _ in range(k):
            while i < len(profits) and projects[i][0] <= w:
                heapq.heappush(heap, -projects[i][1])
                i += 1
            if not heap:
                break
            w -= heapq.heappop(heap)

        return w