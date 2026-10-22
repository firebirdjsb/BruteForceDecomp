/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4261BE4BCC527C1233F669807EC82DE262934D36A4B60F92025999C97DD6CCA
 * Entry: 0x0024eb50, Ghidra index: 8305, label: FUN_0024eb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024eb50(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  int unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0xa4) == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)**(undefined4 **)(unaff_EDI + 0xa4);
  }
  puVar1 = *(undefined4 **)(unaff_EDI + 0xa4);
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    uVar3 = (**(code **)(*(int *)puVar4[2] + 4))();
    switch(uVar3) {
    case 1:
    case 2:
      piVar2 = *(int **)(puVar4[2] + 0xe0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x18))(piVar2,unaff_EBX - *(int *)(unaff_EDI + 0x14));
      }
      break;
    case 10:
      piVar2 = *(int **)(puVar4[2] + 0xfc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2,unaff_EBX - *(int *)(unaff_EDI + 0x14));
      }
      break;
    case 0xd:
      piVar2 = *(int **)(puVar4[2] + 0xe0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(piVar2,unaff_EBX - *(int *)(unaff_EDI + 0x14));
      }
    }
  }
  *(int *)(unaff_EDI + 0x14) = unaff_EBX;
  return 0;
}
