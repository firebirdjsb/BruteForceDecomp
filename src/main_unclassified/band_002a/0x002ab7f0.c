/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F880446369AA98FA515B7063FB876C5AA8D3E53148F354054DD52035CF827C7D
 * Entry: 0x002ab7f0, Ghidra index: 9665, label: FUN_002ab7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ab7f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 8);
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x1c)) {
      do {
        piVar1 = (int *)*puVar4;
        cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
        if (cVar2 == '\0') {
          (**(code **)(*piVar1 + 0x40))(piVar1,param_2,param_3);
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 4;
      } while (iVar5 < *(short *)(param_1 + 0x1c));
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x002ab805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 0x40))();
  return uVar3;
}
