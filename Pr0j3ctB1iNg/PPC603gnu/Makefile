# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/ProjectBling/Pr0j3ct\ B1iNg



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.o : $(PRJ_ROOT_DIR)/Commands/Brighter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.o : $(PRJ_ROOT_DIR)/Commands/Color_Cycler.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.o : $(PRJ_ROOT_DIR)/Commands/Dimmer.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.o : $(PRJ_ROOT_DIR)/Subsystems/Bling_Bling.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.o : $(PRJ_ROOT_DIR)/Subsystems/Colors.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.o : $(PRJ_ROOT_DIR)/WPILibExtensions/AnalogPressureTransducer.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/ChangeJoystickModeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/InterruptSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/PrintStallData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/ToggleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.o : $(PRJ_ROOT_DIR)/WPILibExtensions/IREncoder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartCANJaguar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartCANJaguarSeries.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartGyro.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Stallable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.o : $(PRJ_ROOT_DIR)/WPILibExtensions/StallableAnalogEncoder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.o \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBassedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBassedRobotTemplate_partialImage/$(MODE_DIR)

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.o : $(PRJ_ROOT_DIR)/Commands/AutonomousCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.o : $(PRJ_ROOT_DIR)/Commands/Brighter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.o : $(PRJ_ROOT_DIR)/Commands/Color_Cycler.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.o : $(PRJ_ROOT_DIR)/Commands/Dimmer.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.o : $(PRJ_ROOT_DIR)/Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.o : $(PRJ_ROOT_DIR)/RobotMap.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.o : $(PRJ_ROOT_DIR)/Subsystems/Bling_Bling.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.o : $(PRJ_ROOT_DIR)/Subsystems/Colors.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.o : $(PRJ_ROOT_DIR)/WPILibExtensions/AnalogPressureTransducer.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/ChangeJoystickModeCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/InterruptSubsystem.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/PrintStallData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Commands/ToggleCommand.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.o : $(PRJ_ROOT_DIR)/WPILibExtensions/IREncoder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartCANJaguar.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartCANJaguarSeries.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartGyro.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.o : $(PRJ_ROOT_DIR)/WPILibExtensions/SmartJoystick.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.o : $(PRJ_ROOT_DIR)/WPILibExtensions/Stallable.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.o : $(PRJ_ROOT_DIR)/WPILibExtensions/StallableAnalogEncoder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBassedRobotTemplate_partialImage = CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.o \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.o

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage.o : $(OBJECTS_CommandBassedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBassedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean

CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/CommandBassedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBassedRobotTemplate_partialImage" ]; then cd "CommandBassedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.d \
	 CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.d CommandBasedRobotTemplate/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/AutonomousCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Brighter.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Color_Cycler.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Commands/Dimmer.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/OI.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Robot.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/RobotMap.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Bling_Bling.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/Subsystems/Colors.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/AnalogPressureTransducer.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ChangeJoystickModeCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/InterruptSubsystem.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/PrintStallData.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Commands/ToggleCommand.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/IREncoder.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguar.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartCANJaguarSeries.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartGyro.d \
	 CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/SmartJoystick.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/Stallable.d CommandBassedRobotTemplate_partialImage/$(MODE_DIR)/Objects/Pr0j3ct\ B1iNg/WPILibExtensions/StallableAnalogEncoder.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
