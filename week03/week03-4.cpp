# LeetCode 3005 �D�Դ�,��10����
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 #�έp�Ʀr�X�{����,�]�Ʀr��1...100, �}�C�n�}101��
        best = 0 #�̦h���Ʀr,�X�{�X���O?
        for num in nums: #�j��,�w��C�ӼƦr���B��
            T[num] += 1 #�o�ӼƦrnum�o�X�{����+1
            if T[num] > best: best = T[num] #�̦h�X�{��T�έp�Ʀr �O�h��
        #��o��, T�N���������Ʀr���X�{����
        #��̦h�����[�_��
        total= 0
        for t in T: #�w��έp���GT�̭����Ʀrt
            if t==best: total +=t
        return total
