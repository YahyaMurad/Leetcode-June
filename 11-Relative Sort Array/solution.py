class Solution:
    def relativeSortArray(self, arr1, arr2):
        h = {num: i for i, num in enumerate(arr2)}
        arr1.sort(key=lambda x: (h.get(x, len(h)), x))
        return arr1