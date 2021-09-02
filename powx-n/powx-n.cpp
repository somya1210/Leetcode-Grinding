class Solution {
public:
   double qexp(double a, long long b)
    {
        double res = 1.0;
        while (b)
        {
            if (b & 1)
                res = res * a;
            a = a * a;
            b >>= 1;
        }
        return res;
    }
    double myPow(double x, int n)
    {
        long long newPower = n;
        if (n < 0)
            return (double)1.0 / qexp(x, abs(newPower));
        return qexp(x, newPower);
    }
};