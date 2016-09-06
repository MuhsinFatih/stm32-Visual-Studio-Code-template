/*------------------------------------------------------------------------------
 * MDK Middleware - Component ::USB:Host
 * Copyright (c) 2004-2014 ARM Germany GmbH. All rights reserved.
 *------------------------------------------------------------------------------
 * Name:    USBH_Config_CDC.h
 * Purpose: USB Host Human Interface Device class (HID) Configuration
 * Rev.:    V5.00
 *----------------------------------------------------------------------------*/

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

// <h>USB Host: Communication Device Class (CDC)
//   <o> Number of concurrent CDC Devices in system <0-3>
#define USBH_CDC_NUM                        1

//   <h>OS Resources Settings
//   <i>These settings are used to optimize usage of OS resources.
//     <o>CDC Interrupt In Pipe (modem and error status reception) handling Thread Stack Size <64-65536>
#define USBH_CDC_INT_IN_THREAD_STACK_SIZE   512

//        CDC Interrupt In Pipe handling Thread Priority
#define USBH_CDC_INT_IN_THREAD_PRIORITY     osPriorityAboveNormal

//   </h>
// </h>
