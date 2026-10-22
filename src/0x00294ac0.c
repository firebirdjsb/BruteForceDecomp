/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7142CEEE7A7B1FFA0805BBD5C66F2097458B96AC6B29405DA637054A8CB6A689
 * Entry: 0x00294ac0, Ghidra index: 9301, label: FUN_00294ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00294ac0(void)

{
  char cVar1;
  int iVar2;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_00294640();
  return *(int *)(iVar2 + 0x10) != -6;
}
