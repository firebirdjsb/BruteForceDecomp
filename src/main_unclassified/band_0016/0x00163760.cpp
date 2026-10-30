/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 887C9511ACC588B7011D22697FEC1C8E3EF3375AEC20892E7E314F7E2A2C6AEF
 * Entry: 0x00163760, Ghidra index: 4670, label: FUN_00163760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00163760(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (in_EAX - param_1) / 0x18;
  if (1 < iVar1) {
    piVar3 = (int *)(in_EAX + -0x14);
    if (iVar1 < 2) goto LAB_0016382b;
    do {
      uStack_1c = 0;
      uStack_20 = param_2;
      if (*piVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_002ea01d(4,piVar3[-1],0);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_0001fdc0();
        }
      }
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)*piVar3;
      }
      puVar4 = local_30;
      iVar1 = 4 - (int)puVar4;
      iVar2 = 4;
      do {
        *puVar4 = *(undefined4 *)((int)piVar3 + iVar1 + (int)puVar4);
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_001650f0(param_1,piVar3 + -1);
LAB_0016382b:
      piVar3 = piVar3 + -6;
    } while (1 < ((0x14 - param_1) + (int)piVar3) / 0x18);
  }
  return;
}
