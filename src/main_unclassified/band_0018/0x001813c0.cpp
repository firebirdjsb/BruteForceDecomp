/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45F4A394671E17F82E8E0BE2B6EC66CB4FE97B4E05D5B1FA83694C751331BD69
 * Entry: 0x001813c0, Ghidra index: 5151, label: FUN_001813c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001813c0(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x41);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x41);
  }
  return;
}
