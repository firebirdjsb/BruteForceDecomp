/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDF543767B007D69F4CA2F16DB26457B6AEF724561A87AC3DF4D9766C7350DB9
 * Entry: 0x000d27d0, Ghidra index: 2615, label: FUN_000d27d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d27d0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_EDX;
  int unaff_ESI;
  
  iVar1 = in_EDX[1];
  if (iVar1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_EDX[2];
    if (iVar2 < iVar1) {
      iVar2 = (iVar2 - iVar1) + 1 + *in_EDX;
    }
    else {
      iVar2 = (iVar2 - iVar1) + 1;
    }
  }
  if ((((unaff_ESI < iVar2) && (-1 < unaff_ESI)) && (-1 < iVar1)) &&
     (uVar3 = iVar1 + unaff_ESI & *in_EDX - 1U, uVar3 != 0xffffffff)) {
    return in_EDX[4] + uVar3 * 0x18;
  }
  return 0;
}
