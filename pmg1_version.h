/******************************************************************************
* @file pmg1_version.h
*
* @brief This file defines the version details of the PMG1 Code Example.
*
*******************************************************************************
* (c) 2022-2026, Infineon Technologies AG, or an affiliate of Infineon
* Technologies AG. All rights reserved.
* This software, associated documentation and materials ("Software") is
* owned by Infineon Technologies AG or one of its affiliates ("Infineon")
* and is protected by and subject to worldwide patent protection, worldwide
* copyright laws, and international treaty provisions. Therefore, you may use
* this Software only as provided in the license agreement accompanying the
* software package from which you obtained this Software. If no license
* agreement applies, then any use, reproduction, modification, translation, or
* compilation of this Software is prohibited without the express written
* permission of Infineon.
*
* Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE
* IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF
* THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A
* SPECIFIC USE/PURPOSE OR MERCHANTABILITY.
* Infineon reserves the right to make changes to the Software without notice.
* You are responsible for properly designing, programming, and testing the
* functionality and safety of your intended application of the Software, as
* well as complying with any legal requirements related to its use. Infineon
* does not guarantee that the Software will be free from intrusion, data theft
* or loss, or other breaches ("Security Breaches"), and Infineon shall have
* no liability arising out of any Security Breaches. Unless otherwise
* explicitly approved by Infineon, the Software may not be used in any
* application where a failure of the Product or any consequences of the use
* thereof can reasonably be expected to result in personal injury.
*******************************************************************************/

#ifndef _PMG1_VERSION_H_
#define _PMG1_VERSION_H_

/**
   @brief Major version of the PMG1 CE.
 */
#define PMG1_CE_MAJOR_VERSION                                (4)

/**
   @brief Minor version of the PMG1 CE.
 */
#define PMG1_CE_MINOR_VERSION                                (0)

/**
   @brief Patch version of the PMG1 CE.
 */
#define PMG1_CE_PATCH_VERSION                                (1)

/**
   @brief Build number of the PMG1 CE. Base Build number: 0000
          When the value reaches 9999 this shall be reset to 0.
 */
#define PMG1_CE_BUILD_NUMBER                                 (49)

/**
 *  @brief Composite PMG1 CE version value.
 *
 *  PMG1 CE version value. This is a 4 byte value with the following format:
 *  Bytes 1-0: Build number
 *  Byte    2: Patch version
 *  Byte 3 (Bits 0:3): Minor Version
 *  Byte 3 (Bits 4:7): Major Version
 */
#define PMG1_CE_BASE_VERSION                                             \
        ((PMG1_CE_MAJOR_VERSION << 28) | (PMG1_CE_MINOR_VERSION << 24) |      \
        (PMG1_CE_PATCH_VERSION << 16) | (PMG1_CE_BUILD_NUMBER))

#endif /* _PMG1_VERSION_H_ */

/* End of file */
