/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 733C3B67F81FFCA928590BA8B7E0477B7ABB96E763BE8F1DC6389E687092C1B6
 * Entry: 0x002e3010, Ghidra index: 10387, label: FUN_002e3010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3010(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  undefined4 local_4;
  
  local_4 = 0x10;
  iVar1 = FUN_003450d5(*in_ECX,param_1,&local_4);
  if (iVar1 == -1) {
    uVar2 = XAPILIB__GetLastError();
    if (uVar2 == 0x2733) {
      return 1;
    }
    if (0 < (int)uVar2) {
      return uVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    *param_2 = iVar1;
    uVar2 = 0;
  }
  return uVar2;
}
