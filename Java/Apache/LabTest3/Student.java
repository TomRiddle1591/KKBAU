/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package LabTest3;

/**
 *
 * @author Joul_Jalal
 */
public class Student extends User{
    
    
    public Student (String name){
        super (name);
    }
    
    public void recieveNotification(){
        System.out.println("Student " + super.name + "recieved a course update.");
    }
}
