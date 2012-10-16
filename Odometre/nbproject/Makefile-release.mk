#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-release.mk)" "nbproject/Makefile-local-release.mk"
include nbproject/Makefile-local-release.mk
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=release
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/Board/Board.o ${OBJECTDIR}/Board/FSIO.o ${OBJECTDIR}/Board/SD-SPI.o ${OBJECTDIR}/Board/serialComm.o ${OBJECTDIR}/Board/TimeDelay.o ${OBJECTDIR}/Board/Timers.o ${OBJECTDIR}/Board/TouchScreen.o ${OBJECTDIR}/Board/TouchScreenResistive.o ${OBJECTDIR}/Graphics/ArialBold16.o ${OBJECTDIR}/Graphics/GroupBox.o ${OBJECTDIR}/Graphics/DigitalMeter.o ${OBJECTDIR}/Graphics/Button.o ${OBJECTDIR}/Graphics/CheckBox.o ${OBJECTDIR}/Graphics/ListBox.o ${OBJECTDIR}/Graphics/AnalogClock.o ${OBJECTDIR}/Graphics/EditBox.o ${OBJECTDIR}/Graphics/Chart.o ${OBJECTDIR}/Graphics/Meter.o ${OBJECTDIR}/Graphics/Picture.o ${OBJECTDIR}/Graphics/ProgressBar.o ${OBJECTDIR}/Graphics/RadioButton.o ${OBJECTDIR}/Graphics/RoundDial.o ${OBJECTDIR}/Graphics/Slider.o ${OBJECTDIR}/Graphics/StaticText.o ${OBJECTDIR}/Graphics/TextEntry.o ${OBJECTDIR}/Graphics/Window.o ${OBJECTDIR}/Graphics/GOL.o ${OBJECTDIR}/Graphics/GOLFontDefault.o ${OBJECTDIR}/Graphics/GOLSchemeDefault.o ${OBJECTDIR}/Graphics/mchpGfxDrv.o ${OBJECTDIR}/Graphics/Palette.o ${OBJECTDIR}/Graphics/Primitive.o ${OBJECTDIR}/Graphics/goodtimes72.o ${OBJECTDIR}/Graphics/goodtimes36.o ${OBJECTDIR}/main.o ${OBJECTDIR}/ArcData.o
POSSIBLE_DEPFILES=${OBJECTDIR}/Board/Board.o.d ${OBJECTDIR}/Board/FSIO.o.d ${OBJECTDIR}/Board/SD-SPI.o.d ${OBJECTDIR}/Board/serialComm.o.d ${OBJECTDIR}/Board/TimeDelay.o.d ${OBJECTDIR}/Board/Timers.o.d ${OBJECTDIR}/Board/TouchScreen.o.d ${OBJECTDIR}/Board/TouchScreenResistive.o.d ${OBJECTDIR}/Graphics/ArialBold16.o.d ${OBJECTDIR}/Graphics/GroupBox.o.d ${OBJECTDIR}/Graphics/DigitalMeter.o.d ${OBJECTDIR}/Graphics/Button.o.d ${OBJECTDIR}/Graphics/CheckBox.o.d ${OBJECTDIR}/Graphics/ListBox.o.d ${OBJECTDIR}/Graphics/AnalogClock.o.d ${OBJECTDIR}/Graphics/EditBox.o.d ${OBJECTDIR}/Graphics/Chart.o.d ${OBJECTDIR}/Graphics/Meter.o.d ${OBJECTDIR}/Graphics/Picture.o.d ${OBJECTDIR}/Graphics/ProgressBar.o.d ${OBJECTDIR}/Graphics/RadioButton.o.d ${OBJECTDIR}/Graphics/RoundDial.o.d ${OBJECTDIR}/Graphics/Slider.o.d ${OBJECTDIR}/Graphics/StaticText.o.d ${OBJECTDIR}/Graphics/TextEntry.o.d ${OBJECTDIR}/Graphics/Window.o.d ${OBJECTDIR}/Graphics/GOL.o.d ${OBJECTDIR}/Graphics/GOLFontDefault.o.d ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d ${OBJECTDIR}/Graphics/mchpGfxDrv.o.d ${OBJECTDIR}/Graphics/Palette.o.d ${OBJECTDIR}/Graphics/Primitive.o.d ${OBJECTDIR}/Graphics/goodtimes72.o.d ${OBJECTDIR}/Graphics/goodtimes36.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/ArcData.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/Board/Board.o ${OBJECTDIR}/Board/FSIO.o ${OBJECTDIR}/Board/SD-SPI.o ${OBJECTDIR}/Board/serialComm.o ${OBJECTDIR}/Board/TimeDelay.o ${OBJECTDIR}/Board/Timers.o ${OBJECTDIR}/Board/TouchScreen.o ${OBJECTDIR}/Board/TouchScreenResistive.o ${OBJECTDIR}/Graphics/ArialBold16.o ${OBJECTDIR}/Graphics/GroupBox.o ${OBJECTDIR}/Graphics/DigitalMeter.o ${OBJECTDIR}/Graphics/Button.o ${OBJECTDIR}/Graphics/CheckBox.o ${OBJECTDIR}/Graphics/ListBox.o ${OBJECTDIR}/Graphics/AnalogClock.o ${OBJECTDIR}/Graphics/EditBox.o ${OBJECTDIR}/Graphics/Chart.o ${OBJECTDIR}/Graphics/Meter.o ${OBJECTDIR}/Graphics/Picture.o ${OBJECTDIR}/Graphics/ProgressBar.o ${OBJECTDIR}/Graphics/RadioButton.o ${OBJECTDIR}/Graphics/RoundDial.o ${OBJECTDIR}/Graphics/Slider.o ${OBJECTDIR}/Graphics/StaticText.o ${OBJECTDIR}/Graphics/TextEntry.o ${OBJECTDIR}/Graphics/Window.o ${OBJECTDIR}/Graphics/GOL.o ${OBJECTDIR}/Graphics/GOLFontDefault.o ${OBJECTDIR}/Graphics/GOLSchemeDefault.o ${OBJECTDIR}/Graphics/mchpGfxDrv.o ${OBJECTDIR}/Graphics/Palette.o ${OBJECTDIR}/Graphics/Primitive.o ${OBJECTDIR}/Graphics/goodtimes72.o ${OBJECTDIR}/Graphics/goodtimes36.o ${OBJECTDIR}/main.o ${OBJECTDIR}/ArcData.o


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
	${MAKE} ${MAKE_OPTIONS} -f nbproject/Makefile-release.mk dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=24FJ256DA210
