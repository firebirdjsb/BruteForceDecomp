/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59707E9E5EBC96C048D3DFE3F046F317A3AEDD24594B67531AA52CE495DA16C7
 * Entry: 0x0013ec30, Ghidra index: 4039, label: FUN_0013ec30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_0046d064;
void FUN_0013ec30(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(in_EAX + 0x18);
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar2 = (**(code **)(*piVar3 + 0x40))();
  if ((*(int *)(iVar1 + 0x3f0) != DAT_0046d064) && (iVar2 != 0)) {
    piVar3 = (int *)FUN_000da800();
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(piVar3[0x3a] + 0xc) = 0;
      (**(code **)(*piVar3 + 0x44))(iVar2);
      FUN_0021c380(0x3f800000);
    }
  }
  return;
}
