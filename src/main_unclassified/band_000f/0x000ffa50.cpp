/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7E3251B690CE7F544E7661D56687FF4AC18B34DE4D0385AA34958D0FFD7058A
 * Entry: 0x000ffa50, Ghidra index: 3201, label: FUN_000ffa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000ffa50(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int *piVar6;
  int unaff_EDI;
  
  uVar5 = 0;
  if (*(int *)(unaff_EDI + 0x74) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(unaff_EDI + 0x78) - *(int *)(unaff_EDI + 0x74) >> 2;
  }
  if (0 < iVar4) {
    uVar3 = 0;
    piVar6 = *(int **)(unaff_EDI + 0x74);
    while (*(int *)(*piVar6 + 0x24) != *param_1) {
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
      if (iVar4 <= (int)uVar3) {
        return 0;
      }
    }
    uVar5 = 0;
    if (((-1 < (int)uVar3) && (*(int *)(unaff_EDI + 0x74) != 0)) &&
       (uVar3 < (uint)(*(int *)(unaff_EDI + 0x78) - *(int *)(unaff_EDI + 0x74) >> 2))) {
      piVar6 = (int *)(*(int **)(unaff_EDI + 0x74))[uVar3];
      cVar2 = (**(code **)(*piVar6 + 0x14))();
      if (cVar2 != '\0') {
        FUN_000ffd00();
        uVar5 = 1;
        *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) | 1;
        if ((piVar6[1] != 0) && (piVar1 = *(int **)(piVar6[1] + 0x94), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x28))(piVar6);
        }
        (**(code **)(*piVar6 + 0x20))();
      }
    }
  }
  return uVar5;
}