MP_LINKER_FILE_OPTION=,--script="app_p24FJ256DA210.gld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/Board/Board.o: Board/Board.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Board.o.d 
	@${RM} ${OBJECTDIR}/Board/Board.o.ok ${OBJECTDIR}/Board/Board.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Board.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/Board.o.d" -o ${OBJECTDIR}/Board/Board.o Board/Board.c    
	
${OBJECTDIR}/Board/FSIO.o: Board/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.d 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.ok ${OBJECTDIR}/Board/FSIO.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/FSIO.o.d" -o ${OBJECTDIR}/Board/FSIO.o Board/FSIO.c    
	
${OBJECTDIR}/Board/SD-SPI.o: Board/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.ok ${OBJECTDIR}/Board/SD-SPI.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/SD-SPI.o.d" -o ${OBJECTDIR}/Board/SD-SPI.o Board/SD-SPI.c    
	
${OBJECTDIR}/Board/serialComm.o: Board/serialComm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/serialComm.o.d 
	@${RM} ${OBJECTDIR}/Board/serialComm.o.ok ${OBJECTDIR}/Board/serialComm.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/serialComm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/serialComm.o.d" -o ${OBJECTDIR}/Board/serialComm.o Board/serialComm.c    
	
${OBJECTDIR}/Board/TimeDelay.o: Board/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.ok ${OBJECTDIR}/Board/TimeDelay.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TimeDelay.o.d" -o ${OBJECTDIR}/Board/TimeDelay.o Board/TimeDelay.c    
	
