/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 612E9DB4CDCBC4A43EB3CFA3CE75DFD9B876C3C7B6308294AFA93D70FDC7D70D
 * Entry: 0x0013f660, Ghidra index: 4058, label: FUN_0013f660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f660(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  int *piVar2;
  undefined1 local_4 [4];
  
  if (*(undefined4 **)(unaff_EBX + 0xc) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0xc);
  }
  if (piVar2 != *(int **)(unaff_EBX + 0xc)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(unaff_EBX + 0xc));
  }
  puVar1 = *(undefined4 **)(unaff_EBX + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001298b0(local_4,0,0);
    return;
  }
  FUN_001298b0(local_4,*puVar1,puVar1);
  return;
}
