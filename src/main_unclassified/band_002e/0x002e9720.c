/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C2BB7B5AB34BB8067606DB44B107714A90FCFB963971317F24D32DFD64AC399
 * Entry: 0x002e9720, Ghidra index: 10554, label: FUN_002e9720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e9720(undefined4 *param_1,ushort *param_2)

{
  int iVar1;
  int *in_ECX;
  int *unaff_retaddr;
  undefined4 local_4;
  
  if (in_ECX[1] == 0) {
    param_2 = (ushort *)(uint)*param_2;
    iVar1 = (**(code **)(*in_ECX + 0x40))(&param_2);
    if (-1 < iVar1) {
      (**(code **)(*in_ECX + 0x48))(*unaff_retaddr,&stack0xfffffff4);
    }
  }
  else {
    local_4 = 0;
    iVar1 = (**(code **)(*in_ECX + 0x40))(&local_4);
    if (-1 < iVar1) {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
      }
      iVar1 = in_ECX[8];
      *unaff_retaddr = iVar1;
      (**(code **)(*in_ECX + 0x48))(iVar1,param_1);
      return;
    }
  }
  return;
}
