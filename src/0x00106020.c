/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD5670A4C4D3448AC022AD6DC94D978BACC61D64B54FCB167B84FF09692FDA4F
 * Entry: 0x00106020, Ghidra index: 3351, label: FUN_00106020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00106020(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x24) == 0x1a1cb7a3) {
    uVar3 = FUN_001050a0(in_ECX + 4);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x24) == 0x11d935c5) {
    cVar2 = FUN_00101ef0(in_ECX + 4);
    if (cVar2 != '\0') {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar4 + 4))(*(undefined4 *)(param_1 + 4));
    }
    return 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x24);
  if (iVar1 == -0x1201e8df) {
    uVar3 = FUN_00105110(param_1,in_ECX + 4);
    return uVar3;
  }
  if (iVar1 == 0x3046cea) {
    uVar3 = FUN_00105170(param_1);
  }
  return uVar3;
}
