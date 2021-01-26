import java.util.*; 
import java.io.*;
import java.util.regex.Pattern;
class Function {  
  String LongestWord(String sen) { 
  
    // code goes here   
    /* Note: In Java the return type of a function and the 
       parameter types being passed are defined, so this return 
       call must match the return type of the function.
       You are free to modify the return type. */
       
String newSen = Pattern.compile("[^a-z^A-Z^ ]").matcher(sen).replaceAll("");
            String[] words = newSen.split(" ");
            String longest = words[0];
            for(String s: words){
                if(s.length() > longest.length()){
                    longest = s;
                }
            }
            return  longest;
    
  } 
  
  public static void main (String[] args) {  
    // keep this function call here     
    Scanner  s = new Scanner(System.in);
    Function c = new Function();
    System.out.print(c.LongestWord(s.nextLine())); 
  }   
  
}