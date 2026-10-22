/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC749D566F6F548DC2A8DCFC42087953A1D66EA06D586C6AA950F2EB11AC87C9
 * Entry: 0x0002fa90, Ghidra index: 315, label: FUN_0002fa90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0002fa90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  uint uVar5;
  float10 fVar6;
  
  iVar1 = FUN_000120f0();
  if ((*(byte *)(unaff_EBX + 0x464) & 1) == 0) {
    return 0;
  }
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x59c), iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar1 + 8);
      }
      piVar4 = *(int **)(iVar2 + 4);
      if (piVar4 != (int *)0x0) {
        iVar2 = 0;
        uVar5 = 1;
        while( true ) {
          iVar3 = (**(code **)(*piVar4 + 0xf4))();
          if (((unaff_EBX != iVar3) && (iVar3 != 0)) &&
             ((*(int *)(iVar3 + 0x44) == 0x13 ||
              ((*(int *)(iVar3 + 0x44) == 0x78 && (*(int *)(iVar3 + 0x798) == 0)))))) {
            switch(*(undefined4 *)(iVar3 + 0x518)) {
            case 4:
            case 6:
            case 8:
              return 0;
            case 7:
              fVar6 = (float10)FUN_00012520();
              if ((float10)1.0 < fVar6) {
                return 0;
              }
            }
          }
          if (*(uint *)(iVar1 + 4) <= uVar5) break;
          iVar2 = iVar2 + 4;
          if (uVar5 < *(uint *)(iVar1 + 4)) {
            iVar3 = *(int *)(*(int *)(iVar1 + 8) + iVar2);
          }
          else {
            iVar3 = 0;
          }
          piVar4 = *(int **)(iVar3 + 4);
          uVar5 = uVar5 + 1;
          if (piVar4 == (int *)0x0) {
            return 1;
          }
        }
        return 1;
      }
    }
  }
  return 1;
}
