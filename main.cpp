#include <iostream>
// task 1
// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
// (Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень.)

int power(int x, int p) {
  int answer = 1;
  if (p == 0){
      answer = 1;
  }
  for(int i = 0; i < p; i++)
    answer *= x;

  return answer;
}

int main (){
    std::cout << power(4,4)<<std::endl;
}