${OBJECTDIR}/Board/Timers.o: Board/Timers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Timers.o.d 
	@${RM} ${OBJECTDIR}/Board/Timers.o.ok ${OBJECTDIR}/Board/Timers.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Timers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/Timers.o.d" -o ${OBJECTDIR}/Board/Timers.o Board/Timers.c    
	
${OBJECTDIR}/Board/TouchScreen.o: Board/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/Board/TouchScreen.o.ok ${OBJECTDIR}/Board/TouchScreen.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TouchScreen.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TouchScreen.o.d" -o ${OBJECTDIR}/Board/TouchScreen.o Board/TouchScreen.c    
	
${OBJECTDIR}/Board/TouchScreenResistive.o: Board/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/Board/TouchScreenResistive.o.ok ${OBJECTDIR}/Board/TouchScreenResistive.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TouchScreenResistive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TouchScreenResistive.o.d" -o ${OBJECTDIR}/Board/TouchScreenResistive.o Board/TouchScreenResistive.c    
	
${OBJECTDIR}/Graphics/ArialBold16.o: Graphics/ArialBold16.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ArialBold16.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ArialBold16.o.ok ${OBJECTDIR}/Graphics/ArialBold16.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ArialBold16.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ArialBold16.o.d" -o ${OBJECTDIR}/Graphics/ArialBold16.o Graphics/ArialBold16.c    
	
${OBJECTDIR}/Graphics/GroupBox.o: Graphics/GroupBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GroupBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GroupBox.o.ok ${OBJECTDIR}/Graphics/GroupBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GroupBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GroupBox.o.d" -o ${OBJECTDIR}/Graphics/GroupBox.o Graphics/GroupBox.c    
	
${OBJECTDIR}/Graphics/DigitalMeter.o: Graphics/DigitalMeter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/DigitalMeter.o.d 
	@${RM} ${OBJECTDIR}/Graphics/DigitalMeter.o.ok ${OBJECTDIR}/Graphics/DigitalMeter.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/DigitalMeter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/DigitalMeter.o.d" -o ${OBJECTDIR}/Graphics/DigitalMeter.o Graphics/DigitalMeter.c    
	
${OBJECTDIR}/Graphics/Button.o: Graphics/Button.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Button.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Button.o.ok ${OBJECTDIR}/Graphics/Button.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Button.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Button.o.d" -o ${OBJECTDIR}/Graphics/Button.o Graphics/Button.c    
	
${OBJECTDIR}/Graphics/CheckBox.o: Graphics/CheckBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/CheckBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/CheckBox.o.ok ${OBJECTDIR}/Graphics/CheckBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/CheckBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/CheckBox.o.d" -o ${OBJECTDIR}/Graphics/CheckBox.o Graphics/CheckBox.c    
	
${OBJECTDIR}/Graphics/ListBox.o: Graphics/ListBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ListBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ListBox.o.ok ${OBJECTDIR}/Graphics/ListBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ListBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ListBox.o.d" -o ${OBJECTDIR}/Graphics/ListBox.o Graphics/ListBox.c    
	
${OBJECTDIR}/Graphics/AnalogClock.o: Graphics/AnalogClock.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/AnalogClock.o.d 
	@${RM} ${OBJECTDIR}/Graphics/AnalogClock.o.ok ${OBJECTDIR}/Graphics/AnalogClock.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/AnalogClock.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/AnalogClock.o.d" -o ${OBJECTDIR}/Graphics/AnalogClock.o Graphics/AnalogClock.c    
	
