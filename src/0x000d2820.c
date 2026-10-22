/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7818FEC3C22B606015BC782FDEF1F00DE04BEE590AF2AFB6329E5E52AFE6F99
 * Entry: 0x000d2820, Ghidra index: 2616, label: FUN_000d2820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000d2820(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_EDX;
  undefined4 *unaff_EBX;
  
  iVar1 = in_EDX[1];
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    iVar2 = in_EDX[2];
    if (iVar2 < iVar1) {
      uVar3 = (iVar2 - iVar1) + 1 + *in_EDX;
    }
    else {
      uVar3 = (iVar2 - iVar1) + 1;
    }
  }
  if ((int)uVar3 < *in_EDX) {
    if (iVar1 == -1) {
      in_EDX[2] = 0;
      in_EDX[1] = 0;
      *unaff_EBX = 0;
      return 1;
    }
    in_EDX[1] = *in_EDX - 1U & iVar1 - 1U;
    *unaff_EBX = 0;
    return 1;
  }
  *unaff_EBX = 0xffffffff;
  return uVar3 & 0xffffff00;
}
