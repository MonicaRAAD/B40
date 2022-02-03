/*******************************************************************************
********************************************************************************
**                                                                            **
** ABCC Driver version 5.07.01 (2020-10-12)                                   **
**                                                                            **
** Delivered with:                                                            **
**    ABP            7.76.01 (2020-10-19)                                     **
**                                                                            */
/*******************************************************************************
********************************************************************************
** COPYRIGHT NOTIFICATION (c) 2013 HMS Industrial Networks AB                 **
**                                                                            **
** This code is the property of HMS Industrial Networks AB.                   **
** The source code may not be reproduced, distributed, or used without        **
** permission. When used together with a product from HMS, permission is      **
** granted to modify, reproduce and distribute the code in binary form        **
** without any restrictions.                                                  **
**                                                                            **
** THE CODE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND. HMS DOES NOT    **
** WARRANT THAT THE FUNCTIONS OF THE CODE WILL MEET YOUR REQUIREMENTS, OR     **
** THAT THE OPERATION OF THE CODE WILL BE UNINTERRUPTED OR ERROR-FREE, OR     **
** THAT DEFECTS IN IT CAN BE CORRECTED.                                       **
********************************************************************************
********************************************************************************
** File Description:
** This is the public header file for the CRC calculation routines.
********************************************************************************
********************************************************************************
** Services:
**
**    CRC_Crc16()                   - CRC16 checksum calculation function.
********************************************************************************
********************************************************************************
*/

#ifndef CRC16_H
#define CRC16_H

#include "abcc_drv_cfg.h"
#include "abcc_td.h"

/*******************************************************************************
**
** Typedefs
**
********************************************************************************
*/

/*******************************************************************************
**
** Public Services
**
********************************************************************************
*/

/*---------------------------------------------------------------------------
**
** CRC_Crc16()
**
** Calculates a CRC16 checksum on the indicated bytes.
**
**---------------------------------------------------------------------------
**
** Inputs:
**    pbBufferStart            - Where to start calculation
**    iLength                  - The amount of bytes to include
**
** Outputs:
**    Returns                  - The calculated CRC16 checksum
**
** Usage:
**    iCrc = CRC_Crc16( pbStart, 20 );
**
**---------------------------------------------------------------------------
*/

EXTFUNC UINT16 CRC_Crc16( UINT8* pbBufferStart, UINT16 iLength );


#endif  /* inclusion lock */


/*******************************************************************************
**
** End of crc.h
**
********************************************************************************
*/