${OBJECTDIR}/Graphics/EditBox.o: Graphics/EditBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/EditBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/EditBox.o.ok ${OBJECTDIR}/Graphics/EditBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/EditBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/EditBox.o.d" -o ${OBJECTDIR}/Graphics/EditBox.o Graphics/EditBox.c    
	
${OBJECTDIR}/Graphics/Chart.o: Graphics/Chart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Chart.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Chart.o.ok ${OBJECTDIR}/Graphics/Chart.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Chart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Chart.o.d" -o ${OBJECTDIR}/Graphics/Chart.o Graphics/Chart.c    
	
${OBJECTDIR}/Graphics/Meter.o: Graphics/Meter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Meter.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Meter.o.ok ${OBJECTDIR}/Graphics/Meter.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Meter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Meter.o.d" -o ${OBJECTDIR}/Graphics/Meter.o Graphics/Meter.c    
	
${OBJECTDIR}/Graphics/Picture.o: Graphics/Picture.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Picture.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Picture.o.ok ${OBJECTDIR}/Graphics/Picture.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Picture.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Picture.o.d" -o ${OBJECTDIR}/Graphics/Picture.o Graphics/Picture.c    
	
${OBJECTDIR}/Graphics/ProgressBar.o: Graphics/ProgressBar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ProgressBar.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ProgressBar.o.ok ${OBJECTDIR}/Graphics/ProgressBar.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ProgressBar.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ProgressBar.o.d" -o ${OBJECTDIR}/Graphics/ProgressBar.o Graphics/ProgressBar.c    
	
${OBJECTDIR}/Graphics/RadioButton.o: Graphics/RadioButton.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/RadioButton.o.d 
	@${RM} ${OBJECTDIR}/Graphics/RadioButton.o.ok ${OBJECTDIR}/Graphics/RadioButton.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/RadioButton.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/RadioButton.o.d" -o ${OBJECTDIR}/Graphics/RadioButton.o Graphics/RadioButton.c    
	
${OBJECTDIR}/Graphics/RoundDial.o: Graphics/RoundDial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/RoundDial.o.d 
	@${RM} ${OBJECTDIR}/Graphics/RoundDial.o.ok ${OBJECTDIR}/Graphics/RoundDial.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/RoundDial.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/RoundDial.o.d" -o ${OBJECTDIR}/Graphics/RoundDial.o Graphics/RoundDial.c    
	
${OBJECTDIR}/Graphics/Slider.o: Graphics/Slider.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Slider.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Slider.o.ok ${OBJECTDIR}/Graphics/Slider.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Slider.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Slider.o.d" -o ${OBJECTDIR}/Graphics/Slider.o Graphics/Slider.c    
	
${OBJECTDIR}/Graphics/StaticText.o: Graphics/StaticText.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/StaticText.o.d 
	@${RM} ${OBJECTDIR}/Graphics/StaticText.o.ok ${OBJECTDIR}/Graphics/StaticText.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/StaticText.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/StaticText.o.d" -o ${OBJECTDIR}/Graphics/StaticText.o Graphics/StaticText.c    
	
${OBJECTDIR}/Graphics/TextEntry.o: Graphics/TextEntry.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/TextEntry.o.d 
	@${RM} ${OBJECTDIR}/Graphics/TextEntry.o.ok ${OBJECTDIR}/Graphics/TextEntry.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/TextEntry.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/TextEntry.o.d" -o ${OBJECTDIR}/Graphics/TextEntry.o Graphics/TextEntry.c    
	
${OBJECTDIR}/Graphics/Window.o: Graphics/Window.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Window.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Window.o.ok ${OBJECTDIR}/Graphics/Window.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Window.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Window.o.d" -o ${OBJECTDIR}/Graphics/Window.o Graphics/Window.c    
	
${OBJECTDIR}/Graphics/GOL.o: Graphics/GOL.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOL.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOL.o.ok ${OBJECTDIR}/Graphics/GOL.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOL.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOL.o.d" -o ${OBJECTDIR}/Graphics/GOL.o Graphics/GOL.c    
	
