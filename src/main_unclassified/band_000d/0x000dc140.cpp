/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D05C90251EE01E8E1137C2502132DEB3F57847BC2F49B1760EE99FE490113E85
 * Entry: 0x000dc140, Ghidra index: 2702, label: FUN_000dc140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d5c8;
bool FUN_000dc140(int param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,undefined8 *param_8,int param_9,int param_10,
                 undefined4 param_11)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  __m128 auVar6;
  __m128 packed_input;
  float scaled[3];
  uint32_t scaled_tail;
  float norm_squared;
  int local_428;
  float local_424;
  undefined4 local_420;
  int local_41c;
  float local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400 [256];
  
  local_418 = 0.0;
  local_424 = 0.0;
  local_41c = 0;
  if ((param_9 == 0) || (param_10 == 0)) {
    if (DAT_0040d5c8 == '\0') {
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_1 + 0x220) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x220);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x220);
      for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        bVar1 = *(byte *)(puVar3[2] + 0x94);
        if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,puVar3[2],param_11);
        }
      }
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(param_1 + 0x214) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x214);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x214);
      for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
        bVar1 = *(byte *)(puVar3[2] + 0x94);
        if ((((bVar1 & 0x40) != 0) && ((bVar1 & 8) == 0)) && ((bVar1 & 0x10) != 0)) {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,puVar3[2],param_11);
        }
      }
    }
    else {
      local_414 = *(undefined4 *)(param_1 + 0xa40);
      local_420 = *(undefined4 *)(param_8 + 1);
      local_404 = *(undefined4 *)(param_1 + 0xa3c);
      local_410 = *param_8;
      local_428 = 0;
      local_408 = local_420;
      FUN_000e2600(local_400,&local_428,0x100,1);
      iVar4 = 0;
      if (0 < local_428) {
        do {
          FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                       param_8,local_400[iVar4],param_11);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_428);
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_10) {
      do {
        FUN_000dbdc0(param_1,param_3,&local_418,param_5,&local_41c,param_2,param_6,&local_424,
                     param_8,*(undefined4 *)(param_9 + iVar4 * 4),param_11);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_10);
    }
  }
  if (0.0 < *param_5) {
    fVar5 = 1.0 / *param_5;
    *param_4 = local_418 * fVar5;
    *param_7 = local_424 * fVar5;
    /* 0xdc42e..447: memory MOVSS clears upper 96 bits, SHUFPS 0
     * broadcasts the factor; MOVSS/MOVHPS places input +0/+4/+8 in
     * lanes 0/2/3 with lane 1 zero. MULPS includes that zero lane. */
    auVar6 = _mm_load_ss(&fVar5);
    auVar6 = _mm_shuffle_ps(auVar6,auVar6,0);
    packed_input = _mm_load_ss(param_6);
    packed_input = _mm_loadh_pi(packed_input,(const __m64 *)(param_6 + 1));
    auVar6 = _mm_mul_ps(auVar6,packed_input);
    /* 0xdc44e/452 writes exactly 12 bytes at original ESP+0x20:
     * low lane, then high two lanes. It does not store lane 1. */
    _mm_store_ss(&scaled[0],auVar6);
    _mm_storeh_pi((__m64 *)&scaled[1],auVar6);
    /* 0xdc456..488 reads scratch +8 as a raw word, moves +4 through
     * x87 m32fp, then writes +0/+4/+8 in order. C float assignments
     * do not establish exact x87 NaN/exception/rounding behavior. */
    memcpy(&scaled_tail,&scaled[2],sizeof(scaled_tail));
    fVar5 = scaled[1];
    *param_6 = scaled[0];
    memcpy(&param_6[1],&fVar5,sizeof(fVar5));
    memcpy(&param_6[2],&scaled_tail,sizeof(scaled_tail));
    /* x87 computes (x*x+y*y)+z*z and FSTP rounds to m32fp at
     * 0xdc4aa. Its intermediate precision/control word is unverified. */
    norm_squared = (*param_3 * *param_3 + param_3[1] * param_3[1]) +
                   param_3[2] * param_3[2];
    /* 0xdc4b4 RSQRTSS changes only lane 0; other lanes retain the
     * preceding packed product. Only lane 0 is then stored at ESP+0xc. */
    auVar6 = _mm_rsqrt_ss(_mm_move_ss(auVar6,_mm_load_ss(&norm_squared)));
    _mm_store_ss(&fVar5,auVar6);
    *param_3 = fVar5 * *param_3;
    param_3[1] = fVar5 * param_3[1];
    param_3[2] = fVar5 * param_3[2];
  }
  return 0 < local_41c;
}
