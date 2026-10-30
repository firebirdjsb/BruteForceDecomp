/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FB32F534C6943500C9D55895945AF2C3567F55D8FEF5BF3A6A72A8493CBBEC5
 * Entry: 0x001f3fb0, Ghidra index: 7031, label: FUN_001f3fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* Original byte accesses preserve the rest of the reused incoming word.
 * Complete guest stack/register ABI and helper behavior remain unverified. */
undefined1 FUN_001f3fb0(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  byte bVar6;
  float *unaff_EDI;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar5 = param_2;
  FUN_001f3d30(param_1,&param_1,&param_3,&param_4,&local_24,param_3,param_4);
  bf_x86_word_store_byte(&param_2,0U,0);
  if ((-1 < local_24) && (local_24 < 4)) {
    bVar6 = (byte)((uint)param_1 >> 8);
    fVar1 = (float)((byte)param_1 & 0x7f) * 0.007874016;
    fVar2 = (float)(bVar6 & 0x7f) * 0.007874016;
    fVar3 = (float)(bf_x86_word_load_byte(&param_1,2U) & 0x7f) * 0.007874016;
    bf_x86_word_store_byte(&param_2,0U,1);
    local_20 = 1.0;
    fVar4 = (float)(bf_x86_word_load_byte(&param_1,3U) & 0x7f) * 0.007874016;
    if (-1 < (char)(byte)param_1) {
      local_20 = 0.0;
    }
    local_1c = 1.0;
    if (-1 < (char)bVar6) {
      local_1c = 0.0;
    }
    local_18 = 1.0;
    if (-1 < (char)bf_x86_word_load_byte(&param_1,2U)) {
      local_18 = 0.0;
    }
    local_14 = 1.0;
    if (-1 < param_1) {
      local_14 = 0.0;
    }
    switch(local_24) {
    case 0:
      *pfVar5 = (local_18 - local_20) * param_4 + (local_1c - local_20) * param_3 + local_20;
      *unaff_EDI = (fVar2 - fVar1) * param_3 + (fVar3 - fVar1) * param_4 + fVar1;
      return 1;
    case 1:
      *pfVar5 = (local_18 - local_14) * (1.0 - param_3) + (local_1c - local_14) * (1.0 - param_4) +
                local_14;
      *unaff_EDI = (fVar3 - fVar4) * (1.0 - param_3) + (fVar2 - fVar4) * (1.0 - param_4) + fVar4;
      return 1;
    case 2:
      *pfVar5 = (local_14 - local_1c) * param_4 + (local_20 - local_1c) * (1.0 - param_3) + local_1c
      ;
      *unaff_EDI = (fVar4 - fVar2) * param_4 + (fVar1 - fVar2) * (1.0 - param_3) + fVar2;
      return 1;
    case 3:
      *pfVar5 = (local_14 - local_18) * param_3 + (local_20 - local_18) * (1.0 - param_4) + local_18
      ;
      *unaff_EDI = (fVar4 - fVar3) * param_3 + (fVar1 - fVar3) * (1.0 - param_4) + fVar3;
    }
  }
  return bf_x86_word_load_byte(&param_2,0U);
}