${OBJECTDIR}/Graphics/GOLFontDefault.o: Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOLFontDefault.o.ok ${OBJECTDIR}/Graphics/GOLFontDefault.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOLFontDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOLFontDefault.o.d" -o ${OBJECTDIR}/Graphics/GOLFontDefault.o Graphics/GOLFontDefault.c    
	
${OBJECTDIR}/Graphics/GOLSchemeDefault.o: Graphics/GOLSchemeDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.ok ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d" -o ${OBJECTDIR}/Graphics/GOLSchemeDefault.o Graphics/GOLSchemeDefault.c    
	
${OBJECTDIR}/Graphics/mchpGfxDrv.o: Graphics/mchpGfxDrv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/mchpGfxDrv.o.d 
	@${RM} ${OBJECTDIR}/Graphics/mchpGfxDrv.o.ok ${OBJECTDIR}/Graphics/mchpGfxDrv.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/mchpGfxDrv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/mchpGfxDrv.o.d" -o ${OBJECTDIR}/Graphics/mchpGfxDrv.o Graphics/mchpGfxDrv.c    
	
${OBJECTDIR}/Graphics/Palette.o: Graphics/Palette.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Palette.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Palette.o.ok ${OBJECTDIR}/Graphics/Palette.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Palette.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Palette.o.d" -o ${OBJECTDIR}/Graphics/Palette.o Graphics/Palette.c    
	
${OBJECTDIR}/Graphics/Primitive.o: Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Primitive.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Primitive.o.ok ${OBJECTDIR}/Graphics/Primitive.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Primitive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Primitive.o.d" -o ${OBJECTDIR}/Graphics/Primitive.o Graphics/Primitive.c    
	
${OBJECTDIR}/Graphics/goodtimes72.o: Graphics/goodtimes72.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes72.o.d 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes72.o.ok ${OBJECTDIR}/Graphics/goodtimes72.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/goodtimes72.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/goodtimes72.o.d" -o ${OBJECTDIR}/Graphics/goodtimes72.o Graphics/goodtimes72.c    
	
${OBJECTDIR}/Graphics/goodtimes36.o: Graphics/goodtimes36.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes36.o.d 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes36.o.ok ${OBJECTDIR}/Graphics/goodtimes36.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/goodtimes36.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/goodtimes36.o.d" -o ${OBJECTDIR}/Graphics/goodtimes36.o Graphics/goodtimes36.c    
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
${OBJECTDIR}/ArcData.o: ArcData.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/ArcData.o.d 
	@${RM} ${OBJECTDIR}/ArcData.o.ok ${OBJECTDIR}/ArcData.o.err 
	@${FIXDEPS} "${OBJECTDIR}/ArcData.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/ArcData.o.d" -o ${OBJECTDIR}/ArcData.o ArcData.c    
	
else
${OBJECTDIR}/Board/Board.o: Board/Board.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Board.o.d 
	@${RM} ${OBJECTDIR}/Board/Board.o.ok ${OBJECTDIR}/Board/Board.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Board.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/Board.o.d" -o ${OBJECTDIR}/Board/Board.o Board/Board.c    
	
${OBJECTDIR}/Board/FSIO.o: Board/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.d 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.ok ${OBJECTDIR}/Board/FSIO.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/FSIO.o.d" -o ${OBJECTDIR}/Board/FSIO.o Board/FSIO.c    
	
${OBJECTDIR}/Board/SD-SPI.o: Board/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.ok ${OBJECTDIR}/Board/SD-SPI.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/SD-SPI.o.d" -o ${OBJECTDIR}/Board/SD-SPI.o Board/SD-SPI.c    
	
${OBJECTDIR}/Board/serialComm.o: Board/serialComm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/serialComm.o.d 
	@${RM} ${OBJECTDIR}/Board/serialComm.o.ok ${OBJECTDIR}/Board/serialComm.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/serialComm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/serialComm.o.d" -o ${OBJECTDIR}/Board/serialComm.o Board/serialComm.c    
	
