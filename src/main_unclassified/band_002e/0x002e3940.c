/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 807E9C83B917AD2F26D25658322540C7484E038D398E5C5A78EA31B32C86CCA5
 * Entry: 0x002e3940, Ghidra index: 10415, label: FUN_002e3940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e3940(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    return 0x80004005;
  }
  uVar2 = (*(int *)(in_ECX + 0x18) + 1U) % *(uint *)(in_ECX + 0x14);
  iVar1 = *(int *)(in_ECX + 0x20) + -1;
  *(int *)(in_ECX + 0x20) = iVar1;
  *(uint *)(in_ECX + 0x18) = uVar2;
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 4 + uVar2 * 0xc);
    return 0;
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  return 0;
}
