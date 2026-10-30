/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F7F016853669900777086F84618C07F94824ECBE0F5C8F2C1A5512A1E8DF2AB
 * Entry: 0x00319858, Ghidra index: 12231, label: FUN_00319858
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319858(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00317503(0);
  if ((-1 < iVar1) && ((*(byte *)(*(int *)(in_ECX + 0x88) + 10) & 4) == 0)) {
    FUN_00319589();
    return;
  }
  return;
}
