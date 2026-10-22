/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 637FA3CFC45D6B7C4E1922D11C750E5F4AA84D9073DF3557985E94A73B1928E2
 * Entry: 0x00346e81, Ghidra index: 12841, label: FUN_00346e81
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00346e81(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(param_1);
    if (iVar1 != 0) {
      local_14 = param_2[1];
      local_10 = *param_2;
      local_1c = *param_5;
      local_18 = param_4;
      local_20 = param_8;
      local_c = param_6;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
        param_6[3] = 0;
        *param_7 = 0x10;
        *(undefined2 *)param_6 = 2;
      }
      iVar2 = FUN_00346965(iVar1,local_24);
      *param_5 = local_1c;
      if (iVar2 < 0) {
        iVar2 = RtlNtStatusToDosError(iVar2);
      }
      else {
        iVar2 = 0;
      }
      *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
      if (iVar2 == 0) {
        return 0;
      }
      XAPILIB__SetLastError(iVar2);
    }
  }
  return 0xffffffff;
}
