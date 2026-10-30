/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B4FE273B7C2E3AA18978914DC68A4BAB7887C4F87B4DCBB0AD72EC72E324EF3
 * Entry: 0x002bbc40, Ghidra index: 9910, label: FUN_002bbc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bbc40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_EDI;
  
  if (((byte)*unaff_EDI & 0xc) == 4) {
    if (unaff_EDI[0x18] == 0) {
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_002bec00();
      }
      unaff_EDI[0x18] = uVar2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = FUN_002b2b80();
    FUN_002bece0(uVar2,param_1,uVar3);
    return;
  }
  unaff_EDI[0x18] = param_1;
  return;
}
