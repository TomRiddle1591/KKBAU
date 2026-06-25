/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LabTest3;

/**
 *
 * @author Joul_Jalal
 */
public class Teacher extends User{
    public Teacher (String name){
        super (name);
    }
    
    public void recieveNotification(){
        
        System.out.println("Teacher " + super.name + "recieved a faculty meeting notice.");
    }
}
