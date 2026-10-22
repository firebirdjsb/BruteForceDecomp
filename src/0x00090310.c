/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD9C073F26BDC4B36E04BA97D9443DA2A385E11732A6B2BC9DD57DD802357271
 * Entry: 0x00090310, Ghidra index: 1764, label: FUN_00090310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00090310(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x94))(param_2);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    uVar2 = FUN_0023be90(unaff_retaddr);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}
