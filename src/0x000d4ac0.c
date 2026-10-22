/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5FAC1E934120E9FB93A650F97A7A2DFCAEBC405779AD1AB598DEC8A34598255
 * Entry: 0x000d4ac0, Ghidra index: 2656, label: FUN_000d4ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d4ac0(void)

{
  int iVar1;
  int in_EDX;
  undefined4 *puVar2;
  
  *(undefined4 *)(in_EDX + 8) = 0;
  *(undefined4 *)(in_EDX + 0xc) = 0;
  *(undefined4 *)(in_EDX + 0x10) = 0;
  puVar2 = (undefined4 *)(in_EDX + 0x14);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(in_EDX + 0x2c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(in_EDX + 0xb0) = 0;
  *(undefined4 *)(in_EDX + 0xd0) = 0;
  *(undefined4 *)(in_EDX + 0xd4) = 0;
  *(undefined4 *)(in_EDX + 0xd8) = 0;
  *(undefined4 *)(in_EDX + 0xdc) = 0;
  *(undefined4 *)(in_EDX + 0xe4) = 0;
  *(undefined4 *)(in_EDX + 0xe8) = 0;
  *(undefined4 *)(in_EDX + 0xec) = 0;
  *(undefined4 *)(in_EDX + 0xf0) = 0;
  return;
}
