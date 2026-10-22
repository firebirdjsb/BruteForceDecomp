/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0427D5BA4B2F0E8690E433F8F37755B8F49068C5AFD9DE89A6020D15D8CBF1EC
 * Entry: 0x00085320, Ghidra index: 1553, label: FUN_00085320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t DAT_00469ab4;
extern uint32_t DAT_00469b58;
void FUN_00085320(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int local_4;
  
  piVar1 = DAT_00469ab4;
  iVar2 = 0;
  uVar6 = 0;
  local_4 = 0;
  if (DAT_00469aac == 0) {
LAB_0008539c:
    *param_1 = iVar2;
    *param_2 = uVar6;
    return;
  }
  iVar2 = 1;
  do {
    iVar3 = (**(code **)(*piVar1 + 8))(iVar2);
    if ((iVar3 != 0) && (piVar5 = *(int **)(iVar3 + 0x10), piVar5 != (int *)0x0)) {
      uVar4 = (**(code **)(*piVar5 + 0x84))();
      uVar6 = uVar6 ^ uVar4;
      if ((*(byte *)(piVar5 + 0x1c) & 1) == 0) {
        local_4 = local_4 + 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar5 == 0x17506391) {
    iVar2 = (**(code **)(*piVar1 + 0x20))(0);
    if (iVar2 != 0) {
      iVar2 = FUN_0005baf0();
      goto LAB_0008539c;
    }
  }
  *param_1 = local_4;
  *param_2 = uVar6;
  return;
}
