#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

//константы
static int num = 1;
const int max = 2147483647;
const int min = -2147483648;

//интерфейс для ввода числа
void interface_input() {
    printf("\n");
    printf("================\n");
    printf("Enter the number\n");
}
//длина целого числа
int int_len(int input) {
    int len = 0;
    if (input == 0) {
        return 1;
    }
    while (input > 0) {
        input /= 10;
        len ++;
    }
    return len;
}
//определение номера операции в зависимости от ввода
int num_menu_func() { 
    int input = getch();
    while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input != '9' && input != '0' && input != 27 && input != 8 && input != 13 && input != 80 && input != 72) {
    input = getch();
    }
    if (input == '1') {
        num = 1;
        return num;
    } else if (input == '2') {
        num = 2;
        return num;
    } else if (input == '3') {
        num = 3;
        return num;
    } else if (input == '4') {
        num = 4;
        return num;
    } else if (input == '5') {
        num = 5;
        return num;
    } else if (input == '6') {
        num = 6;
        return num;
    } else if (input == '7') {
        num = 7;
        return num;
    } else if (input == '8') {
        num = 8;
        return num;
    } else if (input == '9') {
        num = 9;
        return num;
    } else if (input == '0') {
        num = 0;
        return num;
    //escape
    } else if (input == 27) {
        return 10;
    //backspace
    } else if (input == 8) {
        return 11;
    //enter
    } else if (input == 13) {
        return 12;
    //стрелка вниз
    } else if (input == 80) {
        num += 1;
        if (num > 9) {
            num = 1;
        }
        return num;
    //стрелка вниз
    } else if (input == 72) {
        num -= 1;
        if (num < 1) {
            num = 9;
        }
        return num;
    } 
}
//посимвольный ввод
int var_func() {
    int input = 228;
    while (input != '1' && input != '2' && input != '3' && input != '4' && input != '5' && input != '6' && input != '7' && input != '8' && input != '9' && input != '0' && input != 27 && input != 8 && input != 13) {
    input = getch();
    }
    if (input == '1') {
        return 1;
    } else if (input == '2') {
        return 2;
    } else if (input == '3') {
        return 3;
    } else if (input == '4') {
        return 4;
    } else if (input == '5') {
        return 5;
    } else if (input == '6') {
        return 6;
    } else if (input == '7') {
        return 7;
    } else if (input == '8') {
        return 8;
    } else if (input == '9') {
        return 9;
    } else if (input == '0') {
        return 0;
    //escape
    } else if (input == 27) {
        return 10;
    //backspace
    } else if (input == 8) {
        return 11;
    //enter
    } else if (input == 13) {
        return 12;
    }
}
//интерфейс подтверждения
void confirm() {
    int key = 0;
    printf("==================================\n");
    printf("Please, press Enter to continue...");
    while (key != 12) {
        key = var_func();
    }
    system("cls");
}
//экран ошибки
void error_screen() {
    system("cls");
    printf("==============================\n");
    printf("Error: Retry with other values\n");
    confirm();
}
//функция ввода
int input_func() {
    system("cls");
    int key = 0, exit = 0;
    int full_var = 0;
    int len = int_len(full_var);
    while (len < 9) {
        interface_input();
        int key = var_func();
        
        //РЕЗУЛЬТАТ = СУММА ВСЕХ ПРЕДЫДУЩИХ ЧИСЕЛ    
        if (key == 1) {
        int add = 1;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 2) {
        int add = 2;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 3) {
        int add = 3;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 4) {
        int add = 4;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 5) {
        int add = 5;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 6) {
        int add = 6;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 7) {
        int add = 7;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 8) {
        int add = 8;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 9) {
        int add = 9;
        full_var = full_var * 10 + add;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 11) {
        full_var = full_var / 10;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);

        } else if (key == 0) {
        full_var = full_var * 10;
        len = int_len(full_var);
        system("cls");
        printf("%d", full_var);
        
        } else if (key == 12) {
            break;
        }

        if (len == 9) {
            interface_input();
            int key_2 = 0;
            while (key_2 != 11 && key_2 != 12) {
                key_2 = var_func();
            }
            if (key_2 == 11) {
                full_var = full_var / 10;
                len = int_len(full_var);
                system("cls");
                printf("%d", full_var);
            } else if (key_2 == 12) {
                break;
            }
        }


        
    }
