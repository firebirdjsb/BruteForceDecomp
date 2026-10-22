/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7821AF43362F1F24B69C4CA31FDB8DDE512CEF64BEE48AC112294657FF94AFD
 * Entry: 0x000756a0, Ghidra index: 1351, label: FUN_000756a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000756a0(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}
