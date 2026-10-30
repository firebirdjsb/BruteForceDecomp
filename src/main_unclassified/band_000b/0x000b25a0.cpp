/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90FDDAEF8688A10D830E40A097280D65EB4F2F231487E32B6077BCC2196EEA02
 * Entry: 0x000b25a0, Ghidra index: 2145, label: FUN_000b25a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);
extern void FUN_000e0860(int *param_1);

void FUN_000b25a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_000ff730(param_1 + 0x14,iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  if ((piVar2[10] != 0) && (piVar2[10] != param_1)) {
    param_2 = piVar2;
    FUN_000e0860(&param_2);
  }
  (**(code **)(*piVar2 + 0x28))(param_1);
  return;
}
