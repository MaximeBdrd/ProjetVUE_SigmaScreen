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
ifeq "$(wildcard nbproject/Makefile-local-debug.mk)" "nbproject/Makefile-local-debug.mk"
include nbproject/Makefile-local-debug.mk
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=debug
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/Board/Board.o ${OBJECTDIR}/Board/FSIO.o ${OBJECTDIR}/Board/SD-SPI.o ${OBJECTDIR}/Board/Bootloader.o ${OBJECTDIR}/Board/TimeDelay.o ${OBJECTDIR}/main.o
POSSIBLE_DEPFILES=${OBJECTDIR}/Board/Board.o.d ${OBJECTDIR}/Board/FSIO.o.d ${OBJECTDIR}/Board/SD-SPI.o.d ${OBJECTDIR}/Board/Bootloader.o.d ${OBJECTDIR}/Board/TimeDelay.o.d ${OBJECTDIR}/main.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/Board/Board.o ${OBJECTDIR}/Board/FSIO.o ${OBJECTDIR}/Board/SD-SPI.o ${OBJECTDIR}/Board/Bootloader.o ${OBJECTDIR}/Board/TimeDelay.o ${OBJECTDIR}/main.o


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
	${MAKE} ${MAKE_OPTIONS} -f nbproject/Makefile-debug.mk dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=24FJ256DA210
MP_LINKER_FILE_OPTION=,--script="boot_p24FJ256DA210.gld"
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
	@${FIXDEPS} "${OBJECTDIR}/Board/Board.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/Board.o.d" -o ${OBJECTDIR}/Board/Board.o Board/Board.c    
	
${OBJECTDIR}/Board/FSIO.o: Board/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.d 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.ok ${OBJECTDIR}/Board/FSIO.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/FSIO.o.d" -o ${OBJECTDIR}/Board/FSIO.o Board/FSIO.c    
	
${OBJECTDIR}/Board/SD-SPI.o: Board/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.ok ${OBJECTDIR}/Board/SD-SPI.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/SD-SPI.o.d" -o ${OBJECTDIR}/Board/SD-SPI.o Board/SD-SPI.c    
	
${OBJECTDIR}/Board/Bootloader.o: Board/Bootloader.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Bootloader.o.d 
	@${RM} ${OBJECTDIR}/Board/Bootloader.o.ok ${OBJECTDIR}/Board/Bootloader.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Bootloader.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/Bootloader.o.d" -o ${OBJECTDIR}/Board/Bootloader.o Board/Bootloader.c    
	
${OBJECTDIR}/Board/TimeDelay.o: Board/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.ok ${OBJECTDIR}/Board/TimeDelay.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/TimeDelay.o.d" -o ${OBJECTDIR}/Board/TimeDelay.o Board/TimeDelay.c    
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
else
${OBJECTDIR}/Board/Board.o: Board/Board.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Board.o.d 
	@${RM} ${OBJECTDIR}/Board/Board.o.ok ${OBJECTDIR}/Board/Board.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Board.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/Board.o.d" -o ${OBJECTDIR}/Board/Board.o Board/Board.c    
	
${OBJECTDIR}/Board/FSIO.o: Board/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.d 
	@${RM} ${OBJECTDIR}/Board/FSIO.o.ok ${OBJECTDIR}/Board/FSIO.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/FSIO.o.d" -o ${OBJECTDIR}/Board/FSIO.o Board/FSIO.c    
	
${OBJECTDIR}/Board/SD-SPI.o: Board/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/Board/SD-SPI.o.ok ${OBJECTDIR}/Board/SD-SPI.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/SD-SPI.o.d" -o ${OBJECTDIR}/Board/SD-SPI.o Board/SD-SPI.c    
	
${OBJECTDIR}/Board/Bootloader.o: Board/Bootloader.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/Bootloader.o.d 
	@${RM} ${OBJECTDIR}/Board/Bootloader.o.ok ${OBJECTDIR}/Board/Bootloader.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/Bootloader.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/Bootloader.o.d" -o ${OBJECTDIR}/Board/Bootloader.o Board/Bootloader.c    
	
${OBJECTDIR}/Board/TimeDelay.o: Board/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Board 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/Board/TimeDelay.o.ok ${OBJECTDIR}/Board/TimeDelay.o.err 
	@${FIXDEPS} "${OBJECTDIR}/Board/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/Board/TimeDelay.o.d" -o ${OBJECTDIR}/Board/TimeDelay.o Board/TimeDelay.c    
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o.ok ${OBJECTDIR}/main.o.err 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../ -c ${MP_CC} $(MP_EXTRA_CC_PRE)  -omf=elf -x c -c -mcpu=$(MP_PROCESSOR_OPTION) -Werror -Wall -D__DEBUG -Os -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c    
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -o dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,--heap=4000,-Map="mapfile.txt",--report-mem$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__ICD2RAM=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1
else
dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -omf=elf -mcpu=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}         -Wl,--defsym=__MPLAB_BUILD=1,--heap=4000,-Map="mapfile.txt",--report-mem$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION)
	${MP_CC_DIR}\\pic30-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Bootloader.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -omf=elf
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/debug
	${RM} -r dist/debug

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
