/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F6EE1CD72F97FF1BC24C8E028334139EBAA58CD42E07AB16EBF1C937F24236B
 * Entry: 0x000476b0, Ghidra index: 558, label: FUN_000476b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000476b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar4 = (int *)(param_3 + 0x14);
    piVar3 = (int *)(param_1 + 0x14);
    do {
      if (param_3 != param_1) {
        iVar1 = piVar3[-2];
        iVar2 = piVar3[-3];
        piVar4[-4] = piVar3[-4];
        piVar4[-3] = iVar2;
        piVar4[-2] = iVar1;
        if (*piVar4 != *piVar3) {
          FUN_0008f6a0(*piVar3);
        }
      }
      param_3 = param_3 + 0x18;
      param_1 = param_1 + 0x18;
      piVar4 = piVar4 + 6;
      piVar3 = piVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}
