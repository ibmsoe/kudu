#ifndef _H_VECLIB_HEADERS
#define _H_VECLIB_HEADERS


#pragma once
#ifdef __ALTIVEC__
#define VECLIB_VSX
#include <altivec.h>
#include <cstdlib>
#include "kudu/util/veclib_types.h"
#include "kudu/util/vec128str.h"
#include "kudu/util/vec128int.h"
#include "kudu/util/vec128dp.h"
#include "kudu/util/vec128sp.h"
#include "kudu/util/vecmisc.h"

#define _mm_extract_epi32 vec_extract1swfrom4sw
#define _mm_load_si128 vec_load1q
#define _mm_loadu_si128 vec_loadu1q
#define _mm_shuffle_epi8 vec_permute16sb 
#define _mm_add_epi32 vec_add4sw
#define _mm_load_sd vec_loadlower1dpunaligned 
#define _mm_setzero_pd vec_zero2dp 
#define _mm_cmpeq_epi8 vec_compareeq16sb
#define _mm_testz_si128 vec_comparelt16sb 
#define _mm_storeu_si128 vec_storeu1q
#define _mm_storel_epi64 vec_storelower1sdof2sd
#define _mm_set_ps vec_set4sp
#endif /*__ALTIVEC__*/
#endif /* _H_VECLIB_HEADERS */

