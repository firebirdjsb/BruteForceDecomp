/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DB48819156A651DDEEBA937603CA696FA1D094BE0F415A0BA4288B9675C4F8D
 * Entry: 0x00072900, Ghidra index: 1283, label: FUN_00072900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00072900(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(in_EAX + 0x38);
  do {
    if (((iVar1 != param_2) && (*piVar2 == param_1)) && (*piVar2 != 0)) {
      FUN_0008f6a0(0);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 7);
  return;
}
