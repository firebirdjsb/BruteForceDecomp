/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA9B791BE9FE1D6972D387B30080AA2CC619EEC7DB4D5BC8852C3A4B0286C1E0
 * Entry: 0x00210060, Ghidra index: 7415, label: FUN_00210060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00210060(void)

{
  uint uVar1;
  int in_EAX;
  int *unaff_EDI;
  undefined4 uVar2;
  
  *unaff_EDI = in_EAX;
  unaff_EDI[4] = -1;
  unaff_EDI[5] = 1;
  unaff_EDI[6] = 0x7f7fffff;
  if ((in_EAX == 0) || (*(int *)(in_EAX + 0xc) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(*(int *)(in_EAX + 0xc) + 8);
  if (uVar1 < 0x19766086) {
    if (uVar1 == 0x19766085) goto LAB_002100c8;
    if (uVar1 < 0x38becac) {
      if (uVar1 == 0x38becab) {
        FUN_002101d0(unaff_EDI,0x40);
        unaff_EDI[5] = 0x40;
        goto LAB_002100d6;
      }
      if (uVar1 < 0x1289a17) {
        if (uVar1 == 0x1289a16) goto LAB_0021017b;
        if ((uVar1 == 0x68d2fc) || (uVar1 == 0x1208936)) goto LAB_002100c8;
      }
    }
    else {
      if (uVar1 == 0x86bd9cc) goto LAB_002100c8;
      if (uVar1 == 0x115268fc) {
        FUN_002101d0(unaff_EDI,0x80);
        unaff_EDI[5] = 0x80;
        goto LAB_002100d6;
      }
      if (uVar1 == 0x1639d89c) {
        uVar2 = 7;
        goto LAB_002100cd;
      }
    }
LAB_00210174:
    uVar2 = 0x19;
  }
  else if (uVar1 < 0xe714d92a) {
    if ((uVar1 == 0xe714d929) || (uVar1 == 0x1dc1aa6d)) {
LAB_0021017b:
      uVar2 = 0x1f;
    }
    else {
      if (uVar1 == 0xe00f4e1d) goto LAB_00210174;
      if (uVar1 != 0xe3a313c1) {
        uVar2 = 0x19;
        goto LAB_002100cd;
      }
LAB_002100c8:
      uVar2 = 0x119;
    }
  }
  else {
    if (uVar1 == 0xed26c1ea) goto LAB_002100c8;
    if (uVar1 != 0xf1da9590) {
      if (uVar1 != 0xfbea9513) goto LAB_00210174;
      goto LAB_0021017b;
    }
    uVar2 = 0x101;
  }
LAB_002100cd:
  FUN_002101d0(unaff_EDI,uVar2);
  unaff_EDI[5] = 1;
LAB_002100d6:
  FUN_002107d0(unaff_EDI,1);
  FUN_00210840(unaff_EDI);
  return 1;
}
