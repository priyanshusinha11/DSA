
class Solution {
    public int maxDivScore(int[] nums, int[] divisors) {
        
        int n=nums.length;
        int m=divisors.length;
        
        int mini=0;
        int maxi=0;
        
        for(int i=0;i<m;i++){
            
            int cnt=0;
            int divi=divisors[i];
            
            for(int j=0;j<n;j++){
                
                if(nums[j]%divi==0)
                    cnt++;
            }
            
            if(cnt>=maxi){
                if(cnt>maxi){
                    maxi=cnt;
                    mini=divi;
                }else{
                     if(mini==0){
                         
                          mini=divi;
                         maxi=cnt;
                     }                  
                    else{
                        if(divi<mini)
                            mini=divi;
                    }
                }
            }
        }
        
        return mini;
    }
}

