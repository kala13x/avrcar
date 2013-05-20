################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Test_avr.lss \

FLASH_IMAGE += \
Test_avr.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Test_avr.elf secondary-outputs

# Tool invocations
Test_avr.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Test_avr.map -mmcu=atmega128 -o "Test_avr.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Test_avr.lss: Test_avr.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Test_avr.elf  >"Test_avr.lss"
	@echo 'Finished building: $@'
	@echo ' '

Test_avr.hex: Test_avr.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex Test_avr.elf  "Test_avr.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Test_avr.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega128 Test_avr.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(FLASH_IMAGE)$(ELFS)$(LSS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) Test_avr.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