${OBJECTDIR}/Board/TimeDelay.o: Board/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.ok ${OBJECTDIR}/Board/TimeDelay.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TimeDelay.o.d" -o ${OBJECTDIR}/Board/TimeDelay.o Board/TimeDelay.c    
	
${OBJECTDIR}/Board/Timers.o: Board/Timers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Timers.o.d 
	@${RM} ${OBJECTDIR}/Board/Timers.o.ok ${OBJECTDIR}/Board/Timers.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Timers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/Timers.o.d" -o ${OBJECTDIR}/Board/Timers.o Board/Timers.c    
	
${OBJECTDIR}/Board/TouchScreen.o: Board/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/Board/TouchScreen.o.ok ${OBJECTDIR}/Board/TouchScreen.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TouchScreen.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TouchScreen.o.d" -o ${OBJECTDIR}/Board/TouchScreen.o Board/TouchScreen.c    
	
${OBJECTDIR}/Board/TouchScreenResistive.o: Board/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/Board/TouchScreenResistive.o.ok ${OBJECTDIR}/Board/TouchScreenResistive.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TouchScreenResistive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Board/TouchScreenResistive.o.d" -o ${OBJECTDIR}/Board/TouchScreenResistive.o Board/TouchScreenResistive.c    
	
${OBJECTDIR}/Graphics/ArialBold16.o: Graphics/ArialBold16.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ArialBold16.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ArialBold16.o.ok ${OBJECTDIR}/Graphics/ArialBold16.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ArialBold16.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ArialBold16.o.d" -o ${OBJECTDIR}/Graphics/ArialBold16.o Graphics/ArialBold16.c    
	
${OBJECTDIR}/Graphics/GroupBox.o: Graphics/GroupBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GroupBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GroupBox.o.ok ${OBJECTDIR}/Graphics/GroupBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GroupBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GroupBox.o.d" -o ${OBJECTDIR}/Graphics/GroupBox.o Graphics/GroupBox.c    
	
${OBJECTDIR}/Graphics/DigitalMeter.o: Graphics/DigitalMeter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/DigitalMeter.o.d 
	@${RM} ${OBJECTDIR}/Graphics/DigitalMeter.o.ok ${OBJECTDIR}/Graphics/DigitalMeter.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/DigitalMeter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/DigitalMeter.o.d" -o ${OBJECTDIR}/Graphics/DigitalMeter.o Graphics/DigitalMeter.c    
	
${OBJECTDIR}/Graphics/Button.o: Graphics/Button.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Button.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Button.o.ok ${OBJECTDIR}/Graphics/Button.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Button.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Button.o.d" -o ${OBJECTDIR}/Graphics/Button.o Graphics/Button.c    
	
${OBJECTDIR}/Graphics/CheckBox.o: Graphics/CheckBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/CheckBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/CheckBox.o.ok ${OBJECTDIR}/Graphics/CheckBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/CheckBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/CheckBox.o.d" -o ${OBJECTDIR}/Graphics/CheckBox.o Graphics/CheckBox.c    
	
${OBJECTDIR}/Graphics/ListBox.o: Graphics/ListBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ListBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ListBox.o.ok ${OBJECTDIR}/Graphics/ListBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ListBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ListBox.o.d" -o ${OBJECTDIR}/Graphics/ListBox.o Graphics/ListBox.c    
	
${OBJECTDIR}/Graphics/AnalogClock.o: Graphics/AnalogClock.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/AnalogClock.o.d 
	@${RM} ${OBJECTDIR}/Graphics/AnalogClock.o.ok ${OBJECTDIR}/Graphics/AnalogClock.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/AnalogClock.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/AnalogClock.o.d" -o ${OBJECTDIR}/Graphics/AnalogClock.o Graphics/AnalogClock.c    
	
