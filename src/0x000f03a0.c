/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DC99C8A564AD46E8D4D96C34A4389749D60BB96E6A6816B67B8DDD94D09CC0A
 * Entry: 0x000f03a0, Ghidra index: 2998, label: FUN_000f03a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f03a0(int *param_1)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar1 == 0x17506391) {
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a8))();
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x5c);
      iVar3 = 0;
      do {
        if (*piVar1 == *in_EAX) {
          local_8 = piVar1[1];
          if (local_8 != 0) goto LAB_000f046a;
          break;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 2;
      } while (iVar3 < 4);
      piVar1 = *(int **)(iVar2 + 0x80);
      piVar4 = piVar1;
      for (; (piVar1 != (int *)0x0 && (uVar5 < (uint)((*(int *)(iVar2 + 0x84) - (int)piVar1) / 0xc))
             ); uVar5 = uVar5 + 1) {
        if (*piVar4 == *in_EAX) {
          *param_1 = piVar4[2];
          return;
        }
        piVar4 = piVar4 + 3;
      }
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x10c))();
    if (iVar2 != 0) {
      local_8 = *(int *)(iVar2 + 0x28);
    }
  }
LAB_000f046a:
  *param_1 = local_8;
  return;
}
