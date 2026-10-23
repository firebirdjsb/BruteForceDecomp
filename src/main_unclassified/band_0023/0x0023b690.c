/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7D92502E87364F19CA3EDD44BA633ED1FD5C6AD0A1CC766D7420701F20EC8CD
 * Entry: 0x0023b690, Ghidra index: 7912, label: FUN_0023b690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0023b690(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_002f3071(param_2);
  if (uVar1 == 0xffffffff) {
    iVar2 = XAPILIB__GetLastError();
    return -(uint)(iVar2 != 2) & 0x80004005;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar1 = FUN_0023aff0(param_2,param_3);
    return uVar1;
  }
  iVar2 = FUN_002f30bc(param_2);
  return (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
}
