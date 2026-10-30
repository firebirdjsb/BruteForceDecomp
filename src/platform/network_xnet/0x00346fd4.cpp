/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E04AC32D1D2F7AF77CC76FF11675C574C12CBF7E6D701F710D7D7D89B995A92
 * Entry: 0x00346fd4, Ghidra index: 12843, label: FUN_00346fd4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00346fd4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar1 = FUN_003454a2(param_1);
    if (iVar1 != 0) {
      local_10 = param_3 & 0xffff;
      local_18 = param_6;
      local_14 = param_2;
      local_c = FUN_003453ef(param_2,param_3);
      local_8 = 0;
      iVar2 = FUN_00346b21(iVar1,local_1c);
      if (iVar2 < 0) {
        iVar2 = RtlNtStatusToDosError(iVar2);
      }
      else {
        *param_4 = local_c;
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
