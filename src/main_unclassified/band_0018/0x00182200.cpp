/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0D10AAAD27EC5D3829963478178ECD81156305FF5F56E7E457AE7B43CC8084E
 * Entry: 0x00182200, Ghidra index: 5172, label: FUN_00182200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00182200(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *in_EAX;
  int iVar5;
  int *piVar6;
  int in_ECX;
  undefined4 *puVar7;
  
  iVar3 = param_1;
  iVar5 = 2;
  if (param_1 != -1) {
    iVar5 = param_1 + -1;
  }
  iVar5 = in_ECX + iVar5 * 0xc;
  if (iVar5 != 0) {
    puVar1 = *(undefined4 **)(iVar5 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)*puVar1;
    }
    iVar5 = 0;
    if (puVar7 != puVar1) {
      do {
        iVar2 = puVar7[2];
        if ((*(int *)(iVar2 + 0x38) == 0) && (iVar5 = iVar2, *(int *)(iVar2 + 0x74) == *in_EAX))
        break;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != puVar1);
      if (iVar5 != 0) {
        if (*(int *)(iVar5 + 0x74) == *in_EAX) {
LAB_001822b0:
          FUN_00181850(iVar3 == 1);
          return iVar5;
        }
        piVar6 = (int *)FUN_0017be00(in_EAX);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
          param_1 = FUN_002383b0();
          if (((piVar6[0x50] != 0) && (piVar6[0x51] != 0)) &&
             (cVar4 = FUN_00181820(&param_1,piVar6[0x50],piVar6[0x51]), cVar4 != '\0'))
          goto LAB_001822b0;
        }
      }
    }
  }
  return 0;
}
