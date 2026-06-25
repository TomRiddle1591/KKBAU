/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LabTest3;

/**
 *
 * @author Joul_Jalal
 */
public class User {
    protected String name;
    
    
    public User (String name){
    this.name = name;
    }
    
    public void recieveNotification(){
        System.out.println(name);
    }
}
