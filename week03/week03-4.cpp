# LeetCode 3005 珼驹矗,寥10刽
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 #参璸计瞷Ω计,计Τ1...100, 皚璶秨101
        best = 0 #程计,瞷碭Ω㎡?
        for num in nums: #癹伴,皐癸–计暗矪柑
            T[num] += 1 #硂计num眔瞷Ω计+1
            if T[num] > best: best = T[num] #程瞷T参璸计 琌ぶ
        #硂柑, T碞Τ场计瞷Ω计
        #р程常癬ㄓ
        total= 0
        for t in T: #皐癸参璸挡狦T柑计t
            if t==best: total +=t
        return total
