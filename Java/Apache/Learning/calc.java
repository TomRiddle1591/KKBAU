public class calc {
    
    public int result1, result2;
    
    public void add1(int n1, int n2){
        
        result1 = n1 + n2;
        System.out.println("This has no return type " + result1);
    }

    public int add2(int n3, int n4){
        
        result2 = n3 + n4;
        System.out.println("This has return type!");
        return result2;
    }
}
