/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92A3DE16A2D672CE98043AA57881AA085AA6F71333D924B758E14C9AEAFCC42B
 * Entry: 0x00335261, Ghidra index: 12423, label: FUN_00335261
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00335261(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(in_ECX + 0x15b8) = 0;
  *(undefined4 *)(in_ECX + 0x15b4) = 0;
  *(undefined4 *)(in_ECX + 0x15bc) = 0;
  *(undefined4 *)(in_ECX + 0x15c0) = 0;
  *(undefined4 *)(in_ECX + 0x15c4) = 0;
  *(undefined4 *)(in_ECX + 0x15c8) = 0;
  *(undefined4 *)(in_ECX + 0x15b0) = 1;
  uVar3 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x12e0);
  do {
    FUN_003476af(uVar3,0);
    puVar4 = puVar2 + -4;
    for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar2 = 1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x2e;
  } while (uVar3 < 4);
  return;
}
