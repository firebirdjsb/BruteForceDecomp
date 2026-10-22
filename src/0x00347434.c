/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABB6387861244055849B196BE3CA5F5D05BDEC31489E109A47D579E5EB3A1B3D
 * Entry: 0x00347434, Ghidra index: 12848, label: FUN_00347434
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00347434(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_00346e81(param_1,&local_c,1,&param_3,&param_4,param_5,param_6,0,0);
  if (iVar1 != 0) {
    param_3 = 0xffffffff;
  }
  return param_3;
}
