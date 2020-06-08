class Factorial {
    static int factorial( int n ) {
        if (n != 0) //general case
            return n * factorial(n-1);
        else //base case
            return 1;
    }
    public static void main(String[] args) {
        int number = 4, result;
        result = factorial(number);
        System.out.println(number + " factorial = " + result);
    }
}
