/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9A7ACF459DFF0FB8E8BF45F5499FD16A38C4515431549AEF6AD874695442174
 * Entry: 0x000f4100, Ghidra index: 3058, label: FUN_000f4100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_000f4100(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 unaff_retaddr;
  
  for (piVar3 = *(int **)(param_2 + 0x74);
      (piVar5 = (int *)0x0, piVar3 != *(int **)(param_2 + 0x78) &&
      (piVar5 = (int *)*piVar3, piVar5[9] != 0x1f22675b)); piVar3 = piVar3 + 1) {
  }
  if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 4))(), iVar2 == 8)) {
    iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1ac))();
    puVar4 = *(undefined4 **)(iVar2 + 4);
    if (puVar4 != *(undefined4 **)(iVar2 + 8)) {
      while( true ) {
        piVar3 = (int *)piVar5[0x1f];
        if (piVar3 == (int *)piVar5[0x20]) break;
        while (*(int *)(*piVar3 + 0x24) != *(int *)*puVar4) {
          piVar3 = piVar3 + 1;
          if (piVar3 == (int *)piVar5[0x20]) goto LAB_000f418e;
        }
        puVar4 = puVar4 + 1;
        if (puVar4 == *(undefined4 **)(iVar2 + 8)) {
          return '\0';
        }
      }
LAB_000f418e:
      piVar3 = (int *)(param_1 + 0x10);
      *piVar3 = *(int *)*puVar4;
      FUN_000f1430(param_1,piVar5);
      cVar1 = FUN_00102e10(piVar3);
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1bc))(piVar3);
        FUN_000f4200(unaff_retaddr);
      }
      return cVar1;
    }
  }
  return '\0';
}
