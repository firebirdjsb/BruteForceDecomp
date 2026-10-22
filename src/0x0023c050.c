/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 329275AA13E415AE5E784F75C46C76859DD7FD53A0CF60D054899ECD95CDAD2D
 * Entry: 0x0023c050, Ghidra index: 7923, label: FUN_0023c050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023c050(uint *param_1)

{
  byte bVar1;
  byte *in_EAX;
  uint uVar2;
  undefined3 uVar3;
  float *in_EDX;
  
  bVar1 = *in_EAX;
  uVar2 = *param_1;
  if (uVar2 < 0xeee373bf) {
    uVar3 = (undefined3)(uVar2 >> 8);
    if (uVar2 == 0xeee373be) {
      *(byte *)in_EDX = bVar1;
      return 0xeee37301;
    }
    if (uVar2 == 0xa38d8e) {
      *in_EDX = (float)bVar1;
      return 0xa38d01;
    }
    if (uVar2 != 0x1d3e389e) {
      if (uVar2 == 0xeda5d734) {
        *in_EDX = (float)(uint)bVar1;
        return 0xeda5d701;
      }
      goto LAB_0023c0d1;
    }
    in_EDX[3] = (float)bVar1;
LAB_0023c0b1:
    uVar2 = (uint)bVar1;
    in_EDX[2] = (float)uVar2;
LAB_0023c0bf:
    in_EDX[1] = (float)bVar1;
    *in_EDX = (float)bVar1;
  }
  else {
    if (uVar2 == 0xf05d9dab) goto LAB_0023c0bf;
    if (uVar2 == 0xf95aad3d) goto LAB_0023c0b1;
  }
  uVar3 = (undefined3)(uVar2 >> 8);
LAB_0023c0d1:
  return CONCAT31(uVar3,1);
}
