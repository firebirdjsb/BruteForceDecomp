/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E81B0FD6CAA7E39DC495EBDCB9245A91076EE23C36F3F527A06E1FA7A496A35
 * Entry: 0x000c3cc0, Ghidra index: 2398, label: FUN_000c3cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c8ca8;
extern uint32_t DAT_003c8cac;
extern uint32_t DAT_003c8cb0;
extern uint32_t DAT_003c8cb4;
void FUN_000c3cc0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x28) + -0x2c;
  }
  iVar2 = (param_1 + (*(byte *)(*(int *)(iVar2 + 100) + 0x74) & 1) * 4) * 0x10;
  uVar1 = *(undefined2 *)(&DAT_003c8cac + iVar2);
  *(undefined2 *)(in_ECX + 4) = *(undefined2 *)(&DAT_003c8ca8 + iVar2);
  *(undefined2 *)(in_ECX + 6) = uVar1;
  *(undefined2 *)(in_ECX + 0xe) = *(undefined2 *)(&DAT_003c8cb0 + iVar2);
  *(undefined2 *)(in_ECX + 0xc) = *(undefined2 *)(&DAT_003c8cb4 + iVar2);
  return;
}
