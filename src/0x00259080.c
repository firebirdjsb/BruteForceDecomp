/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6B45844CDAC24B0C468D1717F53A4E0CBF76C44E2A2FAF5B9EDB4B23090ABCB
 * Entry: 0x00259080, Ghidra index: 8492, label: FUN_00259080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004a7360;
extern uint32_t _DAT_004a7364;
extern uint32_t _DAT_004a7368;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00259080(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  
  piVar2 = (int *)(in_EAX + -0x10);
  if ((_DAT_004a7368 & 1) == 0) {
    _DAT_004a7368 = _DAT_004a7368 | 1;
  }
  _DAT_004a7364 = *piVar2;
  _DAT_004a7360 = *(int *)(in_EAX + -4) >> 0xc;
  if (*(int *)(in_EAX + -8) == 0) {
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_EAX + -0xc);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + -8) + 4) = *(undefined4 *)(in_EAX + -0xc);
  }
  if (*(int *)(in_EAX + -0xc) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + -0xc) + 8) = *(undefined4 *)(in_EAX + -8);
  }
  iVar1 = *piVar2;
  uVar4 = *(uint *)(in_EAX + -4) & 0xfff;
  puVar3 = (undefined4 *)((int)piVar2 - uVar4);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[4] = puVar3[4] ^ (puVar3[4] ^ iVar1 + uVar4) & 0x3ffffff;
  puVar3[5] = 0;
  FUN_00258d60();
  return 1;
}
