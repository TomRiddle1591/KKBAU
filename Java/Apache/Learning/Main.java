public class Main {
    
    public static void main (String[] args)
    {
    Student s1 = new Student();
    Student s2 = new Student();
    Student s3 = new Student();
    
    //class & object
    s1.name = "Joul Jalal";
    s2.id = "10";
    s3.Uni = "KKBAU";
    
    System.out.println("#########This part is Class & Object#########");
    System.out.println(s1.name);
    System.out.println(s2.id);
    System.out.println(s3.Uni);
    System.out.print("\n");

    //method
    
    System.out.println("#########This part is Method!##########");
    s2.Info("Mahfuz", 29, "NSU");
    
    }
}
