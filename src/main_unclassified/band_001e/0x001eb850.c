/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1214266C250223909F9FBA8D18A0D9EBC531E84CEBA4AB7D3D637F9757612F2
 * Entry: 0x001eb850, Ghidra index: 6886, label: FUN_001eb850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb850(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  (**(code **)(*param_1 + 0x20))(in_ECX + 0x18);
  piVar1 = (int *)(in_ECX + 0x1c);
  (**(code **)(*param_1 + 0x24))(piVar1);
  if (param_1[1] == 1) {
    iVar2 = *piVar1;
    if (*(int *)(in_ECX + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(in_ECX + 0x20));
    }
    if (iVar2 != 0) {
      uVar3 = thunk_FUN_002ea01d(iVar2);
      *(undefined4 *)(in_ECX + 0x20) = uVar3;
      *piVar1 = iVar2;
    }
  }
  if (*piVar1 != 0) {
    (**(code **)(*param_1 + 0x48))(*(undefined4 *)(in_ECX + 0x20),&stack0xfffffffc);
  }
  return param_1[3];
}
