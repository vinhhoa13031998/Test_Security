################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c \
../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c \
../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c 

OBJS += \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.o \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.o \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.o 

C_DEPS += \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.d \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.d \
./Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.o: ../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c Middleware/ST/STM32_USB_Device_Library/Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -c -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/App" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/Target" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc/AES/CBC" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto_AccHw/Inc" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_core.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.o: ../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c Middleware/ST/STM32_USB_Device_Library/Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -c -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/App" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/Target" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc/AES/CBC" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto_AccHw/Inc" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.o: ../Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c Middleware/ST/STM32_USB_Device_Library/Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -c -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/App" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/USB_DEVICE/Target" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Core/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_USB_Device_Library/Class/CDC/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto/Inc/AES/CBC" -I"C:/Users/vinhh/STM32CubeIDE/workspace_1.6.0/Test_Security/Middleware/ST/STM32_Crypto_AccHw/Inc" -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -I../USB_DEVICE/App -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Middleware/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

