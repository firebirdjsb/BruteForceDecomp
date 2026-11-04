/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 563C56CD8AD78138574DEB99A39B3984818C0306FC6176EB02D7E1CFEBD0FDBA
 * Entry: 0x0022d820, Ghidra index: 7709, label: FUN_0022d820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two caller DWORDs, original EAX result, RET 8; guest ECX/EDX unbound. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int FUN_0022d820(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x228) + 0x174) != DAT_0046d064) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    iVar3 = 0;
    piVar2 = (int *)FUN_00160da0(0xffffffff,1);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 8))(uVar1);
      if (iVar3 != 0) {
        FUN_000da880(uVar1,iVar3,1);
        FUN_000da8f0(uVar1);
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 0x79) = 0;
          if (*(int *)(iVar3 + 0x3c) != param_1) {
            FUN_0008f6a0(param_1);
          }
          *(undefined4 *)(iVar3 + 0x1a8) = 0;
          *(byte *)(iVar3 + 0x71) = *(byte *)(iVar3 + 0x71) & 0xef;
        }
      }
    }
    return iVar3;
  }
  if (*(float *)(*(int *)(param_1 + 0x228) + 0x14c) == 0.0) {
    return 0;
  }
  return 0;
}
