class solution:
    def minNumber(self, nums1: List[int], nums2: List[int]) -> int:
        minimum=float('inf')
        for i in nums1:
            for j in nums2:
                if i==j and i<minimum:
                    minimum=i
                else:
                    num=int(str(i)+str(j))
                    if num<minimum and set(str(num))>=set(str(i))|set(str(j)):
                        minimum=num
    for j in nums2:
        for i in nums1:
           if i==j and j<minimum:
                    minimum=i
                else:
                    num=int(str(j)+str(i))
                    if num<minimum and set(str(num))>=set(str(j))|set(str(i)):
                        minimum=num 
    return minimum
                    
