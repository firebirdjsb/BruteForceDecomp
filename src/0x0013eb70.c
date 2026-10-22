/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 466089C61754CEF0A98E359E0C6F49CB34871E9516A4FC93B223428AD03F451F
 * Entry: 0x0013eb70, Ghidra index: 4037, label: FUN_0013eb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013eb70(void)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_0012eab0(1);
  iVar1 = *(int *)(unaff_EDI + 0x18);
  *(undefined4 *)(iVar1 + 0x734) = 3;
  *(undefined4 *)(iVar1 + 0x73c) = 0;
  *(undefined4 *)(iVar1 + 0x738) = 0;
  iVar1 = *(int *)(unaff_EDI + 0x18);
  *(undefined4 *)(iVar1 + 0x73c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined4 *)(iVar1 + 0x734) = 0;
  FUN_0013ec30();
  return 1;
}
