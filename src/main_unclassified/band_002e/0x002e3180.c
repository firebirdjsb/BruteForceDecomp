/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF1EBA16D2053722B7D8583FA8109ACB91F1D1FE2DC0A79CFD61C81DB58ECE8
 * Entry: 0x002e3180, Ghidra index: 10392, label: FUN_002e3180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3180(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_00345109(*in_ECX,param_1,*param_2,0);
  if (iVar1 != -1) {
    *param_2 = iVar1;
    uVar2 = 0x80072746;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = XAPILIB__GetLastError();
  if (uVar2 == 0x2733) {
    *param_2 = 0;
    return 1;
  }
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffff | 0x80070000;
  }
  *param_2 = 0;
  return uVar2;
}
