################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Tasks/Task_01.c \
../Tasks/Task_02.c \
../Tasks/Task_03.c \
../Tasks/Task_04.c \
../Tasks/Task_05.c 

OBJS += \
./Tasks/Task_01.o \
./Tasks/Task_02.o \
./Tasks/Task_03.o \
./Tasks/Task_04.o \
./Tasks/Task_05.o 

C_DEPS += \
./Tasks/Task_01.d \
./Tasks/Task_02.d \
./Tasks/Task_03.d \
./Tasks/Task_04.d \
./Tasks/Task_05.d 


# Each subdirectory must supply rules for building sources it contributes
Tasks/%.o: ../Tasks/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega128 -DF_CPU=7372800UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


