/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 117771767AABBE3B4A866C32351E5F261FF23BD9ABA5FB9233E0E49C87F0B86E
 * Entry: 0x002f348d, Ghidra index: 10832, label: WriteFile
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__WriteFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 == (undefined4 *)0x0) {
    uVar2 = NtWriteFile(param_1,0,0,0,&local_c,param_2,param_3,0);
    if (((uVar2 != 0x103) ||
        (uVar1 = NtWaitForSingleObject(param_1,0,0), uVar2 = local_c, -1 < (int)uVar1)) &&
       (uVar1 = uVar2, -1 < (int)uVar2)) {
      *param_4 = local_8;
      return 1;
    }
    if ((uVar1 & 0xc0000000) == 0x80000000) {
      *param_4 = local_8;
    }
  }
  else {
    local_14 = param_5[2];
    local_10 = param_5[3];
    *param_5 = 0x103;
    uVar1 = NtWriteFile(param_1,param_5[4],0,~-(uint)((param_5[4] & 1) != 0) & (uint)param_5,param_5
                        ,param_2,param_3,&local_14);
    if (((uVar1 & 0xc0000000) != 0xc0000000) && (uVar1 != 0x103)) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = param_5[1];
      }
      return 1;
    }
  }
  XapiSetLastNTError(uVar1);
  return 0;
}
