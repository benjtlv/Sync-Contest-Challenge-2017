# Target specific macros
# Name of the target  application
TARGET = Driver_osek

# Put SCADE C code into Driver folder
USER_INC_PATH = ./Driver

# List of C sources: 
# SCADE C code into Driver folder
# glue code: Driver_glue.c 
TARGET_SOURCES := $(addprefix $(USER_INC_PATH)/, \
	Driver_Robot.c \
	Driver_Robot_context.c \
	Driver_Robot_inputs.c \
	Driver_Robot_outputs.c \
	kcg_consts.c \
	kcg_types.c) \
	Driver_glue.c
	
# oil file name 
TOPPERS_OSEK_OIL_SOURCE := ./Driver.oil
# obj target directory
O_PATH ?= build

# First step, generate C code from oil file so use ecrobot.mak
#include ../../ecrobot/ecrobot.mak
# Once oil file freezed and C code generated / modified, not
# generate C code from oil file so use generic_scade.mak
include ../../ecrobot/generic_scade.mak