${OBJECTDIR}/Graphics/EditBox.o: Graphics/EditBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/EditBox.o.d 
	@${RM} ${OBJECTDIR}/Graphics/EditBox.o.ok ${OBJECTDIR}/Graphics/EditBox.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/EditBox.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/EditBox.o.d" -o ${OBJECTDIR}/Graphics/EditBox.o Graphics/EditBox.c    
	
${OBJECTDIR}/Graphics/Chart.o: Graphics/Chart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Chart.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Chart.o.ok ${OBJECTDIR}/Graphics/Chart.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Chart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Chart.o.d" -o ${OBJECTDIR}/Graphics/Chart.o Graphics/Chart.c    
	
${OBJECTDIR}/Graphics/Meter.o: Graphics/Meter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Meter.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Meter.o.ok ${OBJECTDIR}/Graphics/Meter.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Meter.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Meter.o.d" -o ${OBJECTDIR}/Graphics/Meter.o Graphics/Meter.c    
	
${OBJECTDIR}/Graphics/Picture.o: Graphics/Picture.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Picture.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Picture.o.ok ${OBJECTDIR}/Graphics/Picture.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Picture.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Picture.o.d" -o ${OBJECTDIR}/Graphics/Picture.o Graphics/Picture.c    
	
${OBJECTDIR}/Graphics/ProgressBar.o: Graphics/ProgressBar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/ProgressBar.o.d 
	@${RM} ${OBJECTDIR}/Graphics/ProgressBar.o.ok ${OBJECTDIR}/Graphics/ProgressBar.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/ProgressBar.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/ProgressBar.o.d" -o ${OBJECTDIR}/Graphics/ProgressBar.o Graphics/ProgressBar.c    
	
${OBJECTDIR}/Graphics/RadioButton.o: Graphics/RadioButton.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/RadioButton.o.d 
	@${RM} ${OBJECTDIR}/Graphics/RadioButton.o.ok ${OBJECTDIR}/Graphics/RadioButton.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/RadioButton.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/RadioButton.o.d" -o ${OBJECTDIR}/Graphics/RadioButton.o Graphics/RadioButton.c    
	
${OBJECTDIR}/Graphics/RoundDial.o: Graphics/RoundDial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/RoundDial.o.d 
	@${RM} ${OBJECTDIR}/Graphics/RoundDial.o.ok ${OBJECTDIR}/Graphics/RoundDial.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/RoundDial.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/RoundDial.o.d" -o ${OBJECTDIR}/Graphics/RoundDial.o Graphics/RoundDial.c    
	
${OBJECTDIR}/Graphics/Slider.o: Graphics/Slider.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Slider.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Slider.o.ok ${OBJECTDIR}/Graphics/Slider.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Slider.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Slider.o.d" -o ${OBJECTDIR}/Graphics/Slider.o Graphics/Slider.c    
	
${OBJECTDIR}/Graphics/StaticText.o: Graphics/StaticText.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/StaticText.o.d 
	@${RM} ${OBJECTDIR}/Graphics/StaticText.o.ok ${OBJECTDIR}/Graphics/StaticText.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/StaticText.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/StaticText.o.d" -o ${OBJECTDIR}/Graphics/StaticText.o Graphics/StaticText.c    
	
${OBJECTDIR}/Graphics/TextEntry.o: Graphics/TextEntry.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/TextEntry.o.d 
	@${RM} ${OBJECTDIR}/Graphics/TextEntry.o.ok ${OBJECTDIR}/Graphics/TextEntry.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/TextEntry.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/TextEntry.o.d" -o ${OBJECTDIR}/Graphics/TextEntry.o Graphics/TextEntry.c    
	
${OBJECTDIR}/Graphics/Window.o: Graphics/Window.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Window.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Window.o.ok ${OBJECTDIR}/Graphics/Window.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Window.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Window.o.d" -o ${OBJECTDIR}/Graphics/Window.o Graphics/Window.c    
	
