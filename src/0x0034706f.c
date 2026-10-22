/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF60386BB74F51D1B7AF75F960098A555C0F536D752862CFA551AC10AD0AF42
 * Entry: 0x0034706f, Ghidra index: 12844, label: FUN_0034706f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034706f(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    iVar3 = 0x276d;
    goto LAB_0034716f;
  }
  iVar2 = FUN_003454a2(param_1);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  local_10 = param_3 & 0xffff;
  local_18 = param_8;
  local_14 = param_2;
  local_c = FUN_003453ef(param_2,param_3);
  uVar1 = *(uint *)(iVar2 + 0xc);
  if (((uVar1 & 2) == 0) && (param_6 != 0)) {
    iVar3 = *(int *)(param_6 + 4);
    if (((iVar3 != 0) && (*(short *)(param_6 + 2) != 0)) &&
       (((byte)iVar3 != 0x7f || (iVar3 == 0x100007f)))) {
      if (((byte)iVar3 & 0xf0) == 0xe0) {
        if (iVar3 != -1) {
          if ((uVar1 & 0x2000000) == 0) goto LAB_00347135;
          goto LAB_00347104;
        }
LAB_00347109:
        if ((uVar1 & 0x20000) == 0) {
          iVar3 = 0x271d;
          goto LAB_00347163;
        }
      }
      else {
LAB_00347104:
        if (iVar3 == -1) goto LAB_00347109;
      }
      if (((uVar1 & 0x20) != 0) || (iVar3 = FUN_003457b3(iVar2,uVar1 & 0xffff0000), -1 < iVar3)) {
        local_8 = param_6;
        goto LAB_00347140;
      }
      goto LAB_0034715c;
    }
LAB_00347135:
    iVar3 = 0x2741;
  }
  else {
    local_8 = 0;
LAB_00347140:
    iVar3 = FUN_00346b21(iVar2,local_1c);
    if (iVar3 < 0) {
LAB_0034715c:
      iVar3 = RtlNtStatusToDosError(iVar3);
    }
    else {
      *param_4 = local_c;
      iVar3 = 0;
    }
  }
LAB_00347163:
  *(undefined4 *)(iVar2 + 8) = 0x2b434f53;
  if (iVar3 == 0) {
    return 0;
  }
LAB_0034716f:
  XAPILIB__SetLastError(iVar3);
  return 0xffffffff;
}
