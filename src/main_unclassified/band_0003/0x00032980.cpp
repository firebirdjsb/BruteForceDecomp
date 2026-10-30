/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA95B69796B3E86C3DB70BDC4181AFA91B4473F5E668A2D11115F642F6A646BC
 * Entry: 0x00032980, Ghidra index: 328, label: FUN_00032980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00032980(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0x17f];
  if (iVar1 == 0) {
    (**(code **)(*in_ECX + 0xe0))(param_1);
  }
  else if (iVar1 == 1) {
    iVar1 = (**(code **)(*in_ECX + 0xf0))(param_1);
    if (iVar1 == 2) {
      iVar1 = (**(code **)(*in_ECX + 0xd8))();
      if (iVar1 == 1) {
        in_ECX[0x17f] = 0;
        return;
      }
    }
  }
  else if (iVar1 == 2) {
    (**(code **)(*in_ECX + 0xf0))(param_1);
    return;
  }
  return;
}
