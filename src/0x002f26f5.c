/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1563853D9218EF2C22C905086E38504847B59085F8AC74B3C6EFD69B2996D8DF
 * Entry: 0x002f26f5, Ghidra index: 10803, label: XGetLaunchInfo
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetLaunchInfo(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)LaunchDataPage_exref;
  if ((piVar1 == (int *)0x0) ||
     (((iVar3 = *piVar1, iVar3 != 2 && (iVar3 != 3)) &&
      (piVar1[1] != XBE_CERTIFICATE_HEADER_00010180.TitleID)))) {
    uVar2 = 0x490;
  }
  else {
    *param_1 = iVar3;
    puVar4 = (undefined4 *)(*(int *)LaunchDataPage_exref + 0x400);
    for (iVar3 = 0x300; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    uVar2 = *(undefined4 *)LaunchDataPage_exref;
    *(undefined4 *)LaunchDataPage_exref = 0;
    MmFreeContiguousMemory(uVar2);
    uVar2 = 0;
  }
  return uVar2;
}