${OBJECTDIR}/Graphics/GOL.o: Graphics/GOL.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOL.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOL.o.ok ${OBJECTDIR}/Graphics/GOL.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOL.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOL.o.d" -o ${OBJECTDIR}/Graphics/GOL.o Graphics/GOL.c    
	
${OBJECTDIR}/Graphics/GOLFontDefault.o: Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOLFontDefault.o.ok ${OBJECTDIR}/Graphics/GOLFontDefault.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOLFontDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOLFontDefault.o.d" -o ${OBJECTDIR}/Graphics/GOLFontDefault.o Graphics/GOLFontDefault.c    
	
${OBJECTDIR}/Graphics/GOLSchemeDefault.o: Graphics/GOLSchemeDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d 
	@${RM} ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.ok ${OBJECTDIR}/Graphics/GOLSchemeDefault.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/GOLSchemeDefault.o.d" -o ${OBJECTDIR}/Graphics/GOLSchemeDefault.o Graphics/GOLSchemeDefault.c    
	
${OBJECTDIR}/Graphics/mchpGfxDrv.o: Graphics/mchpGfxDrv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/mchpGfxDrv.o.d 
	@${RM} ${OBJECTDIR}/Graphics/mchpGfxDrv.o.ok ${OBJECTDIR}/Graphics/mchpGfxDrv.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/mchpGfxDrv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/mchpGfxDrv.o.d" -o ${OBJECTDIR}/Graphics/mchpGfxDrv.o Graphics/mchpGfxDrv.c    
	
${OBJECTDIR}/Graphics/Palette.o: Graphics/Palette.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Palette.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Palette.o.ok ${OBJECTDIR}/Graphics/Palette.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Palette.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Palette.o.d" -o ${OBJECTDIR}/Graphics/Palette.o Graphics/Palette.c    
	
${OBJECTDIR}/Graphics/Primitive.o: Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/Primitive.o.d 
	@${RM} ${OBJECTDIR}/Graphics/Primitive.o.ok ${OBJECTDIR}/Graphics/Primitive.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/Primitive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/Primitive.o.d" -o ${OBJECTDIR}/Graphics/Primitive.o Graphics/Primitive.c    
	
${OBJECTDIR}/Graphics/goodtimes72.o: Graphics/goodtimes72.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes72.o.d 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes72.o.ok ${OBJECTDIR}/Graphics/goodtimes72.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/goodtimes72.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/goodtimes72.o.d" -o ${OBJECTDIR}/Graphics/goodtimes72.o Graphics/goodtimes72.c    
	
${OBJECTDIR}/Graphics/goodtimes36.o: Graphics/goodtimes36.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Graphics 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes36.o.d 
	@${RM} ${OBJECTDIR}/Graphics/goodtimes36.o.ok ${OBJECTDIR}/Graphics/goodtimes36.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Graphics/goodtimes36.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/Graphics/goodtimes36.o.d" -o ${OBJECTDIR}/Graphics/goodtimes36.o Graphics/goodtimes36.c    
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
${OBJECTDIR}/ArcData.o: ArcData.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/ArcData.o.d 
	@${RM} ${OBJECTDIR}/ArcData.o.ok ${OBJECTDIR}/ArcData.o.err 
	@${FIXDEPS} "${OBJECTDIR}/ArcData.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -g -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__RELEASE -I"F:/SerescoDevKit/SerescoDemo.X/includes" -I"F:/Microchip Solutions v2012-04-03/Microchip" -I".." -mlarge-code -mlarge-data -MMD -MF "${OBJECTDIR}/ArcData.o.d" -o ${OBJECTDIR}/ArcData.o ArcData.c    
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -o dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,--heap=14000,-Map="mapfile.txt"$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__ICD2RAM=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1
else
dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,--heap=14000,-Map="mapfile.txt"$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION)
	${MP_CC_DIR}\\pic30-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Odometre.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -omf=elf
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/release
	${RM} -r dist/release

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
