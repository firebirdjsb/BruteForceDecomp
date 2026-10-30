/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2393030E998D53CA529E64D194E4211B382190A17C3F604EAA66F945567B8609
 * Entry: 0x0037834e, Ghidra index: 13468, label: FUN_0037834e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037834e(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_EAX;
  undefined1 *puVar3;
  int in_EDX;
  
  iVar2 = *in_EAX;
  *(undefined1 *)(iVar2 + 0x6813c8) = 0;
  puVar3 = (undefined1 *)(in_EDX + 0x100);
  do {
    *(undefined1 *)(iVar2 + 0x6813c9) = puVar3[-0x100];
    *(undefined1 *)(iVar2 + 0x6813c9) = *puVar3;
    puVar1 = puVar3 + 0x100;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(iVar2 + 0x6813c9) = *puVar1;
  } while (puVar3 + (-0x100 - in_EDX) < (undefined1 *)0x100);
  return;
}
