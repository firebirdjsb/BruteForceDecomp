/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BA4A17D744ABF368173105023A566EBF19738FFE18273C1499FAA361E57A71F
 * Entry: 0x001294e0, Ghidra index: 3743, label: FUN_001294e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001294e0(void)

{
  int in_EAX;
  int iVar1;
  
  if (((in_EAX != 0) &&
      (iVar1 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))(), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x24) != 0)) {
    FUN_00012090();
  }
  return;
}
