public class cat {
    public static void main(String[] arg) {
        String name = "Jul Jalal";
        int age = 25;
        double gpa = 3.5;
        char gndr = 'M';
        boolean student = false;

        System.out.println("My name is "+name);
        System.out.println("My age is "+age);
        System.out.println("My GPA = "+gpa);
        System.out.println("I'm a "+gndr+"ale.");
        if (student) {
            System.out.println("I'm a Student");
        }else{
            System.out.println("I'm not a student anymore!");
        }
    }
}