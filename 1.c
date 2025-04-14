#include <stdio.h>
int main() {
    char letter = 'l'; // Буква, которую нужно найти
    int position = -1;
    // Проверяем, является ли буква строчной и в пределах алфавита
    if (letter >= 'a' && letter <= 'z') {
        position = letter - 'a' + 1; // Вычисляем позицию
    }
    if (position != -1) {
        printf("Буква '%c' находится на позиции %d в алфавите\n", letter, position);
    } else {
        printf("Буква '%c' не найдена в алфавите\n", letter);
    }
    return 0;
}
