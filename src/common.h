////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
// Tayler Hetherington
// 2015
// common.h
// Common shared structures / types
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstddef>
#include <queue>
#include <unistd.h>
#include <assert.h>
#include <pthread.h>
#include <math.h>

enum sram_type {
    NBin = 0,
    NBout = 1,
    SB = 2,
    NUM_SRAM_TYPE = 3
};

typedef struct _sram_op_ {
    unsigned addr;
    unsigned size;
}sram_op;


enum pipeline_stage {
    NFU1 = 0,
    NFU2 = 1,
    NFU3 = 2,
    NUM_PIPE_STAGES = 3
};

#endif
