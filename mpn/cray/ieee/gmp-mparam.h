/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1996, 2000, 2001 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#define BITS_PER_MP_LIMB 64
#define BYTES_PER_MP_LIMB 8

#if 0
#define UMUL_TIME	  50	/* re-measure this! */
#define UDIV_TIME	2360
#endif

#define KARATSUBA_MUL_THRESHOLD      130
#define TOOM3_MUL_THRESHOLD          520

#define BASECASE_SQR_THRESHOLD         0
#define KARATSUBA_SQR_THRESHOLD      130
#define TOOM3_SQR_THRESHOLD          260

#define SB_PREINV_THRESHOLD            0  /* (preinv always) */
#define DC_THRESHOLD                 330
#define POWM_THRESHOLD               656

#define GCD_ACCEL_THRESHOLD            3
#define GCDEXT_THRESHOLD              46

#define DIVREM_1_NORM_THRESHOLD        0  /* (preinv always) */
#define DIVREM_1_UNNORM_THRESHOLD      0
#define MOD_1_NORM_THRESHOLD           0
#define MOD_1_UNNORM_THRESHOLD         0
#define USE_PREINV_MOD_1               1  /* (preinv always) */
#define DIVREM_2_THRESHOLD             0  /* (preinv always) */
#define DIVEXACT_1_THRESHOLD           0
#define MODEXACT_1_ODD_THRESHOLD       0

#define FFT_MUL_TABLE  { 1136, 2528, 5952, 11520, 25600, 53248, 0 }
#define FFT_MODF_MUL_THRESHOLD       776
#define FFT_MUL_THRESHOLD           3616

#define FFT_SQR_TABLE  { 1040, 2208, 4928, 9984, 21504, 53248, 0 }
#define FFT_MODF_SQR_THRESHOLD       760
#define FFT_SQR_THRESHOLD           5504
