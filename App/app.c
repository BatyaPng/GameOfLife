#include "sim.h"

#define SQUARE_SIZE 20     // Размер квадрата
#define SPEED_X 3          // Горизонтальная скорость
#define SPEED_Y 2          // Вертикальная скорость

void app() {
    int x = simRand() % (SIM_X_SIZE - SQUARE_SIZE);  // Начальная позиция по X
    int y = simRand() % (SIM_Y_SIZE - SQUARE_SIZE);  // Начальная позиция по Y
    int v_x = SPEED_X;   // Горизонтальная скорость
    int v_y = SPEED_Y;   // Вертикальная скорость
    
    while (1) {
        // Очищаем экран перед обновлением
        for (int i = 0; i < SIM_X_SIZE; i++) {
            for (int j = 0; j < SIM_Y_SIZE; j++) {
                simPutPixel(i, j, 0x00000000);  // Чёрный цвет (фон)
            }
        }

        // Рисуем квадрат
        for (int i = 0; i < SQUARE_SIZE; i++) {
            for (int j = 0; j < SQUARE_SIZE; j++) {
                simPutPixel(x + i, y + j, 0xFFFFFFFF);  // Белый цвет (квадрат)
            }
        }

        // Обновляем положение квадрата
        x += v_x;
        y += v_y;

        // Обрабатываем столкновение с границами экрана (отскоки)
        if (x < 0) {
            x = 0;        // Если выходим за левую границу, фиксируем на 0
            v_x = -v_x;   // Меняем направление по X
        }
        if (x > SIM_X_SIZE - SQUARE_SIZE) {
            x = SIM_X_SIZE - SQUARE_SIZE;  // Если выходим за правую границу, фиксируем на границу
            v_x = -v_x;   // Меняем направление по X
        }
        if (y < 0) {
            y = 0;        // Если выходим за верхнюю границу, фиксируем на 0
            v_y = -v_y;   // Меняем направление по Y
        }
        if (y > SIM_Y_SIZE - SQUARE_SIZE) {
            y = SIM_Y_SIZE - SQUARE_SIZE;  // Если выходим за нижнюю границу, фиксируем на границу
            v_y = -v_y;   // Меняем направление по Y
        }

        // Обновляем экран
        simFlush();
    }
}
