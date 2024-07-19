class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
				return 0;
			int min=prices[0];
			int max=INT_MIN;
			int money;
			for(int i=0;i<prices.size();i++){
				money=prices[i]-min;
				if(money>max)
					max=money;
				if(prices[i]<min)
					min=prices[i];
			}
    return max;}

    };
