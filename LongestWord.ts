function LongestWord(sen) { 

  // code goes here
  let words = sen.split(' ');
  let wordMap:Array<WordMap> = [];
  let word = '';
  for(let i = 0; i < words.length; i++) {
    word = words[i].replace(/[^a-zA-Z ]/g, '');
     wordMap.push({
      'length': word.split('').length, 
      'word': words[i]
    });
  }
  
  wordMap.sort((a, b)=> {
    return b.length - a.length;
  });

  // console.log(wordMap);

  return wordMap[0].word; 

}
class WordMap {
  length: number;
  word: string;
}
   
// keep this function call here 
// @ts-ignore
console.log(LongestWord(readline()));