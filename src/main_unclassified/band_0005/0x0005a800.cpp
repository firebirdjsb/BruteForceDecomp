/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5558C062E31AEF75E32DB09575D2518E481D84990B12B657B2B999FF3A995269
 * Entry: 0x0005a800, Ghidra index: 907, label: FUN_0005a800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0005a800(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(*(int *)(in_EAX + 4) + 0x3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  for (; (puVar2 != puVar1 && (puVar2[3] != unaff_EDI)); puVar2 = (undefined4 *)*puVar2) {
  }
  if (puVar2 != puVar1) {
    return 1;
  }
  puVar1 = *(undefined4 **)(*(int *)(in_EAX + 4) + 0x48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  for (; (puVar2 != puVar1 && (puVar2[3] != unaff_EDI)); puVar2 = (undefined4 *)*puVar2) {
  }
  return (puVar2 != puVar1) - 1;
}
