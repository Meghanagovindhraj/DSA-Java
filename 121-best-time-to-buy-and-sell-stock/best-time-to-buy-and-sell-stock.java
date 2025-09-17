class Solution {
    public int maxProfit(int[] prices) {
        int buysell = Integer.MAX_VALUE;
        int maxProfit = 0;

        for(int i = 0; i<prices.length; i++){
            if(buysell<prices[i]){
                int profit = prices[i]-buysell;
                maxProfit = Math.max(maxProfit,profit);
            }else{
                buysell = prices[i];
            }
        }
        return maxProfit;
    }
}