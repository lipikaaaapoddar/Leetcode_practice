class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        start =0 
        end = len(numbers)-1

        while start < end:
            sum_n = numbers[start] + numbers[end]
            if sum_n == target :
                return [start+1 , end+1]
            elif sum_n > target :
                end -=1
            else :
                start +=1
        
        return []