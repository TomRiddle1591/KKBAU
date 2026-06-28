package org.mycmpny.myprjct;

public class myCalc {

    public int  result;
    public int  result1;
    public double result2;
    public double result3;

    public void add(int n1, int n2){
        result = n1 + n2;
        System.out.println("Addition: " + n1 + " + " + n2 + " = " + result);
    }

    public int sub(int a, int b){
        result1 = a - b;
        return result1;
    }

    public double mult(double x, double y){
        result2 = x * y;
        return result2;
    }

    public double div(double m, double n){
        result3 = m / n;
        return result3;
    }
}
