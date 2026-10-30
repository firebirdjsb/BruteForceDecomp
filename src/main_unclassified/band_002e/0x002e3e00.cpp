/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82461C913C580B3AFEA11948875D258F4048771114EA09B5FD0FB5D51F2EF495
 * Entry: 0x002e3e00, Ghidra index: 10422, label: FUN_002e3e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int in_ECX;
  
  FUN_002e2fb0(0xffffffff);
  *(undefined1 *)(in_ECX + 0x1c4) = 0;
  FUN_002e3ff0(1);
  FUN_002e3ff0(1);
  FUN_002e3ff0(1);
  FUN_002e3ff0(1);
  FUN_002e39e0(param_2,param_4,param_5,param_6);
  FUN_002e39e0(param_3,param_4,param_7,param_8);
  FUN_002e2f80();
  *(undefined4 *)(in_ECX + 0x2c0) = param_1;
  FUN_002e3d80();
  return;
}
