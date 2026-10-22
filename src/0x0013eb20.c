/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D525D3E3BF4985D430C6CA89918658F0F575336385880F776741C4DB85B5C191
 * Entry: 0x0013eb20, Ghidra index: 4036, label: FUN_0013eb20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013eb20(void)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  
  cVar2 = FUN_0013eca0(unaff_EDI,unaff_EDI + 0x34);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(unaff_EDI + 0x18);
    *(undefined4 *)(iVar1 + 0x73c) = *(undefined4 *)(unaff_EDI + 0x28);
    *(undefined4 *)(iVar1 + 0x734) = 1;
    FUN_0013ec30();
    FUN_0012eab0(1);
    *(undefined4 *)(unaff_EDI + 0x20) = 0;
    return 1;
  }
  return 0;
}
