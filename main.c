bool isPalindrome(int x) {
        
            if(x < 0)
                return false;
            if(x==0)
                return true;
            int m=x;
            long int sum = 0;

            while (x > 0) {
                int t = x % 10;
                sum = sum*10 + t;
                x = x / 10;
            }
            if(sum == m){
                return true;
            }
            else
                return false;
  }
