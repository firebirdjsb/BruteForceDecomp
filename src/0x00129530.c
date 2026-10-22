/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC0FBA3BE02D7CA0903D9290F1508EE1E306A4B0B2137F3AB1A58FC624E3528D
 * Entry: 0x00129530, Ghidra index: 3745, label: FUN_00129530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00129530(void)

{
  byte bVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  bVar1 = *(byte *)(in_EAX + 0x20d);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        FUN_001294e0(0);
        if ((*(byte *)(in_EAX + 0x20d) & 0x10) != 0) {
          FUN_00129510(0);
          return;
        }
        FUN_00129510(1);
      }
      else {
        FUN_001294e0(1);
        piVar3 = (int *)(**(code **)(*in_EAX + 0xf4))();
        if (piVar3 != (int *)0x0) {
          *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfd;
                    /* WARNING: Could not recover jumptable at 0x00129624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar3 + 0x10))();
          return;
        }
      }
    }
    else {
      piVar3 = (int *)(**(code **)(*in_EAX + 0xf4))();
      if (piVar3 != (int *)0x0) {
        *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfd;
        (**(code **)(*piVar3 + 0x10))();
      }
      iVar2 = (**(code **)(**(int **)(in_EAX[2] + 0xbec) + 0xc))();
      if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0x24), piVar3 != (int *)0x0)) {
        *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfd;
                    /* WARNING: Could not recover jumptable at 0x001295f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x10))();
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_EAX[2] + 0xbec) + 0xc))();
    if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0x24), piVar3 != (int *)0x0)) {
      *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfd;
      (**(code **)(*piVar3 + 0x10))();
    }
    if ((*(byte *)(in_EAX + 0x20d) & 2) == 0) {
      piVar3 = (int *)(**(code **)(*in_EAX + 0xf4))();
      if (piVar3 != (int *)0x0) {
        *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfd;
                    /* WARNING: Could not recover jumptable at 0x001295af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar3 + 0x10))();
        return;
      }
    }
    else {
      piVar3 = (int *)(**(code **)(*in_EAX + 0xf4))();
      if (piVar3 != (int *)0x0) {
        *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) | 2;
        (**(code **)(*piVar3 + 0xc))();
        *(byte *)(piVar3 + 5) = *(byte *)(piVar3 + 5) & 0xfb;
        return;
      }
    }
  }
  return;
}
