/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2601A5F45E6FD6E94D603A89299A9C636D238141E139E89414E17B6CFEBFC306
 * Entry: 0x0014f7a0, Ghidra index: 4397, label: FUN_0014f7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched C++17 declaration only; original Xbox ABI_UNVERIFIED. */
extern int FUN_000ab260(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0014f7a0(void)

{
  float *in_EAX;
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_ESI;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if ((*piVar1 != 0x120785ef) && ((*(byte *)(unaff_EBX + 1) & 1) != 0)) {
    if ((*unaff_EBX != 0) &&
       (pfVar2 = (float *)(**(code **)(*(int *)(*unaff_EBX + 8) + 4))(),
       (*pfVar2 - *in_EAX) * (*pfVar2 - *in_EAX) +
       (pfVar2[1] - in_EAX[1]) * (pfVar2[1] - in_EAX[1]) +
       (pfVar2[2] - in_EAX[2]) * (pfVar2[2] - in_EAX[2]) < 25.0)) {
      return;
    }
    iVar3 = (**(code **)(*unaff_ESI + 0xf4))();
    if (iVar3 != 0) {
      iVar3 = FUN_000ab260();
      *unaff_EBX = iVar3;
      return;
    }
    iVar3 = FUN_000ab260();
    *unaff_EBX = iVar3;
  }
  return;
}
