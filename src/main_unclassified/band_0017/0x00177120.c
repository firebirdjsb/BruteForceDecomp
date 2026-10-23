/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07707621A4DC942C49C0B4550926CCB341BDE991D3D3B75F7925448EC99E4DFC
 * Entry: 0x00177120, Ghidra index: 4948, label: FUN_00177120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00177120(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_000d42b0();
  iVar4 = (*(code *)**(undefined4 **)(iVar3 + 8))();
  if (iVar4 != 0) {
    piVar5 = (int *)(*(code *)**(undefined4 **)(iVar3 + 8))();
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 4))();
    uVar1 = puVar6[2];
    uVar2 = puVar6[1];
    *param_2 = *puVar6;
    param_2[1] = uVar2;
    param_2[2] = uVar1;
    return 0;
  }
  return 0x80004001;
}