return full_var; 
}    
//справка
void help_menu() {
        system("cls");
        printf("Welcome to trash-calculator v.2!!!\n");
        printf("==================================\n");
        printf("In order to start working you should follow the instructions below:\n");
        printf("1 - Enter the first value\n"); 
        printf("2 - Choose if it is negative/positive\n");
        printf("3 - Repeat the same algorithm with the second value\n");
        printf("4 - Choose one of the operations to proceed\n");
        printf("5 - Check the answer\n");
        confirm();
        }
//определение знака
int sign_func() {
    int sign = 0, input;
    printf("==================================\n");
    printf("Is the number positive or negative?\n");
    printf("1 - Positive, 2 - Negative\n");
    printf("==================================\n");
    while (abs(sign) != 1) {
        int input = getch();
        if (input == '1') { //ПОЛОЖИТЕЛЬНОЕ
            sign = 1;
            return sign;
        } else if (input == '2') { //ОТРИЦАТЕЛЬНОЕ
            sign = -1; 
            return sign;
    }
    }
}
//статическая часть интерфейса
void interface_static(int var_1, int var_2) {
    printf("=========================================================\n");
    printf("A = %d  B = %d", var_1, var_2);
    printf("\n=========================================================\n");
}
//часть интерфейса со стрелками
int interface_main_pointers(int num) {
    if (num == 1) {
        printf("1) Enter the first number <--\n");
    } else {
        printf("1) Enter the first number\n");
    }
    if (num == 2) {
        printf("2) Enter the second number <--\n");
    } else {
        printf("2) Enter the second number\n");
    }
    if (num == 3) {
        printf("3) Addition (A + B) <--\n");
    } else {
        printf("3) Addition (A + B)\n");
    }
    if (num == 4) {
        printf("4) Subtraction (A - B) <--\n");
    } else {
        printf("4) Subtraction (A - B)\n");
    }
    if (num == 5) {
        printf("5) Multiplication (A * B) <--\n");
    } else {
        printf("5) Multiplication (A * B)\n");
    }
    if (num == 6) {
        printf("6) Division (A / B) <--\n");
    }  else {
        printf("6) Division (A / B)\n");
    }
    if (num == 7) {
        printf("7) Exponentiation (A ^ B) <--\n");
    } else {
        printf("7) Exponentiation (A ^ B)\n");
    }
    if (num == 8) {
        printf("8) Root of N calculation <--\n");
    } else {
        printf("8) Root of N calculation\n");
    }
    if (num == 9) {
        printf("9) Help <--\n");
    } else {
        printf("9) Help\n");
    }
    if (num != 10) {
        printf("=========================================================\n");
        printf("Escape - Quit\n");
        printf("Enter - Confirm operation\n");
        printf("=========================================================\n");
    }
}
//вывод полного интерфейса
int full_interface(int num, int var_1, int var_2){
    system("cls");
    interface_static(var_1, var_2);
    interface_main_pointers(num);
}
//функуия полного ввода числа
int get_input(int input) {
    input = input_func();
    if (input == 0) {
        system("cls");
    } else {
    int sign = sign_func();
    input = input * sign;
    system("cls");
    }
    return input;
}
//проверка для умножения
int mult_check(int var_1, int var_2) {
    // A < max / B
    if (abs(var_1) < (max / abs(var_2))) {
        return 1;
    } else {
        return 0;
    }
}
//проверка для возведения в степень
int exp_check(int var_1, int var_2) { 
    double var_1dbl = (double)var_1;
    double var_2dbl = (double)var_2;
    double max_dbl = (double)max;
    double big;
    big = log(max_dbl) / log(fabs(var_1dbl));
    // B < log(A, max) 
    if (var_2dbl < big) {
        return 1;
    } else if (var_1 == 0 && var_2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
//выбор операции
void get_operation(int key, int input_1, int input_2) {
    //СЛОЖЕНИЕ
    if (key == 3) {
        system("cls");
        int result = input_1 + input_2;
        printf("Addition (A + B)\n");
        printf("==================\n");
        printf("%d + %d\n", input_1, input_2);
        printf("==================\n");
        printf("Your result = %d\n", result);
        confirm();
    }
    //ВЫЧИТАНИЕ
    if (key == 4) {
        system("cls");
        int result = input_1 - input_2;
        printf("Subtraction (A - B)\n");
        printf("============\n");
        printf("%d - %d\n", input_1, input_2);
        printf("============\n");
        printf("Your result = %d\n", result);
        confirm();
    }
    //УМНОЖЕНИЕ
    if (key == 5) {
        int result = 0;
        if (input_1 == 0 || input_2 == 0) {
            system("cls");
            printf("Multiplication (A * B)\n");
            printf("============\n");
            printf("%d * %d\n", input_1, input_2);
            printf("============\n");
            printf("Your result = %d\n", result);
            confirm();
       } else {
            system("cls"); 
            int check = mult_check(input_1, input_2);
            if (check == 1) {
            result = input_1 * input_2;
            printf("Multiplication (A * B)\n");
            printf("============\n");
            printf("%d * %d\n", input_1, input_2);
            printf("============\n");
            printf("Your result = %d\n", result);
            confirm();
            } else {
                error_screen();
            }
            }
    }
    //ДЕЛЕНИЕ
    if (key == 6 && input_2 != 0) {
        system("cls");
        int result = input_1 / input_2;
        printf("Division (A / B)\n");
        printf("============\n");
        printf("%d / %d\n", input_1, input_2);
        printf("============\n");
        printf("Your result (Approx.) = %d\n", result);
        confirm();
    }
    //ВОЗВ. В СТЕПЕНЬ
    if (key == 7) {
        system("cls");
        int check = exp_check(input_1, input_2);
        if (check == 0) {
            error_screen();
        } else if (input_1 == 0 && abs(input_2) > 1) {
            int result = 0;
            printf("Exponentiation (A ^ B)\n");
            printf("================\n");
            printf("%d ^ %d\n", input_1, input_2);
            printf("================\n");
            printf("Your result (Approx.) = %d\n", result);
            confirm();
        } else {
           int result = round(pow((double)input_1, (double)input_2));
            printf("Exponentiation (A ^ B)\n");
            printf("================\n");
            printf("%d ^ %d\n", input_1, input_2);
            printf("================\n");
            printf("Your result (Approx.) = %d\n", result);
            confirm(); 
        }
    }
    //ВЫЧИСЛЕНИЕ КОРНЯ
    if (key == 8 && input_2 > 0) {
        system("cls");
        if (input_1 < 0 && input_2 % 2 == 0) {
            system("cls");
        } else {
        float input_2fl = (float)input_2;
        float root_power = (1 / input_2fl);
        if (input_1 < 0) {
            int result = pow(abs(input_1), root_power) * -1;
            printf("B-root of A\n");
            printf("=========================\n");
            printf("%d-Root of %d\n", input_2, input_1);
            printf("=========================\n");
            printf("Your result (Approx.) = %d\n", result);
            confirm();
        } else {
            int result = pow(input_1, root_power);
            printf("B-root of A\n");
            printf("=========================\n");
            printf("%d-Root of %d\n", input_2, input_1);
            printf("=========================\n");
            printf("Your result (Approx.) = %d\n", result);
            confirm();
        }
        }
    }
}

int main() {
    int exit = 0, key = 1;
    static int var_1 = 0, var_2 = 0;


    while (exit == 0) {
    //вывод интерфейса
    full_interface(num, var_1, var_2);
    key = num_menu_func();
    //если escape
    if (key == 10) {
        break;
    }
    //если enter
    if (key == 12) {
        if (num == 1) {
        var_1 = get_input(var_1);
        }

        if (num == 2) {
        var_2 = get_input(var_2);
        }

        if (num == 3) {
        get_operation(num, var_1, var_2); 
        }

        if (num == 4) {
        get_operation(num, var_1, var_2);
        }

        if (num == 5) {
        get_operation(num, var_1, var_2);
        }

        if (num == 6) {
        get_operation(num, var_1, var_2);
        }

        if (num == 7) {
        get_operation(num, var_1, var_2);
        }

        if (num == 8) {
        get_operation(num, var_1, var_2);
        }

        if (num == 9) {
        help_menu();
        }
    }
    }

return 0;
}
