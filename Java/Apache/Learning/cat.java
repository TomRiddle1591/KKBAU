public class cat {
    
    
    public String color;
    public String action;
    
    public void changeAction(String action){
        
        this.action = action;
    }
    
    public void deets(){
        
        System.out.println("Cat is " + action + ". Cat is " + color);
    }
    
}
