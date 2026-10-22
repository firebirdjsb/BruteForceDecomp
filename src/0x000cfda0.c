/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C39B94305EE9883BABDAFEA1A94F3E83EFD6B13CF8AA844A21D831FDFD52EB7
 * Entry: 0x000cfda0, Ghidra index: 2568, label: FUN_000cfda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cfda0(int param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_EAX;
  int in_ECX;
  int iVar7;
  
  while( true ) {
    iVar7 = in_EAX * 2 + 2;
    if (param_1 <= iVar7) break;
    pfVar1 = *(float **)(in_ECX + iVar7 * 4);
    fVar3 = *param_3 - *pfVar1;
    pfVar2 = *(float **)(in_ECX + -4 + iVar7 * 4);
    fVar6 = param_3[2] - pfVar1[1];
    fVar5 = *param_3 - *pfVar2;
    fVar4 = param_3[2] - pfVar2[1];
    if (fVar3 * fVar3 + fVar6 * fVar6 < fVar5 * fVar5 + fVar4 * fVar4) {
      iVar7 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + iVar7 * 4);
    in_EAX = iVar7;
  }
  if (iVar7 == param_1) {
    *(undefined4 *)(in_ECX + in_EAX * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
  }
  FUN_000cfe40();
  return;
}
