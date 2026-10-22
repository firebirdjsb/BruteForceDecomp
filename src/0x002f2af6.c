/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 352A517A3CF2ACA57482F49B988ABE50429614F320A295B873826E73EF438558
 * Entry: 0x002f2af6, Ghidra index: 10816, label: XGetVideoFlags
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint XAPILIB__XGetVideoFlags(void)

{
  int iVar1;
  undefined1 local_c [4];
  uint local_8;
  
  iVar1 = ExQueryNonVolatileSetting(8,local_c,&local_8,4,0);
  if (iVar1 < 0) {
    local_8 = 0;
  }
  else {
    local_8 = local_8 >> 0x10 & 0x5f;
  }
  iVar1 = XGetAVPack();
  if ((iVar1 == 1) && (iVar1 = XGetVideoStandard(), iVar1 != 3)) {
    return local_8;
  }
  return local_8 & 0xfffffff1;
}
