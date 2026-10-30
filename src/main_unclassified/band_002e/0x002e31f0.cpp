/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0973A86DDD8681AA73FAC446A4ACED23C1CCB8AD0E8888AC9A31CF14692AA285
 * Entry: 0x002e31f0, Ghidra index: 10393, label: FUN_002e31f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e31f0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  undefined4 local_4;
  
  local_4 = 0x10;
  iVar1 = FUN_00345123(*in_ECX,param_1,*param_2,0,param_3,&local_4);
  if (iVar1 == -1) {
    uVar2 = XAPILIB__GetLastError();
    *param_2 = 0;
    if ((uVar2 != 0) && (uVar2 != 0x2733)) {
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      return uVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    *param_2 = iVar1;
  }
  return 0;
}
