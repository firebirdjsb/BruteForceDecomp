/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECFEADFA1A597077111A1E211C80C944E59F402EBF479C120A3E52BCF68B468C
 * Entry: 0x0025fab0, Ghidra index: 8612, label: FUN_0025fab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025fab0(void)

{
  uint *puVar1;
  uint uVar2;
  int unaff_EBX;
  int *piVar3;
  
  do {
    if (*(undefined4 **)(unaff_EBX + 0x10) == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)**(undefined4 **)(unaff_EBX + 0x10);
    }
    if (piVar3 == *(int **)(unaff_EBX + 0x10)) {
      return;
    }
    puVar1 = (uint *)piVar3[2];
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      if ((uVar2 & 0xffff) == 1) {
        if (((uVar2 & 0x70000) == 0x50000) && (puVar1[5] != 0)) {
          D3D8LTCG__D3DResource_Release(puVar1[5]);
        }
        uVar2 = *puVar1;
        if ((uVar2 & 0x780000) != 0) goto LAB_0025fb03;
        D3D8LTCG__D3D_DestroyResource__LTCG();
      }
      else {
LAB_0025fb03:
        *puVar1 = uVar2 - 1;
      }
      piVar3[2] = 0;
    }
    if (piVar3 != *(int **)(unaff_EBX + 0x10)) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar3);
    }
  } while( true );
}
