/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A5B3A7F58F2D8766C5EC1F268F566B8BC28A70B46E54019389799CCF6464694
 * Entry: 0x002bf0b0, Ghidra index: 9991, label: FUN_002bf0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443e28;
void FUN_002bf0b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  (*(code *)(&DAT_00443e28)
            [(int)*(short *)(((*(uint *)(iVar1 + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x32 + iVar1) +
             *(short *)((*(uint *)(iVar1 + 0x14) >> 8 & 3) * 0x1c + 0x32 + iVar1) * 4])();
  return;
}
