/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD68A2E0FD775CB9D20346F34E662708F87F7CFF9217B8214FB7667D1A4C95AD
 * Entry: 0x0037fb6e, Ghidra index: 13506, label: FUN_0037fb6e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_0037fb6e(void)

{
  uint uVar1;
  int *in_ECX;
  
  *(int *)(*in_ECX + 0x18) = in_ECX[2] - DAT_004a8fc0;
  *(undefined4 *)(*in_ECX + 0x1c) = 0;
  *(undefined4 *)(*in_ECX + 0x20) = 0;
  *(undefined4 *)(*in_ECX + 0x24) = 0;
  *(undefined4 *)(*in_ECX + 0x28) = 0;
  *(undefined4 *)(*in_ECX + 0x2c) = 0;
  *(undefined4 *)(*in_ECX + 0x30) = 0;
  *(undefined2 *)((int)in_ECX + 0x416) = 0x2772;
  *(undefined4 *)(*in_ECX + 0x40) = 0x2a29;
  *(undefined2 *)(in_ECX + 0x105) = 0x236f;
  uVar1 = FUN_00380eee(8,3,1);
  *(uint *)(*in_ECX + 0x44) = uVar1 & 0xffff;
  return;
}
