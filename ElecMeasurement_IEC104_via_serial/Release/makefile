################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include lib60870-C/src/iec60870/t104/subdir.mk
-include lib60870-C/src/iec60870/apl/subdir.mk
-include lib60870-C/src/iec60870/subdir.mk
-include lib60870-C/src/hal/time/freertos/subdir.mk
-include lib60870-C/src/hal/thread/freertos/subdir.mk
-include lib60870-C/src/hal/socket/freertos/subdir.mk
-include lib60870-C/src/common/subdir.mk
-include freertos-code/FreeRTOS/Source/portable/MemMang/subdir.mk
-include freertos-code/FreeRTOS/Source/portable/GCC/ARM_CM3/subdir.mk
-include freertos-code/FreeRTOS/Source/subdir.mk
-include freertos-code/FreeRTOS-Plus/Source/FreeRTOS-Plus-CLI/subdir.mk
-include components/ring_buffer/subdir.mk
-include components/nvs/src/subdir.mk
-include components/flash/subdir.mk
-include components/crc/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Src/subdir.mk
-include CMSIS_RTOS/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
ElecMeasurement_IEC104_via_serial.hex \

SECONDARY_SIZE += \
ElecMeasurement_IEC104_via_serial.siz \


# All Target
all: ElecMeasurement_IEC104_via_serial.elf secondary-outputs

# Tool invocations
ElecMeasurement_IEC104_via_serial.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM Cross C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wpadded -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g -T "E:\develop\eclipse-workspace\ElecMeasurement_IEC104_via_serial\STM32F103C8Tx_FLASH.ld" -Xlinker --gc-sections -Wl,-Map,"ElecMeasurement_IEC104_via_serial.map" -Xlinker --cref --specs=nano.specs -o "ElecMeasurement_IEC104_via_serial.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ElecMeasurement_IEC104_via_serial.hex: ElecMeasurement_IEC104_via_serial.elf
	@echo 'Invoking: GNU ARM Cross Create Flash Image'
	arm-none-eabi-objcopy -O ihex "ElecMeasurement_IEC104_via_serial.elf"  "ElecMeasurement_IEC104_via_serial.hex"
	@echo 'Finished building: $@'
	@echo ' '

ElecMeasurement_IEC104_via_serial.siz: ElecMeasurement_IEC104_via_serial.elf
	@echo 'Invoking: GNU ARM Cross Print Size'
	arm-none-eabi-size --format=berkeley "ElecMeasurement_IEC104_via_serial.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS)$(CPP_DEPS) ElecMeasurement_IEC104_via_serial.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
