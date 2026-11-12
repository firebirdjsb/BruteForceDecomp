/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C4460EAA1D07D6E7FA610FCA8766D04C89F81F37856B89F9DCDCED72697BFAE
 * Entry: 0x00171b20, Ghidra index: 4863, label: FUN_00171b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(uint32_t guest_eax);
undefined4 FUN_00171b20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  // 0x00171B21..0x00171B27 load the first stack DWORD and subtract 0x70 in EAX.
  piVar3 = (int *)FUN_000120f0(param_1 - 0x70u);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xec))();
  piVar3 = (int *)(**(code **)*puVar4)();
  iVar5 = (**(code **)(*piVar3 + 0x40))();
  uVar1 = *(undefined4 *)(iVar5 + 0x2c);
  uVar2 = *(undefined4 *)(iVar5 + 0x28);
  *param_2 = *(undefined4 *)(iVar5 + 0x24);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return 0;
}
