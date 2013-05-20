################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Task_01.c \
../Task_02.c \
../Task_03.c \
../USART.c \
../USART_2.c \
../main.c 

OBJS += \
./Task_01.o \
./Task_02.o \
./Task_03.o \
./USART.o \
./USART_2.o \
./main.o 

C_DEPS += \
./Task_01.d \
./Task_02.d \
./Task_03.d \
./USART.d \
./USART_2.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega128 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


