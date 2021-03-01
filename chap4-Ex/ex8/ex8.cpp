/* 
 * This includes ex8 and ex9
 * There is an old story that the emperor wanted to thank the inventor 
 * of the game of chess and asked the inventor to name his reward. 
 * The inventor asked for one grain of rice for the first square, 
 * 2 for the second, 4 for the third, and so on, doubling for each of the 
 * 64 squares.  

 * Write a program to calculate how many squares are required to give the 
 * inventor at least 1000 grains of rice, at least 1,000,000 grains, and 
 * at least 1,000,000,000 grains. 

 * You’ll need a loop, of course, and probably an int to keep track of 
 * which square you are at, an int to keep the number of grains on the 
 * current square, and an int to keep track of the grains on all previous 
 * squares. We suggest that you write out the value of all your variables 
 * for each iteration of the loop so that you can see what’s going on.
 */
#include<iostream>

int main(){
  int noSquares = 0;
  int noGrains = 0;
  //int n = 1000000000;
  
  std::cout << " This is using ints\nSquares\tGrains\n";

  while(noSquares != 64){
    if(noSquares == 0){
      noGrains = 1;
    } else {
      noGrains *= 2;
    }
    noSquares++;
    std::cout << noSquares << "\t" << noGrains << '\n';
  }
  
  std::cout << "This is using double\nSquares\tGrains\n";
  double noSq = 0;
  double noGr = 0;
  while(noSq != 64){
    if(noSq == 0){
      noGr = 1;
    } else {
      noGr *= 2;
    }
    noSq++;
    std::cout << noSq << "\t" << noGr << '\n';
  }
  return 0;
}
