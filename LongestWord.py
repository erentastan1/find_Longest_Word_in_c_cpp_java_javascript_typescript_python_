import re
pattern = re.compile(r'\W+')
def LongestWord(sen): 
    x = pattern.split(sen)
    return max(x, key=len)
    
# keep this function call here  
print(LongestWord(input()))

---------------------------------------------------------
4) C# çözümü:
using System;
using System.Text.RegularExpressions;
using System.Linq;

class MainClass {
  public static string LongestWord(string sen) { 
      
            Regex rgx = new Regex(@"[^\w\s]");
            sen = rgx.Replace(sen,"");
            string[] words = sen.Split(' ');

            return words.OrderByDescending(x => x.Length).First();
            
  }

  static void Main() {  
    // keep this function call here
    Console.WriteLine(LongestWord(Console.ReadLine()));
  } 
   
}
