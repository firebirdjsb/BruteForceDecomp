/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31C8187A3683335B23D7C930EB6ACFF4CD89548977F4BD1C968ADD0D2234D36B
 * Entry: 0x000c9f40, Ghidra index: 2498, label: FUN_000c9f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_002eaa70(short *param_1);
extern int FUN_000876a0(int param_1,uint param_2);
extern void FUN_0008ed00(void);
extern void FUN_000ca000(int param_1,int param_2);

void FUN_000c9f40(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  int unaff_EDI;
  undefined1 local_1c [4];
  undefined4 **local_18 [4];
  undefined4 local_8;
  uint local_4;
  
  local_4 = 7;
  local_8 = 0;
  local_18[0] = (undefined4 **)((uint)local_18[0] & 0xffff0000);
  iVar3 = *(int *)(*(int *)(unaff_EDI + 100) + 0x2c);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x3c) == '\0') {
      if (*(uint *)(iVar3 + 0x1c) < 8) {
        iVar3 = iVar3 + 8;
      }
      else {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x20);
    }
    if (iVar3 != 0) {
      uVar1 = FUN_002eaa70(iVar3);
      FUN_000876a0(local_1c,uVar1);
      FUN_002eaa70();
      FUN_0008ed00();
      goto LAB_000c9fbf;
    }
  }
  uVar1 = FUN_002eaa70();
  FUN_000876a0(local_1c,uVar1);
LAB_000c9fbf:
  pppuVar2 = (undefined4 ***)local_18[0];
  if (local_4 < 8) {
    pppuVar2 = local_18;
  }
  FUN_000ca000(unaff_EDI,pppuVar2,param_1);
  if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18[0]);
  }
  return;
}
