/* ================= servo.h ================= */
#ifndef __SERVO_H
#define __SERVO_H

#include "main.h"

#define SERVO_MIN_CCR   500    // 0°   对应 0.5ms
#define SERVO_MAX_CCR   2500   // 180° 对应 2.5ms

extern TIM_HandleTypeDef htim3;   // 在 main.c 中定义

void Servo_Init(void);
void Servo_SetAngle(float angle);
void Servo_Sweep(float from, float to, uint16_t period);

#endif