/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 066ADCA6BD71E7ED08C136B4D211F7230784A190B22FD33225FEE1CA72FCA03C
 * Entry: 0x002b5440, Ghidra index: 9791, label: FUN_002b5440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004a5b24;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b5440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  double dVar2;
  int in_EDX;
  
  dVar2 = (double)CONCAT44(param_2,param_1);
  iVar1 = *(int *)(in_EDX + 0x94);
  *(float *)(iVar1 + 0x1c) = (float)dVar2;
  if ((double)*(float *)(iVar1 + 0x24) <= dVar2 - (double)_DAT_004a5b24) {
    _DAT_004a5b24 = (float)dVar2;
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x20) = 1;
  }
  FUN_002c80b0(in_EDX,param_1,param_2);
  return;
}
