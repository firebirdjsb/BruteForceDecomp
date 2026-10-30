/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37EE86B2FDC263CA3F847F57A44653BCEEAEC2719C42DE9AC54AFDEB25EEE102
 * Entry: 0x00032e20, Ghidra index: 331, label: FUN_00032e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00032e20(void)

{
  undefined4 uVar1;
  int *in_ECX;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  FUN_000120f0();
  (**(code **)in_ECX[0x1c2])(in_ECX[0x100]);
  switch(in_ECX[0x1c1]) {
  case 0:
    uVar1 = (**(code **)(*in_ECX + 0xf0))(unaff_retaddr);
    return uVar1;
  case 1:
    if (((*(byte *)(in_ECX + 0x1c4) & 1) == 0) ||
       ((float)in_ECX[0x1c3] < 0.0 != ((float)in_ECX[0x1c3] == 0.0))) {
      in_ECX[0x1c1] = 2;
      fVar2 = (float10)FUN_00023900(in_ECX[0x1c6],(float)in_ECX[0x1c6] * 1.5);
      FUN_000124f0((float)fVar2);
      FUN_00123ea0();
    }
    break;
  case 2:
    if (((*(byte *)(in_ECX + 0x1c4) & 1) == 0) ||
       ((float)in_ECX[0x1c3] < 0.0 != ((float)in_ECX[0x1c3] == 0.0))) {
      in_ECX[0x1c1] = 3;
      fVar2 = (float10)FUN_00023900(in_ECX[0x1c6],(float)in_ECX[0x1c6] * 1.5);
      FUN_000124f0((float)fVar2);
      return 1;
    }
    break;
  case 3:
    if (((*(byte *)(in_ECX + 0x1c4) & 1) == 0) ||
       ((float)in_ECX[0x1c3] < 0.0 != ((float)in_ECX[0x1c3] == 0.0))) {
      return 2;
    }
    break;
  default:
    return 0;
  }
  return 1;
}
