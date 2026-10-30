/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 604CCA80D2267DA87AC262E99B0D28C332FB06FAE82C40C96BFF04D6745E9C5B
 * Entry: 0x001209f0, Ghidra index: 3645, label: FUN_001209f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001209f0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 in_XMM0 [16];
  undefined1 auStack_c [12];
  
  if (param_1[400] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x40))();
    pfVar4 = (float *)FUN_00120ad0();
    fVar1 = pfVar4[2] - *(float *)(iVar3 + 0x2c);
    fVar2 = *pfVar4 - *(float *)(iVar3 + 0x24);
    rsqrtss(in_XMM0,fVar2 * fVar2 + fVar1 * fVar1);
    (**(code **)(param_1[0x6d] + 0x30))(auStack_c);
    fVar5 = (float10)FUN_0005a6e0(0);
    return ABS(fVar5);
  }
  return (float10)6.28;
}
