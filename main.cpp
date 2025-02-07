//#include <iostream>
// task 1
// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
// (Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень.)

//int power(int x, int p) {
//  int answer = 1;
//  if (p == 0){
//      answer = 1;
//  }
//  for(int i = 0; i < p; i++)
//    answer *= x;
//
//  return answer;
//}
//-------------------------------------------
// task 2 (ошибка сборки решена, но на степик не заливается. Наверное, потому что пользую динамической памятью)
//В этой задаче вам нужно реализовать функцию, которая сдвигает содержимое массива влево на заданное число позиций (циклический сдвиг).
//На вход функция принимает массив, его размер и величину сдвига.
//
//#include <iostream>
//#include <vector>
//void rotate(int a[], unsigned size, int shift)
//{
//    if (size <= 0 || shift <= 0) return;
//    shift = shift % size;
//    if (shift == 0) return;
//
//    int *temp = new int[size];
//    //std::vector<int> temp(size);
//    for(int i = 0; i < size; i++){
//        temp[i] = *(a +((i + shift)%size));
//    }
//
//    for (int i =0; i < size; i++){
//        *(a + i) = temp[i];
//    }
//    delete[] temp;
//}



int main (){
//   std::cout << power(4,4)<<std::endl; task 1
//    int mas[] = {1,2,3}; task 2
//    int size_test = 3;
//    int shift_test = 4;
//    rotate(mas,size_test,shift_test);
//    for(int j = 0;j < size_test;j++){
//        std::cout << mas[j] << " ";
//
//    }


    return 0;
}

