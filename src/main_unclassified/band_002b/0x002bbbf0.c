/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E17583F6091B32B1D0DDCD59169B3A01697009F00E1A00EF680789269A3BCFFA
 * Entry: 0x002bbbf0, Ghidra index: 9909, label: FUN_002bbbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002bbbf0(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  if (((byte)*in_EAX & 0xc) == 4) {
    if (in_EAX[0x18] != 0) {
      uVar1 = FUN_002b2b80();
      iVar2 = FUN_002bee90(unaff_EDI,uVar1);
      return iVar2;
    }
  }
  else {
    iVar2 = in_EAX[0x18];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == unaff_EDI)) {
      return iVar2;
    }
  }
  return 0;
}
