/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA40D2B93DB4F85F5D01350E889AF740DFBF1A841BD3A132E61AB56AF523E807
 * Entry: 0x002e4640, Ghidra index: 10449, label: FUN_002e4640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e4640(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int unaff_EBX;
  int unaff_retaddr;
  
  iVar2 = *in_ECX;
  puVar1 = (undefined4 *)(**(code **)(iVar2 + 4))(param_1);
  iVar2 = (**(code **)(iVar2 + 0xc))(param_1,*puVar1);
  if (((in_ECX[param_1 * 4 + 0x12] == iVar2) && (in_ECX[(param_1 + 5) * 4] == unaff_EBX)) &&
     (in_ECX[(param_1 + 5) * 4 + 1] == unaff_retaddr)) {
    return 0;
  }
  in_ECX[param_1 * 4 + 0x12] = iVar2;
  in_ECX[(param_1 + 5) * 4] = unaff_EBX;
  in_ECX[(param_1 + 5) * 4 + 1] = unaff_retaddr;
  in_ECX[param_1 * 4 + 0x13] = 1;
  *(undefined1 *)(in_ECX + 0x92) = 1;
  return 0;
}
