/****************************    stdafx.h    ***********************************
* Author:        Agner Fog
* Date created:  2017-04-17
* Last modified: 2018-03-30
* Version:       1.01
* Project:       Binary tools for ForwardCom instruction set
* Module:        stdafx.h
* Description:
* Header file for ForwardCom tools
*
* Copyright 2017-2018 GNU General Public License http://www.gnu.org/licenses
*****************************************************************************/

#pragma once

// for Microsoft Visual Studio only:
#ifdef _MSC_VER
#include "targetver.h"
#define _CRT_SECURE_NO_WARNINGS        // disable warnings in Visual Studio
#define _CRT_SECURE_NO_DEPRECATE
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#endif

// for all compilers:
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

#include "maindef.h"
#include "elf_forwardcom.h"
#include "error.h"
#include "containers.h"
#include "cmdline.h"
#include "converters.h"
#include "disassem.h"
#include "assem.h"
#include "library.h"
#include "linker.h"
#include "emulator.h"
#include "system_functions.h"
