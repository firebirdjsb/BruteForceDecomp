/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F9FC4D32A6B662CC0DB1C7EFEA91912B733C62B7FEB506F91F5AEF3ACE5404F
 * Entry: 0x000599b0, Ghidra index: 894, label: FUN_000599b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00059920(int param_1,int param_2,int param_3);

extern uint32_t DAT_004a5900;
void FUN_000599b0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  while( true ) {
    iVar1 = in_EAX * 2 + 2;
    if (param_2 <= iVar1) break;
    if (*(float *)(*(int *)(DAT_004a5900 + 4) +
                   *(short *)(*(int *)(param_1 + -4 + iVar1 * 4) + 0x26) * 0x18 + 0x10) <
        *(float *)(*(int *)(DAT_004a5900 + 4) +
                   *(short *)(*(int *)(param_1 + iVar1 * 4) + 0x26) * 0x18 + 0x10)) {
      iVar1 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(param_1 + in_EAX * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    in_EAX = iVar1;
  }
  if (iVar1 == param_2) {
    *(undefined4 *)(param_1 + in_EAX * 4) = *(undefined4 *)(param_1 + -4 + param_2 * 4);
  }
  FUN_00059920(param_1);
  return;
}
