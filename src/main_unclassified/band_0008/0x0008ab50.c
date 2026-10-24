/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 712C4024BECE811EC3DDA8C4C8FFBF5D520369D49A0261CFADBC0EB150193488
 * Entry: 0x0008ab50, Ghidra index: 1665, label: FUN_0008ab50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008ab50(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 0) {
      if (*(int *)(iVar4 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar4 + 8);
      }
      uVar5 = 1;
      iVar4 = *(int *)(iVar4 + 4);
      while (iVar4 != 0) {
        if (((*(byte *)(iVar4 + 0x70) & 1) == 0) ||
           (cVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x204))(iVar4), cVar3 == '\0')) {
          uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 4);
          if (uVar2 <= uVar5) {
            return;
          }
          if (uVar5 < uVar2) {
            iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + uVar5 * 4);
          }
          else {
            iVar4 = 0;
          }
          uVar5 = uVar5 + 1;
          iVar4 = *(int *)(iVar4 + 4);
        }
        else {
          FUN_0008ada0(param_1,iVar4);
          FUN_0008a000();
          iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 4);
          uVar5 = 1;
          if (iVar1 == 0) {
            return;
          }
          /* XBE 0x0008abc4: XOR EAX,EAX; MOV ESI,[EAX+4].
           * Guest absolute read at 0x4; host low-memory mapping unverified. */
          iVar4 = *(volatile int *)(uintptr_t)UINT32_C(0x4);
          if (iVar1 != 0) {
            iVar4 = *(int *)(**(int **)(*(int *)(param_1 + 0x28) + 8) + 4);
          }
        }
      }
    }
  }
  return;
}
