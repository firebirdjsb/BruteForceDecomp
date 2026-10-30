/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E5BB17FE34459DC784761E327D05E19B70925A191BC5665096D992CE7496333
 * Entry: 0x0023c0e0, Ghidra index: 7924, label: FUN_0023c0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023c0e0(uint *param_1)

{
  float fVar1;
  uint uVar2;
  float *in_EAX;
  float *in_EDX;
  
  fVar1 = *in_EAX;
  uVar2 = *param_1;
  if (uVar2 < 0xeee373bf) {
    if (uVar2 == 0xeee373be) {
      *(char *)in_EDX = SUB41(fVar1,0);
      return 0xeee37301;
    }
    if (uVar2 == 0xa38d8e) {
      *in_EDX = (float)(int)fVar1;
      return 0xa38d01;
    }
    if (uVar2 == 0x1d3e389e) {
      in_EDX[3] = (float)(int)fVar1;
      in_EDX[2] = (float)(int)fVar1;
      in_EDX[1] = (float)(int)fVar1;
      *in_EDX = (float)(int)fVar1;
      return 0x1d3e3801;
    }
    if (uVar2 == 0xeda5d734) {
      *in_EDX = fVar1;
      return 0xeda5d701;
    }
  }
  else {
    if (uVar2 != 0xf05d9dab) {
      if (uVar2 != 0xf95aad3d) goto LAB_0023c15c;
      in_EDX[2] = (float)(int)fVar1;
    }
    in_EDX[1] = (float)(int)fVar1;
    *in_EDX = (float)(int)fVar1;
  }
LAB_0023c15c:
  return CONCAT31((int3)(uVar2 >> 8),1);
}
