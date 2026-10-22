/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25FC7DF15A82FB8D74E690E2C154579D366FFEB9E55CBCE4FCEF0A50A7A34584
 * Entry: 0x002f33a0, Ghidra index: 10831, label: ReadFile
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__ReadFile(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
    uVar2 = NtReadFile(param_1,0,0,0,&local_c,param_2,param_3,0);
    if (((uVar2 == 0x103) &&
        (uVar1 = NtWaitForSingleObject(param_1,0,0), uVar2 = local_c, (int)uVar1 < 0)) ||
       (uVar1 = uVar2, (int)uVar2 < 0)) {
      if (uVar1 != 0xc0000011) {
        if ((uVar1 & 0xc0000000) == 0x80000000) {
          *param_4 = local_8;
        }
        goto LAB_002f347f;
      }
      *param_4 = 0;
    }
    else {
      *param_4 = local_8;
    }
  }
  else {
    local_14 = param_5[2];
    local_10 = param_5[3];
    *param_5 = 0x103;
    uVar1 = NtReadFile(param_1,param_5[4],0,~-(uint)((param_5[4] & 1) != 0) & (uint)param_5,param_5,
                       param_2,param_3,&local_14);
    if (((int)uVar1 < 0) || (uVar1 == 0x103)) {
      if (uVar1 == 0xc0000011) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0;
        }
        uVar1 = 0xc0000011;
      }
LAB_002f347f:
      XapiSetLastNTError(uVar1);
      return 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_5[1];
    }
  }
  return 1;
}
