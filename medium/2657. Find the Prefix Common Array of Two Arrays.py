class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        fre = [0] * (len(A)+1)
        count = 0
        ans = []
        for i in range(len(A)):
            fre[A[i]] += 1
            if fre[A[i]] == 2:
                count += 1
            fre[B[i]] += 1
            if fre[B[i]] == 2:
                count+= 1
            ans.append(count)
        return ans
