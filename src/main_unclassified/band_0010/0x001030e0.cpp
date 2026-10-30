/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CC4D06DB0474B9CD21C7E8D21967E789F08CB24A6757F4C250E2405A1C0C981
 * Entry: 0x001030e0, Ghidra index: 3287, label: FUN_001030e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001030e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EDI;
  
  uVar1 = 0;
  if (unaff_EDI != -1) {
    puVar2 = *(undefined4 **)(in_ECX + 0x7c);
    iVar3 = 0;
    if (puVar2 != *(undefined4 **)(in_ECX + 0x80)) {
      while (iVar3 != unaff_EDI) {
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + 1;
        if (puVar2 == *(undefined4 **)(in_ECX + 0x80)) {
          return uVar1;
        }
      }
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}
