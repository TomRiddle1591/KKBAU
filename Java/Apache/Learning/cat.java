public class cat {

  public String color;
  public String action;

  public void changeAction(String act){

    action = act;
  }

  public void deets(){

    System.out.println("Cat is " + action + ". Cat is " + color);
  }
}
