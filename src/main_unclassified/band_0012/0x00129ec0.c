/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA392E1648050065C0EC589B310688DAF12606B27F2FB4D462D02781C22FAA60
 * Entry: 0x00129ec0, Ghidra index: 3758, label: FUN_00129ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00129ec0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_ESI;
  
  piVar4 = param_3;
  puVar3 = param_1;
  piVar1 = *(int **)(unaff_ESI + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    FUN_0012aac0(piVar1[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *puVar3 = **(undefined4 **)(unaff_ESI + 4);
    return puVar3;
  }
  while (piVar2 != piVar4) {
    param_2 = piVar2;
    FUN_0012aba0();
    FUN_0012a450(unaff_ESI,&param_1,piVar2);
    piVar2 = param_2;
  }
  *puVar3 = piVar2;
  return puVar3;
}
