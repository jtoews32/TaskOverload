################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Project_Settings/Startup_Code/startup.c 

OBJS += \
./Project_Settings/Startup_Code/startup.o 

C_DEPS += \
./Project_Settings/Startup_Code/startup.d 


# Each subdirectory must supply rules for building sources it contributes
Project_Settings/Startup_Code/%.o: ../Project_Settings/Startup_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/IO_Map" -I"/home/jtoews/Desktop/keplercpp/ProcessorExpert/lib/Kinetis/pdd/inc" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Sources" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Generated_Code" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\IO_Map" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


