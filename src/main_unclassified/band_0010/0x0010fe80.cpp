/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF795C51D658EA6F9D07209B450C48FE8287FD46141322E153F4F1C8B48D63E1
 * Entry: 0x0010fe80, Ghidra index: 3543, label: FUN_0010fe80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010fe80(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_EAX + 0x1348) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)**(undefined4 **)(in_EAX + 0x1348);
  }
  while( true ) {
    if (puVar1 == *(undefined4 **)(in_EAX + 0x1348)) {
      FUN_000ba140();
      return;
    }
    if (*(int *)(puVar1[2] + 0xe0) == unaff_EDI) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_000ba140();
  return;
}
