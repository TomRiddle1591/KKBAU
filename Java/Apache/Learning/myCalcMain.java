package org.mycmpny.myprjct;

public class myCalcMain {

    public static void main(String[] args){


        myCalc calc = new myCalc();
        System.out.println("Two Integer Numbers r Given");

        calc.add(12, 45);
        System.out.println("Subtraction: 20 - 12 = " + calc.sub(20, 12));
        System.out.println("Multiplication: 21.2 * 22.9 = " + calc.mult(21.2, 22.9));
        System.out.println("Division: 45.1 / 22.9 = " + calc.div(45.1, 22.9));
    }
}
