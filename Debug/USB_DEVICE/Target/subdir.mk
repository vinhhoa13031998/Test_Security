################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../USB_DEVICE/Target/usbd_conf.c 

OBJS += \
./USB_DEVICE/Target/usbd_conf.o 

C_DEPS += \
./USB_DEVICE/Target/usbd_conf.d 


# Each subdirectory must supply rules for building sources it contributes
USB_DEVICE/Target/usbd_conf.o: ../USB_DEVICE/Target/usbd_conf.c USB_DEVICE/Target/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L475xx -DGPL_LICENSE_TERMS_ACCEPTED -DTRACE_PRINTF -c -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/CycloneCRYPTO" -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/CycloneCRYPTO/cipher" -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/CycloneCRYPTO/core" -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/CycloneCRYPTO/cipher_mode" -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/Core/Inc" -I"C:/Users/vnguyen/STM32CubeIDE/workspace_1.6.0/Test_securityV2/CycloneCRYPTO/common" -I../Core/Inc -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"USB_DEVICE/Target/usbd_conf.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

