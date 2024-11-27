# EZ-PD&trade; PMG1 MCU: USB PD Sink

This code example demonstrates the USB Type-C attach detection and USB Power Delivery (USB PD) contract negotiation using EZ-PD&trade; PMG1 MCU devices.


[View this README on GitHub.](https://github.com/Infineon/mtb-example-pmg1-usbpd-sink)

[Provide feedback on this code example.](https://cypress.co1.qualtrics.com/jfe/form/SV_1NTns53sK2yiljn?Q_EED=eyJVbmlxdWUgRG9jIElkIjoiQ0UyMzE4NTYiLCJTcGVjIE51bWJlciI6IjAwMi0zMTg1NiIsIkRvYyBUaXRsZSI6IkVaLVBEJnRyYWRlOyBQTUcxIE1DVTogVVNCIFBEIFNpbmsiLCJyaWQiOiJtZGRkIiwiRG9jIHZlcnNpb24iOiI0LjAuMCIsIkRvYyBMYW5ndWFnZSI6IkVuZ2xpc2giLCJEb2MgRGl2aXNpb24iOiJNQ0QiLCJEb2MgQlUiOiJXSVJFRCIsIkRvYyBGYW1pbHkiOiJUWVBFLUMifQ==)


## Requirements

- [ModusToolbox&trade;](https://www.infineon.com/modustoolbox) v3.3 or later (tested with v3.3)
- Board support package (BSP) minimum required version: 3.0.0
- Programming language: C
- Associated parts: All [EZ-PD&trade; PMG1 MCU](https://www.infineon.com/PMG1) parts


## Supported toolchains (make variable 'TOOLCHAIN')

- GNU Arm&reg; Embedded Compiler v11.3.1 (`GCC_ARM`) – Default value of `TOOLCHAIN`
- Arm&reg; Compiler v6.22 (`ARM`)
- IAR C/C++ Compiler v9.50.2 (`IAR`)


## Supported kits (make variable 'TARGET')

- [EZ-PD&trade; PMG1-S0 prototyping kit](https://www.infineon.com/CY7110) (`PMG1-CY7110`) - Default value of `TARGET`
- [EZ-PD&trade; PMG1-S1 prototyping kit](https://www.infineon.com/CY7111) (`PMG1-CY7111`)
- [EZ-PD&trade; PMG1-S2 prototyping kit](https://www.infineon.com/CY7112) (`PMG1-CY7112`)
- [EZ-PD&trade; PMG1-S3 prototyping kit](https://www.infineon.com/CY7113) (`PMG1-CY7113`)
- [EZ-PD&trade; PMG1-S1 evaluation kit](https://www.infineon.com/EVAL_PMG1_S1_DRP) (`EVAL_PMG1_S1_DRP`)
- [EZ-PD&trade; PMG1-S3 evaluation kit](https://www.infineon.com/EVAL_PMG1_S3_DUALDRP) (`EVAL_PMG1_S3_DUALDRP`)


## Hardware setup

This example uses the board's default configuration. See the kit user guide to ensure that the board is configured correctly.





## Software setup

See the [ModusToolbox&trade; tools package installation guide](https://www.infineon.com/ModusToolboxInstallguide) for information about installing and configuring the tools package.

This example requires no additional software or tools.


## Using the code example

### Create the project

The ModusToolbox&trade; tools package provides the Project Creator as both a GUI tool and a command line tool.

<details><summary><b>Use Project Creator GUI</b></summary>

1. Open the Project Creator GUI tool.

   There are several ways to do this, including launching it from the dashboard or from inside the Eclipse IDE. For more details, see the [Project Creator user guide](https://www.infineon.com/ModusToolboxProjectCreator) (locally available at *{ModusToolbox&trade; install directory}/tools_{version}/project-creator/docs/project-creator.pdf*).

2. On the **Choose Board Support Package (BSP)** page, select a kit supported by this code example. See [Supported kits](#supported-kits-make-variable-target).

   > **Note:** To use this code example for a kit not listed here, you may need to update the source files. If the kit does not have the required resources, the application may not work.

3. On the **Select Application** page:

   a. Select the **Applications(s) Root Path** and the **Target IDE**.

   > **Note:** Depending on how you open the Project Creator tool, these fields may be pre-selected for you.

   b.	Select this code example from the list by enabling its check box.

   > **Note:** You can narrow the list of displayed examples by typing in the filter box.

   c. (Optional) Change the suggested **New Application Name** and **New BSP Name**.

   d. Click **Create** to complete the application creation process.

</details>

<details><summary><b>Use Project Creator CLI</b></summary>

The 'project-creator-cli' tool can be used to create applications from a CLI terminal or from within batch files or shell scripts. This tool is available in the *{ModusToolbox&trade; install directory}/tools_{version}/project-creator/* directory.

Use a CLI terminal to invoke the 'project-creator-cli' tool. On Windows, use the command-line 'modus-shell' program provided in the ModusToolbox&trade; installation instead of a standard Windows command-line application. This shell provides access to all ModusToolbox&trade; tools. You can access it by typing "modus-shell" in the search box in the Windows menu. In Linux and macOS, you can use any terminal application.

The following example clones the "[USB PD Sink](https://github.com/Infineon/mtb-example-pmg1-usbpd-sink)" application with the desired name "UsbPdSink" configured for the *PMG1-CY7113* BSP into the specified working directory, *C:/mtb_projects*:

   ```
   project-creator-cli --board-id PMG1-CY7113 --app-id mtb-example-pmg1-usbpd-sink --user-app-name UsbPdSink --target-dir "C:/mtb_projects"
   ```

The 'project-creator-cli' tool has the following arguments:

Argument | Description | Required/optional
---------|-------------|-----------
`--board-id` | Defined in the <id> field of the [BSP](https://github.com/Infineon?q=bsp-manifest&type=&language=&sort=) manifest | Required
`--app-id`   | Defined in the <id> field of the [CE](https://github.com/Infineon?q=ce-manifest&type=&language=&sort=) manifest | Required
`--target-dir`| Specify the directory in which the application is to be created if you prefer not to use the default current working directory | Optional
`--user-app-name`| Specify the name of the application if you prefer to have a name other than the example's default name | Optional

> **Note:** The project-creator-cli tool uses the `git clone` and `make getlibs` commands to fetch the repository and import the required libraries. For details, see the "Project creator tools" section of the [ModusToolbox&trade; tools package user guide](https://www.infineon.com/ModusToolboxUserGuide) (locally available at {ModusToolbox&trade; install directory}/docs_{version}/mtb_user_guide.pdf).

</details>


### Open the project

After the project has been created, you can open it in your preferred development environment.


<details><summary><b>Eclipse IDE</b></summary>

If you opened the Project Creator tool from the included Eclipse IDE, the project will open in Eclipse automatically.

For more details, see the [Eclipse IDE for ModusToolbox&trade; user guide](https://www.infineon.com/MTBEclipseIDEUserGuide) (locally available at *{ModusToolbox&trade; install directory}/docs_{version}/mt_ide_user_guide.pdf*).

</details>


<details><summary><b>Visual Studio (VS) Code</b></summary>

Launch VS Code manually, and then open the generated *{project-name}.code-workspace* file located in the project directory.

For more details, see the [Visual Studio Code for ModusToolbox&trade; user guide](https://www.infineon.com/MTBVSCodeUserGuide) (locally available at *{ModusToolbox&trade; install directory}/docs_{version}/mt_vscode_user_guide.pdf*).

</details>


<details><summary><b>Keil µVision</b></summary>

Double-click the generated *{project-name}.cprj* file to launch the Keil µVision IDE.

For more details, see the [Keil µVision for ModusToolbox&trade; user guide](https://www.infineon.com/MTBuVisionUserGuide) (locally available at *{ModusToolbox&trade; install directory}/docs_{version}/mt_uvision_user_guide.pdf*).

</details>


<details><summary><b>IAR Embedded Workbench</b></summary>

Open IAR Embedded Workbench manually, and create a new project. Then select the generated *{project-name}.ipcf* file located in the project directory.

For more details, see the [IAR Embedded Workbench for ModusToolbox&trade; user guide](https://www.infineon.com/MTBIARUserGuide) (locally available at *{ModusToolbox&trade; install directory}/docs_{version}/mt_iar_user_guide.pdf*).

</details>


<details><summary><b>Command line</b></summary>

If you prefer to use the CLI, open the appropriate terminal, and navigate to the project directory. On Windows, use the command-line 'modus-shell' program; on Linux and macOS, you can use any terminal application. From there, you can run various `make` commands.

For more details, see the [ModusToolbox&trade; tools package user guide](https://www.infineon.com/ModusToolboxUserGuide) (locally available at *{ModusToolbox&trade; install directory}/docs_{version}/mtb_user_guide.pdf*).

</details>


## Operation

1. Connect the board to your PC using the provided USB cable through the KitProg3 USB connector.

2. Ensure that the jumper shunt on the power selection jumper (J5) is placed at 2-3 position while programming the kit.

3. Program the board using one of the following:

   <details><summary><b>Using Eclipse IDE</b></summary>

      1. Select the application project in the Project Explorer.

      2. In the **Quick Panel**, scroll down, and click **\<Application Name> Program (KitProg3_MiniProg4)**.
   </details>


   <details><summary><b>In other IDEs</b></summary>

   Follow the instructions in your preferred IDE.
   </details>


   <details><summary><b>Using CLI</b></summary>

     From the terminal, execute the `make program` command to build and program the application using the default toolchain to the default target. The default toolchain is specified in the application's Makefile but you can override this value manually:
      ```
      make program TOOLCHAIN=<toolchain>
      ```

      Example:
      ```
      make program TOOLCHAIN=GCC_ARM
      ```
   </details>

4. After programming the kit, change the position on the power selection jumper (J5) to 1-2 to power the kit through the USB PD port. Do not change the jumper (J5) position while the cables are connected to the power source.

5. Observe that the user LED (LED3) on the board blinks at different rates depending on the type of power adapter connected:

   - If a power adapter supporting USB Power Delivery is connected, the LED blinks at about 5 Hz (toggles every 100 ms).

   - If a USB Type-C power adapter or a standard downstream port (SDP) is connected, the LED blinks at about 1 Hz (toggles every 500 ms).

   - If a dedicated charging port (DCP) is connected, the LED blinks at about 0.17 Hz (toggles every 3 seconds).

   - If a charging downstream port (CDP) is connected, the LED blinks at about 0.05 Hz (toggles every 10 seconds).


## Debugging

You can debug the example to step through the code. 


<details><summary><b>In Eclipse IDE</b></summary>

Use the **\<Application Name> Debug (KitProg3_MiniProg4)** configuration in the **Quick Panel**. For details, see the "Program and debug" section in the [Eclipse IDE for ModusToolbox&trade; user guide](https://www.infineon.com/MTBEclipseIDEUserGuide).
Ensure that the board is connected to your PC using the USB cable through the KitProg3 USB connector and that the jumper shunt on the power selection jumper (J5) is placed at position 1-2. See the "Debug mode" section in the kit user guide.

For more details, see the "Program and debug" section in the [Eclipse IDE for ModusToolbox&trade; software user guide](https://www.infineon.com/MTBEclipseIDEUserGuide).

</details>


<details><summary><b>In other IDEs</b></summary>

Follow the instructions in your preferred IDE.
</details>


## Design and implementation

EZ-PD&trade; PMG1 MCU devices support a USBPD block which integrates Type-C terminations, comparators, and the Power Delivery transceiver required to detect the attachment of a partner device and negotiate power contracts with it.

On reset, the USBPD block is initialized with the following settings:

   - The receiver clock input of the block is connected to a 12-MHz PERI-derived clock.

   - The transmitter clock input of the block is connected to a 600-kHz PERI-derived clock.

   - The SAR ADC clock input of the block is connected to a 1-MHz PERI-derived clock.

   - The SAR ADC in the USBPD block is configured to measure the VBUS_TYPE-C voltage through an internal divider.

This application uses the PDStack middleware library in an upstream facing port (UFP) - sink configuration. EZ-PD&trade; PMG1 MCU devices have a dead-battery Rd termination, which ensures that a USB-C source/charger connected to it can detect the presence of a sink even when the EZ-PD&trade; PMG1 MCU device is not powered.

**Figure 1. Firmware flowchart**

<img src = "images/pdsinkflow.png" width = "300"/>
<br>

The PDStack middleware library configures the USBPD block on the EZ-PD&trade; PMG1 MCU device to detect Type-C connection state changes and USB PD messages, and notify the stack through callback functions. The callback function registers the pending tasks, which are then handled by PDStack through the `Cy_PdStack_Dpm_Task` function. This function is expected to be called at appropriate times from the main processing loop of the application.

**Figure 2. PDStack task flowchart**

<img src = "images/pdstacktask.png" width = "600"/>

<br>

The PDStack middleware library implements the state machines defined in the [USB Type-C Cable and Connector](https://www.usb.org/document-library/usb-type-cr-cable-and-connector-specification-revision-20) and the [USB Power Delivery](https://www.usb.org/document-library/usb-power-delivery) specifications. PDStack consists of the following main modules:

- **Type-C Manager:** Responsible for detecting a Type-C connection and identifying the type of connection. It uses the configurable Rp/Rd terminations provided by the USBPD block and the internal line state comparators. The Type-C manager implements the state machines defined in **USB Type-C Cable and Connector specification** and provides the following functionalities:

    - **Manage CC terminations**: Applies Rp/Rd terminations according to the port role

    - **Attach detection**: Performs the required debounce and determine the type of device attached

    - **Detach detection**: Monitors the CC line and VBus for detecting a device detach

- **Protocol Layer:** Forms the messages used to communicate between a pair of ports/cable plugs. It is responsible for forming capabilities messages, requests, responses, and acknowledgements. It receives inputs from the policy engine indicating which messages to send and relays the responses back to the policy engine.

- **Policy Engine:** Provides a mechanism to monitor and control the USB Power Delivery system within a particular consumer, provider, or cable plug. It implements the state machines defined in the *USB Power Delivery* specification and contains implementations of all PD atomic message sequences (AMS). It interfaces with the protocol layer for PD message transmission/reception for controlling the reception of message types according conditions such as the current state of the port. It also interfaces with the Type-C manager for error conditions like Type-C error recovery.

- **Device Policy Manager (DPM):** Provides an interface to the application layer to initialize, monitor, and configure the PDStack middleware operation. The DPM provides the following functionality:

    - Initializes the policy engine and Type-C manager

    - Starts the Type-C state machine followed by the policy engine state machine

    - Stops and disables the Type-C port

    - Allows entry/exit from Deep Sleep to achieve low power based on the port status

    - Provides APIs for the application to send PD/Type-C commands

    - Provides event callbacks to the application for application-specific handling

The PDStack library uses a set of callbacks registered by the application to perform board-specific tasks such as turning the consumer power path ON/OFF and identifying the optimal source power profile to be used for charging. In this example, these functions are implemented using the appropriate APIs provided as part of the peripheral driver library (PDL).

The stack also provides notification of various connection and PD policy state changes so that the rest of the system can be configured as required. These events are used by the example application to implement a separate USB battery charging 1.2 sink state machine, which distinguishes between a standard downstream port (SDP), charging downstream port (CDP), and dedicated charging port (DCP).

Legacy charging supports BC 1.2, QC, and Apple charging. On a Type-C attach, both PD and legacy charging state machines are run. If a PD message is received, then legacy charging is disabled. The GPIO connected to LED3 on the board is toggled at different rates to indicate the type of power source.

Sink starts with BC 1.2 detection, if DCP is connected, QC charger detection starts. If QC charger is detected, it requests for highest VBus voltage and starts battery charging. If DCP/CDP is not detected in BC 1.2 primary detection state, Apple charger detection starts.

The application tries to keep the PMG1 MCU device in Deep Sleep, where all clocks are disabled and only limited hardware blocks are enabled, for most of its working time. Interrupts in the USBPD block are configured to detect any changes that happen while the device is in sleep, and wake it up for further processing.

An overvoltage (OV) comparator in the USBPD block is used to detect cases where the power source is supplying incorrect voltage levels, and automatically shut down the power switches to protect the rest of the components on the board.


### Compile-time configurations

The PMG1 MCU USB PD sink application functionality can be customized through a set of compile-time parameters that can be turned ON/OFF through the *config.h* header file.

 Macro name          | Description                           | Allowed values 
 :------------------ | :------------------------------------ | :------------- 
 `CY_PD_SINK_ONLY`     | Specifies that the application supports only the USB PD sink (consumer) role | Should be set to 1u 
 `NO_OF_TYPEC_PORTS`   | Specifies the number of USB-C ports supported | Should be set to 1u 
 `CY_PD_REV3_ENABLE`   | Enables USB PD Revision 3.2 support | 1u or 0u 
 `CY_APP_PD_PDO_SEL_ALGO`     | Specifies the algorithm to be used while selecting the best source capability to power the board | 0u - Pick the source PDO delivering the maximum power <br> 1u – Pick the fixed source PDO delivering the maximum power <br>2u - Pick the fixed source PDO delivering the maximum current<br>3u – Pick the fixed source PDO delivering the maximum voltage 
 `CY_APP_VBUS_FET_CTRL`       | Selects the gate driver to be used to turn the consumer power path ON (applicable only for  CY7110) | 0u - Gate driver which does not support internal pull-up <br> 1u – Gate driver which supports pull-up for faster turn off 
 `BATTERY_CHARGING_ENABLE` | Enables BC 1.2 (CDP/DCP) detection when connected to a non-USB PD power source | 1u or 0u 
 `SNK_STANDBY_FET_SHUTDOWN_ENABLE` | Specifies whether the consumer power path should be disabled while PD contracts are being negotiated | 1u or 0u 
 `SYS_DEEPSLEEP_ENABLE` | Enables device entry into deep sleep mode for power saving when the CPU is idle | 1u or 0u 
 `APP_FW_LED_ENABLE` | Enables toggling of the user LED (LED3) based on the type of power source | 1u or 0u 

<br>


### PDStack library selection

The USB Type-C Connection Manager, USB PD protocol layer, and USB PD device policy engine state machine implementations are provided in the form of pre-compiled libraries as part of the PDStack middleware library.

Multiple variants of the PDStack library with different feature sets are provided; you can choose the appropriate version based on the features required by the target application.

   - **PMG1_PD3_SNK_LITE:** Library with support for USB Type-C sink operation and USB PD Revision 3.2 messaging. This library is chosen by default.

   - **PMG1_PD2_SNK_LITE:** Library with support for USB Type-C sink operation and USB PD Revision 2.0 messaging. Using this library will reduce the flash (code) memory usage by the application.

   - **PMG1_PD3_SNK_EPR:** Library with support for USB Type-C sink EPR operation and USB PD Revision 3.2 messaging.

   - **PMG1_PD3_DRP:** Library with support for USB Type-C dual role operation and USB PD Revision 3.2 messaging.

The library of choice can be selected by editing the *Makefile* in the application folder and changing the value of the `COMPONENTS` variable. To use the PD Revision 2.0 library, replace the `PMG1_PD3_SNK_LITE` reference with `PMG1_PD2_SNK_LITE`.


### USB PD port configuration

The properties of the USB-C port including the port role and the default response to various USB PD messages can be configured using the EZ-PD&trade; Configurator Utility.

These parameters have been set to the appropriate values for a Power Delivery sink application by default. To view or change the configuration, click on the **EZ-PD&trade; Configurator 2.0** item under **Tools** in the **Quick Panel** to launch the configurator.

**Figure 3. USB Type-C port configuration using EZ-PD&trade;  Configurator**

<img src = "images/ezpd_port_info.png" width = "800"/>

<br>

Properties of the USB-C port are configured using the **Port Information** section. Because this application supports only the USB PD sink operation, the **Port Role** must be set as **Sink** and **DRP Toggle** must be disabled. Other parameters such as **Manufacturer Vendor ID** and **Manufacturer Product ID** can be set to your desired values.

The **Source PDO** and **SCEDB Configuration** sections are not applicable for this application because only the sink operation is supported.

**Figure 4. Sink capability configuration using EZ-PD&trade; Configurator**

<img src = "images/ezpd_sink_pdo.png" width = "800"/>

<br>

The power capabilities supported by the application in the sink role are specified using the **Sink PDO** section. See the [USB Power Delivery](https://www.usb.org/document-library/usb-power-delivery) specification for details on how to encode the various sink capabilities. A maximum of seven PDOs can be added using the configurator.

**Figure 5. Extended sink capability configuration using EZ-PD&trade; Configurator**

<img src = "images/ezpd_ext_snk_cap.png" width = "800"/>

<br>

The **SKEDB** section is used to input the extended sink capabilities response that will be sent by the application when queried by the power source. See the Power Delivery specification for details on the extended sink capabilities format.

Once the parameters have been updated as desired, save the configuration and build the application.

For quick verification of the application configurability, disable the **PD Operation** parameter under **Port Information**. When the EZ-PD&trade; PMG1 MCU device is programmed with this modification, you can see that the user LED blinks at a slower rate even when connected to a power source which supports USB Power Delivery.


### Resources and settings

**Table 1. Application resources**

 Resource  |  Alias/object     |    Purpose
 :-------- | :-------------    | :------------
 USBPD     | PD_PORT0          | USBPD block used for PD communication
 LED (BSP) | CYBSP_USER_LED    | User LED to indicate connection state

<br>

### List of application files and their usage

**Table 3. Application files and their usage**

File  | Purpose
:-----| :---------
*config.h*                | Defines macros for the application configuration
*main.c*     | Implements application main function
*pmg1_version.h*                | Defines the application version details

<br>


## Related resources

Resources  | Links
-----------|----------------------------------
Application notes  | [AN232553](https://www.infineon.com/AN232553) – Getting started with EZ-PD&trade; PMG1 MCU on ModusToolbox&trade; <br>  [AN232565](https://www.infineon.com/an232565) – EZ-PD&trade; PMG1 MCU hardware design guidelines and checklist
Code examples  | [Using ModusToolbox&trade;](https://github.com/Infineon/Code-Examples-for-ModusToolbox-Software) on GitHub
Device documentation | [EZ-PD&trade; PMG1 MCU datasheets](https://www.infineon.com/PMG1DS)
Development kits | Select your kits from the [Evaluation Board Finder](https://www.infineon.com/cms/en/design-support/finder-selection-tools/product-finder/evaluation-board) page.
Libraries on GitHub | [mtb-pdl-cat2](https://github.com/Infineon/mtb-pdl-cat2) – Peripheral Driver Library (PDL) and documents.
Middleware on GitHub  | [pdstack](https://github.com/Infineon/pdstack) – PDStack middleware library and docs <br> [pdutils](https://github.com/Infineon/pdutils) – PDUtils middleware library and docs <br>[pmg-app-common](https://github.com/Infineon/pmg-app-common) – PMG Application Common middleware library and docs
Tools  | [ModusToolbox&trade;](https://www.infineon.com/modustoolbox) – ModusToolbox&trade; software is a collection of easy-to-use libraries and tools enabling rapid development with Infineon MCUs for applications ranging from wireless and cloud-connected systems, edge AI/ML, embedded sense and control, to wired USB connectivity using PSOC&trade; Industrial/IoT MCUs, AIROC&trade; Wi-Fi and Bluetooth&reg; connectivity devices, XMC&trade; Industrial MCUs, and EZ-USB&trade;/EZ-PD&trade; wired connectivity controllers. ModusToolbox&trade; incorporates a comprehensive set of BSPs, HAL, libraries, configuration tools, and provides support for industry-standard IDEs to fast-track your embedded application development.

<br>


## Other resources

Infineon provides a wealth of data at [www.infineon.com](https://www.infineon.com) to help you select the right device, and quickly and effectively integrate it into your design.


## Document history

Document Title: *CE231856* – *EZ-PD&trade; PMG1 MCU: USB PD Sink*

 Version | Description of change
 ------- | ---------------------
 1.0.0   | New code example
 2.0.0   | Switched to default BSP from custom BSP
 2.1.0   | PD 2.0 Compliance & Build Error fix
 3.0.0   | Updated to support ModusToolbox&trade; v3.0 and BSPs v3.X. This version is not backward compatible with previous versions of ModusToolbox&trade;
 3.1.0   | Added structured VDM minor version support
 3.2.0   | Minor version update
 4.0.0   | Updated to use PmgAppCommon middleware
<br>



All referenced product or service names and trademarks are the property of their respective owners.

The Bluetooth&reg; word mark and logos are registered trademarks owned by Bluetooth SIG, Inc., and any use of such marks by Infineon is under license.


---------------------------------------------------------

© Cypress Semiconductor Corporation, 2020-2024. This document is the property of Cypress Semiconductor Corporation, an Infineon Technologies company, and its affiliates ("Cypress").  This document, including any software or firmware included or referenced in this document ("Software"), is owned by Cypress under the intellectual property laws and treaties of the United States and other countries worldwide.  Cypress reserves all rights under such laws and treaties and does not, except as specifically stated in this paragraph, grant any license under its patents, copyrights, trademarks, or other intellectual property rights.  If the Software is not accompanied by a license agreement and you do not otherwise have a written agreement with Cypress governing the use of the Software, then Cypress hereby grants you a personal, non-exclusive, nontransferable license (without the right to sublicense) (1) under its copyright rights in the Software (a) for Software provided in source code form, to modify and reproduce the Software solely for use with Cypress hardware products, only internally within your organization, and (b) to distribute the Software in binary code form externally to end users (either directly or indirectly through resellers and distributors), solely for use on Cypress hardware product units, and (2) under those claims of Cypress's patents that are infringed by the Software (as provided by Cypress, unmodified) to make, use, distribute, and import the Software solely for use with Cypress hardware products.  Any other use, reproduction, modification, translation, or compilation of the Software is prohibited.
<br>
TO THE EXTENT PERMITTED BY APPLICABLE LAW, CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH REGARD TO THIS DOCUMENT OR ANY SOFTWARE OR ACCOMPANYING HARDWARE, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  No computing device can be absolutely secure.  Therefore, despite security measures implemented in Cypress hardware or software products, Cypress shall have no liability arising out of any security breach, such as unauthorized access to or use of a Cypress product. CYPRESS DOES NOT REPRESENT, WARRANT, OR GUARANTEE THAT CYPRESS PRODUCTS, OR SYSTEMS CREATED USING CYPRESS PRODUCTS, WILL BE FREE FROM CORRUPTION, ATTACK, VIRUSES, INTERFERENCE, HACKING, DATA LOSS OR THEFT, OR OTHER SECURITY INTRUSION (collectively, "Security Breach").  Cypress disclaims any liability relating to any Security Breach, and you shall and hereby do release Cypress from any claim, damage, or other liability arising from any Security Breach.  In addition, the products described in these materials may contain design defects or errors known as errata which may cause the product to deviate from published specifications. To the extent permitted by applicable law, Cypress reserves the right to make changes to this document without further notice. Cypress does not assume any liability arising out of the application or use of any product or circuit described in this document. Any information provided in this document, including any sample design information or programming code, is provided only for reference purposes.  It is the responsibility of the user of this document to properly design, program, and test the functionality and safety of any application made of this information and any resulting product.  "High-Risk Device" means any device or system whose failure could cause personal injury, death, or property damage.  Examples of High-Risk Devices are weapons, nuclear installations, surgical implants, and other medical devices.  "Critical Component" means any component of a High-Risk Device whose failure to perform can be reasonably expected to cause, directly or indirectly, the failure of the High-Risk Device, or to affect its safety or effectiveness.  Cypress is not liable, in whole or in part, and you shall and hereby do release Cypress from any claim, damage, or other liability arising from any use of a Cypress product as a Critical Component in a High-Risk Device. You shall indemnify and hold Cypress, including its affiliates, and its directors, officers, employees, agents, distributors, and assigns harmless from and against all claims, costs, damages, and expenses, arising out of any claim, including claims for product liability, personal injury or death, or property damage arising from any use of a Cypress product as a Critical Component in a High-Risk Device. Cypress products are not intended or authorized for use as a Critical Component in any High-Risk Device except to the limited extent that (i) Cypress's published data sheet for the product explicitly states Cypress has qualified the product for use in a specific High-Risk Device, or (ii) Cypress has given you advance written authorization to use the product as a Critical Component in the specific High-Risk Device and you have signed a separate indemnification agreement.
<br>
Cypress, the Cypress logo, and combinations thereof, ModusToolbox, PSoC, CAPSENSE, EZ-USB, F-RAM, and TRAVEO are trademarks or registered trademarks of Cypress or a subsidiary of Cypress in the United States or in other countries. For a more complete list of Cypress trademarks, visit www.infineon.com. Other names and brands may be claimed as property of their respective owners.
