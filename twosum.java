class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Create a HashMap to store the numbers and their indices
        HashMap<Integer,Integer> hm  = new HashMap<>();
        
        // Loop through the array 'nums' and populate the HashMap
        for(int i=0;i<nums.length;i++){
            hm.put(nums[i],i); // Key: number, Value: index
        }
        
        // Loop through the array 'nums' again to find the complementary pair
        for (int i = 0; i < nums.length; i++) {
            // Calculate the complement needed to reach the target sum
            int complement = target - nums[i];
            
            // Check if the complement exists in the HashMap and ensure it's not the same element
            if (hm.containsKey(complement) && hm.get(complement) != i) {
                // If found, return the indices of the current element and its complement
                return new int[]{hm.get(complement), i};
            }
            
            // Update the HashMap with the current number and its index
            hm.put(nums[i], i);
        }
        
        // If no such pair is found, return null
        return null; 
    }
}
