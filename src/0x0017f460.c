/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51FEEFA6DAC9507DFC4C9FE81BEED57C3062F2795CF4FC40B9B9BB5CB22F292D
 * Entry: 0x0017f460, Ghidra index: 5126, label: FUN_0017f460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017f460(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_EDX;
  int *unaff_ESI;
  int unaff_EDI;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0;
  if (unaff_ESI != (int *)0x0) {
    iVar1 = in_EDX[2];
    iVar3 = in_EDX[1];
    unaff_ESI[1] = *in_EDX;
    unaff_ESI[2] = iVar3;
    unaff_ESI[3] = iVar1;
    FUN_0017e200(param_1,&local_c,1);
    if (unaff_EDI == 0) {
      uVar2 = (**(code **)(*unaff_ESI + 0xc))(&local_c,iVar3);
      return uVar2;
    }
    *(undefined4 *)(unaff_EDI + 0xc) = local_4;
    *(undefined4 *)(unaff_EDI + 4) = local_c;
    *(undefined4 *)(unaff_EDI + 8) = local_8;
    uVar2 = 1;
  }
  return uVar2;
}
