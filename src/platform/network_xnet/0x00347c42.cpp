/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49A6166D842993B48DB2495D3C101664ADCCA65A9F515FD595A6CB7FD27D4CED
 * Entry: 0x00347c42, Ghidra index: 12879, label: FUN_00347c42
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347c42(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 local_18c [384];
  undefined4 local_c;
  undefined4 local_8;
  
  XcKeyTable(param_3 != 8,local_18c,param_2);
  local_c = *param_4;
  local_8 = param_4[1];
  XcBlockCryptCBC(param_3 != 8,param_6,param_5,param_5,local_18c,param_1,&local_c);
  return;
}
