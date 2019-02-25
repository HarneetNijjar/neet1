################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: harneet.axf

# Tool invocations
harneet.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"/home/harneet/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_board_nxp_lpcxpresso_1769/Debug" -L"/home/harneet/Documents/MCUXpresso_10.3.0_2200/workspace/lpc_chip_175x_6x/Debug" -Xlinker -Map="harneet.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -mcpu=cortex-m3 -mthumb -T "harneet_Debug.ld" -o "harneet.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) harneet.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "harneet.axf"; # arm-none-eabi-objcopy -v -O binary "harneet.axf" "harneet.bin" ; # checksum -p LPC1769 -d "harneet.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
