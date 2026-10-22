/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01A9C9B8243D3B7ADB8F697338D10D1BFD820012D8C41C89D5A533E78C51220A
 * Entry: 0x003695b0, Ghidra index: 13265, label: FUN_003695b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
void FUN_003695b0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *(ushort *)(&DAT_004bdb60 + *DAT_004be768) | (*DAT_004be778 & 0x80) << 8;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
  }
  return;
}
