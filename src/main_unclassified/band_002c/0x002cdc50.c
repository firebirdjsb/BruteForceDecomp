/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E329BEB38E3E698F46BD71741BB31B4689088689D75F62F7CE4E33F706D8C9E9
 * Entry: 0x002cdc50, Ghidra index: 10171, label: FUN_002cdc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
void FUN_002cdc50(undefined4 param_1)

{
  int iVar1;
  int *in_EAX;
  uint *in_ECX;
  
  iVar1 = *in_EAX;
  FUN_002ccc10(param_1,(*in_ECX & 0xffff) * 0x10 + iVar1 + (int)in_EAX,
               (*(uint *)((int)in_ECX + *(int *)(&DAT_003b86f0 + ((uint)in_ECX & 0xc))) & 0xffff) *
               0x10 + iVar1 + (int)in_EAX,
               (*(uint *)((int)in_ECX + *(int *)(&DAT_003b86e0 + ((uint)in_ECX & 0xc))) & 0xffff) *
               0x10 + iVar1 + (int)in_EAX);
  return;
}
