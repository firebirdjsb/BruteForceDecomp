/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 216F6EDBAD137675BC28A7452CC3D7DD440E2AD90AECF2A1D972D94B8C857FE6
 * Entry: 0x002f3071, Ghidra index: 10821, label: FUN_002f3071
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f3071(undefined4 param_1)

{
  int iVar1;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  RtlInitAnsiString(local_c,param_1);
  local_14 = local_c;
  local_18 = 0xfffffffd;
  local_10 = 0x40;
  iVar1 = NtQueryFullAttributesFile(&local_18,local_50);
  if (iVar1 < 0) {
    XAPILIB__XapiSetLastNTError(iVar1);
    local_20 = 0xffffffff;
  }
  return local_20;
}
