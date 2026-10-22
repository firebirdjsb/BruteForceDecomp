/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90ECC20F380C9EC8AE64464F3EF36DEF7D9559560167E712B5FEFB9D161ECECA
 * Entry: 0x0023c160, Ghidra index: 7925, label: FUN_0023c160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023c160(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  uint *in_ECX;
  undefined4 *unaff_ESI;
  
  uVar3 = *in_EAX;
  uVar1 = *in_ECX;
  if (uVar1 < 0xeee373bf) {
    if (uVar1 == 0xeee373be) {
      uVar2 = FUN_002ebf10();
      *(undefined1 *)unaff_ESI = uVar2;
      return 1;
    }
    if (uVar1 != 0xa38d8e) {
      if (uVar1 == 0x1d3e389e) {
        unaff_ESI[3] = uVar3;
        unaff_ESI[2] = uVar3;
        unaff_ESI[1] = uVar3;
        *unaff_ESI = uVar3;
        return 0x1d3e3801;
      }
      if (uVar1 != 0xeda5d734) {
        return 1;
      }
      uVar3 = FUN_002ebf10();
      *unaff_ESI = uVar3;
      return 1;
    }
  }
  else {
    if (uVar1 != 0xf05d9dab) {
      if (uVar1 != 0xf95aad3d) {
        return 1;
      }
      unaff_ESI[2] = uVar3;
    }
    unaff_ESI[1] = uVar3;
  }
  *unaff_ESI = uVar3;
  return 1;
}
