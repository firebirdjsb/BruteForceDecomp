/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E291C322FD42EA17420678D047B8DE587270294B7E7AAB8F6C8ACF8DF33C6089
 * Entry: 0x000b0550, Ghidra index: 2095, label: FUN_000b0550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b0550(int param_1,float *param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *param_4 = 0;
  *param_3 = 0;
  fVar4 = *param_2 - *(float *)(param_1 + 200);
  fVar5 = param_2[2] - *(float *)(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0xb4);
  fVar3 = *(float *)(param_1 + 0x94);
  *param_4 = (int)(-(fVar5 * *(float *)(param_1 + 0xbc) + fVar4 * *(float *)(param_1 + 0xb0)) *
                  *(float *)(param_1 + 0x94));
  *param_3 = (int)(-(fVar5 * (float)((ulonglong)uVar1 >> 0x20) +
                    fVar4 * (float)((ulonglong)uVar2 >> 0x20)) * fVar3);
  return;
}
