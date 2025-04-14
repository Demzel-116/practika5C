#include <stdio.h>
#include <string.h>
int main() {
    char word[] = "yellow";
    char result[4]; // Массив для результата ("low\0")
    int start = 3;  // Начальная позиция подстроки
    int length = 3; // Длина подстроки
    // Копируем подстроку из word в result
    strncpy(result, &word[start], length);
    result[length] = '\0'; // Добавляем нуль-терминатор в конец
    printf("Результат: %s\n", result);
    return 0;
}
