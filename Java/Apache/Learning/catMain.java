public class catMain {

  public static void main(String[] args)
  {

    cat c1 = new cat();
    cat c2 = new cat();

    c1.color = "White";
    c1.action = "running";


    c2.color = "Orange";
    c2.action = "Sleeping";

    c1.changeAction("Sitting");

    c1.deets();
    c2.deets();
  }
}
