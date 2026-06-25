/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LabTest3;

/**
 *
 * @author Joul_Jalal
 */

import java.util.ArrayList;
public class Main {
    
    public static void main(String[] args){

    ArrayList<User> Users = new ArrayList<User>();
    
    
    Users.add(new Student("Mahfuj"));
    Users.add(new Teacher("Joul Jalal"));
    Users.add(new Administrator("Mahfuz"));
    
    
    for (User u: Users){
    u.recieveNotification();
}
    
    
}
}