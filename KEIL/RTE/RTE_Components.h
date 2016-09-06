
/*
 * Auto generated Run-Time-Environment Component Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'quadcopter' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "stm32f4xx.h"

#define RTE_CMSIS_RTOS                  /* CMSIS-RTOS */
        #define RTE_CMSIS_RTOS_RTX              /* CMSIS-RTOS Keil RTX */
#define RTE_Compiler_EventMessaging
        #define RTE_Compiler_EventMessaging_DAP
#define RTE_Compiler_IO_File            /* Compiler I/O: File */
        #define RTE_Compiler_IO_File_FS         /* Compiler I/O: File (File System) */
#define RTE_Compiler_IO_STDERR          /* Compiler I/O: STDERR */
        #define RTE_Compiler_IO_STDERR_User     /* Compiler I/O: STDERR User */
#define RTE_Compiler_IO_STDIN           /* Compiler I/O: STDIN */
        #define RTE_Compiler_IO_STDIN_User      /* Compiler I/O: STDIN User */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
        #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
#define RTE_Compiler_IO_TTY             /* Compiler I/O: TTY */
        #define RTE_Compiler_IO_TTY_User        /* Compiler I/O: TTY User */
#define RTE_DEVICE_FRAMEWORK_CUBE_MX
#define RTE_DEVICE_HAL_ADC
#define RTE_DEVICE_HAL_CAN
#define RTE_DEVICE_HAL_COMMON
#define RTE_DEVICE_HAL_CORTEX
#define RTE_DEVICE_HAL_CRC
#define RTE_DEVICE_HAL_DAC
#define RTE_DEVICE_HAL_DCMI
#define RTE_DEVICE_HAL_DMA
#define RTE_DEVICE_HAL_ETH
#define RTE_DEVICE_HAL_FLASH
#define RTE_DEVICE_HAL_GPIO
#define RTE_DEVICE_HAL_HCD
#define RTE_DEVICE_HAL_I2C
#define RTE_DEVICE_HAL_I2S
#define RTE_DEVICE_HAL_IRDA
#define RTE_DEVICE_HAL_IWDG
#define RTE_DEVICE_HAL_NAND
#define RTE_DEVICE_HAL_NOR
#define RTE_DEVICE_HAL_PCCARD
#define RTE_DEVICE_HAL_PCD
#define RTE_DEVICE_HAL_PWR
#define RTE_DEVICE_HAL_RCC
#define RTE_DEVICE_HAL_RNG
#define RTE_DEVICE_HAL_RTC
#define RTE_DEVICE_HAL_SD
#define RTE_DEVICE_HAL_SMARTCARD
#define RTE_DEVICE_HAL_SPI
#define RTE_DEVICE_HAL_SRAM
#define RTE_DEVICE_HAL_TIM
#define RTE_DEVICE_HAL_UART
#define RTE_DEVICE_HAL_USART
#define RTE_DEVICE_HAL_WWDG
#define RTE_DEVICE_STARTUP_STM32F4XX    /* Device Startup for STM32F4 */
#define RTE_Driver_Flash_AM29x800BB     /* Driver Flash AM29x800BB */
#define RTE_Driver_NAND_MemoryBus       /* Driver NAND Flash on Memory Bus */
#define RTE_Drivers_CAN1                /* Driver CAN1 */
        #define RTE_Drivers_CAN2                /* Driver CAN2 */
#define RTE_Drivers_ETH_KSZ8851SNL      /* Driver ETH KSZ8851SNL */
#define RTE_Drivers_ETH_MAC0            /* Driver ETH_MAC0 */
#define RTE_Drivers_Flash_AT45DB641E    /* Driver Flash AT45DB641E */
#define RTE_Drivers_Flash_AT45DB642D    /* Driver Flash AT45DB642D */
#define RTE_Drivers_Flash_M29EW28F128   /* Driver Flash M29EW28F128 */
#define RTE_Drivers_Flash_M29W640FB     /* Driver Flash M29W640FB */
#define RTE_Drivers_Flash_S29GL064Nx2   /* Driver Flash S29GL064Nx2 */
#define RTE_Drivers_I2C1                /* Driver I2C1 */
        #define RTE_Drivers_I2C2                /* Driver I2C2 */
        #define RTE_Drivers_I2C3                /* Driver I2C3 */
#define RTE_Drivers_MCI0                /* Driver MCI0 */
#define RTE_Drivers_PHY_DP83848C        /* Driver PHY DP83848C */
#define RTE_Drivers_PHY_KSZ8061RNB      /* Driver PHY KSZ8061RNB */
#define RTE_Drivers_PHY_KSZ8081RNA      /* Driver PHY KSZ8081RNA/RND */
#define RTE_Drivers_PHY_LAN8720         /* Driver PHY LAN8720 */
#define RTE_Drivers_PHY_LAN8742A        /* Driver PHY LAN8742A */
#define RTE_Drivers_PHY_ST802RT1        /* Driver PHY ST802RT1 */
#define RTE_Drivers_SPI1                /* Driver SPI1 */
        #define RTE_Drivers_SPI2                /* Driver SPI2 */
        #define RTE_Drivers_SPI3                /* Driver SPI3 */
        #define RTE_Drivers_SPI4                /* Driver SPI4 */
        #define RTE_Drivers_SPI5                /* Driver SPI5 */
        #define RTE_Drivers_SPI6                /* Driver SPI6 */
#define RTE_Drivers_USART1              /* Driver USART1 */
        #define RTE_Drivers_USART2              /* Driver USART2 */
        #define RTE_Drivers_USART3              /* Driver USART3 */
        #define RTE_Drivers_USART4              /* Driver USART4 */
        #define RTE_Drivers_USART5              /* Driver USART5 */
        #define RTE_Drivers_USART6              /* Driver USART6 */
        #define RTE_Drivers_USART7              /* Driver USART7 */
        #define RTE_Drivers_USART8              /* Driver USART8 */
#define RTE_Drivers_USART_CDC_ACM       /* Driver USART CDC ACM */
#define RTE_Drivers_USART_PL2303        /* Driver USART PL2303 */
#define RTE_Drivers_USBD0               /* Driver USBD0 */
#define RTE_Drivers_USBD1               /* Driver USBD1 */
#define RTE_Drivers_USBH0               /* Driver USBH0 */
#define RTE_Drivers_USBH1               /* Driver USBH1 */
#define RTE_FileSystem_Core             /* File System Core */
          #define RTE_FileSystem_SFN              /* File System without Long Filename support */
#define RTE_USB_Core                    /* USB Core */
#define RTE_USB_Host_0                  /* USB Host 0 */
#define RTE_USB_Host_CDC                /* USB Host CDC */
#define RTE_USB_Host_CustomClass        /* USB Host Custom Class */

#endif /* RTE_COMPONENTS_H */
