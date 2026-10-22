/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAEB314A29D88915EA143A443E7B75901FCC393DBCBAEB92EC0B02E4D77D0FEF
 * Entry: 0x00059920, Ghidra index: 893, label: FUN_00059920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5900;
void FUN_00059920(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  if (in_EAX <= param_2) {
    *(int *)(param_1 + in_EAX * 4) = param_3;
    return;
  }
  do {
    iVar2 = (in_EAX + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (*(float *)(*(int *)(DAT_004a5900 + 4) + 0x10 + *(short *)(iVar1 + 0x26) * 0x18) <=
        *(float *)(*(int *)(DAT_004a5900 + 4) + 0x10 + *(short *)(param_3 + 0x26) * 0x18)) {
      *(int *)(param_1 + in_EAX * 4) = param_3;
      return;
    }
    *(int *)(param_1 + in_EAX * 4) = iVar1;
    in_EAX = iVar2;
  } while (param_2 < iVar2);
  *(int *)(param_1 + iVar2 * 4) = param_3;
  return;
}
