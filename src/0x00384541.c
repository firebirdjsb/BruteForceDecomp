/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9913EBABD6591D980FF446388BBA1ABFC1A023DA1DA41581FFDBC1A04F6F2027
 * Entry: 0x00384541, Ghidra index: 13648, label: FUN_00384541
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Call target FUN_00384353 has this exact signature in its current C draft.
 * Callback ABI, register inputs and Xbox behavior remain ABI_UNVERIFIED. */
extern void FUN_00384353(int param_1,undefined4 param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041280a;
extern uint32_t DAT_00412870;
extern uint32_t DAT_004128b8;
void FUN_00384541(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_retaddr;
  
  iVar2 = FUN_00380fc4();
  KeCancelTimer(&DAT_00412870);
  bVar1 = (byte)DAT_0041280a;
  if (*(int *)(unaff_retaddr + 4) < 0) {
    FUN_00383ffe(param_2);
  }
  else {
    *(byte *)(iVar2 + 2) = (byte)DAT_0041280a;
    if (7 < bVar1) {
      *(undefined1 *)(iVar2 + 2) = 7;
    }
    FUN_00383ce1(3);
    DAT_004128b8 = iVar2;
    FUN_00383c3a(iVar2,1);
    FUN_0038274f(0);
    *(undefined1 *)(iVar2 + 3) = 1;
    *(undefined1 *)(iVar2 + 8) = 0x30;
    *(undefined1 *)(iVar2 + 9) = 0x40;
    *(code **)(iVar2 + 0x10) = FUN_00384353;
    *(undefined4 *)(iVar2 + 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined1 *)(iVar2 + 0x24) = 0;
    *(undefined1 *)(iVar2 + 0x25) = 0;
    *(undefined1 *)(iVar2 + 0x26) = 0;
    *(undefined1 *)(iVar2 + 0x30) = 0x23;
    *(undefined1 *)(iVar2 + 0x31) = 3;
    *(undefined2 *)(iVar2 + 0x32) = 8;
    *(undefined2 *)(iVar2 + 0x34) = 1;
    *(undefined2 *)(iVar2 + 0x36) = 0;
    FUN_00381379((undefined1 *)(iVar2 + 8));
  }
  return;
}
