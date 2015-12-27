################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/FRTOS1.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/TU1.c \
../Generated_Code/Timer.c \
../Generated_Code/TimerIntLdd1.c \
../Generated_Code/UTIL1.c \
../Generated_Code/croutine.c \
../Generated_Code/event_groups.c \
../Generated_Code/heap_1.c \
../Generated_Code/heap_2.c \
../Generated_Code/heap_3.c \
../Generated_Code/heap_4.c \
../Generated_Code/heap_5.c \
../Generated_Code/list.c \
../Generated_Code/port.c \
../Generated_Code/queue.c \
../Generated_Code/tasks.c \
../Generated_Code/timers.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/FRTOS1.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/TU1.o \
./Generated_Code/Timer.o \
./Generated_Code/TimerIntLdd1.o \
./Generated_Code/UTIL1.o \
./Generated_Code/croutine.o \
./Generated_Code/event_groups.o \
./Generated_Code/heap_1.o \
./Generated_Code/heap_2.o \
./Generated_Code/heap_3.o \
./Generated_Code/heap_4.o \
./Generated_Code/heap_5.o \
./Generated_Code/list.o \
./Generated_Code/port.o \
./Generated_Code/queue.o \
./Generated_Code/tasks.o \
./Generated_Code/timers.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/FRTOS1.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/TU1.d \
./Generated_Code/Timer.d \
./Generated_Code/TimerIntLdd1.d \
./Generated_Code/UTIL1.d \
./Generated_Code/croutine.d \
./Generated_Code/event_groups.d \
./Generated_Code/heap_1.d \
./Generated_Code/heap_2.d \
./Generated_Code/heap_3.d \
./Generated_Code/heap_4.d \
./Generated_Code/heap_5.d \
./Generated_Code/list.d \
./Generated_Code/port.d \
./Generated_Code/queue.d \
./Generated_Code/tasks.d \
./Generated_Code/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code/IO_Map" -I"/home/jtoews/Desktop/keplercpp/ProcessorExpert/lib/Kinetis/pdd/inc" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Sources" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Generated_Code" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\Peripherals" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\System" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\PDD" -I"/home/jtoews/Desktop/keplercpp/workspace_keplercpp/TaskOverload/Static_Code\IO_Map" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


