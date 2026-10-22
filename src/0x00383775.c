/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A69A5D06E320B4B03D5DE6D5D62FFD02B3884DE00A741B1D7D7358E66A71D14E
 * Entry: 0x00383775, Ghidra index: 13620, label: FUN_00383775
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00383775(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x41c);
  iVar2 = 0;
  if (iVar1 != in_EDX) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x24);
    } while (iVar1 != in_EDX);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      goto LAB_003837a0;
    }
  }
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(iVar1 + 0x24);
LAB_003837a0:
  if (in_EDX == *(int *)(in_ECX + 0x420)) {
    *(int *)(in_ECX + 0x420) = iVar2;
  }
  return;
}
