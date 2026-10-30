/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E258D9A67A96CBA4E1642BBB66B9D18C5EAAB1625F8F289C0186E2DC82166787
 * Entry: 0x000c3910, Ghidra index: 2392, label: FUN_000c3910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c8d28;
extern uint32_t DAT_003c8d2c;
extern uint32_t DAT_003c8d30;
extern uint32_t DAT_003c8d34;
void FUN_000c3910(int param_1)

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
  uVar1 = *(undefined2 *)(&DAT_003c8d2c + iVar2);
  *(undefined2 *)(in_ECX + 4) = *(undefined2 *)(&DAT_003c8d28 + iVar2);
  *(undefined2 *)(in_ECX + 6) = uVar1;
  *(undefined2 *)(in_ECX + 0xe) = *(undefined2 *)(&DAT_003c8d30 + iVar2);
  *(undefined2 *)(in_ECX + 0xc) = *(undefined2 *)(&DAT_003c8d34 + iVar2);
  return;
}
