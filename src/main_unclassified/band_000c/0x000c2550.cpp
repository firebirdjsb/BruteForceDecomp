/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 693CBD3A7266AF46B59CC57811BC15E255FBF4D718AB0259D5E6D2A8C9D74308
 * Entry: 0x000c2550, Ghidra index: 2373, label: FUN_000c2550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000c2550(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = unaff_ESI + 0x2c;
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar3 != 0) {
      FUN_000b25a0(iVar3,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(undefined4 *)(iVar2 + 100) = param_1;
  *(undefined4 *)(iVar2 + 0x68) = 1;
  FUN_000c2d70();
  uVar1 = DAT_00469ab0;
  *(int *)(unaff_ESI + 0x6c) = iVar2;
  iVar2 = FUN_000b9120(uVar1);
  if (iVar2 != 0) {
    if (iVar3 != 0) {
      FUN_000b25a0(iVar3,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(undefined4 *)(iVar2 + 100) = param_1;
  *(undefined4 *)(iVar2 + 0x68) = 3;
  FUN_000c2d70();
  uVar1 = DAT_00469ab0;
  *(int *)(unaff_ESI + 0x74) = iVar2;
  iVar2 = FUN_000b9120(uVar1);
  if (iVar2 != 0) {
    if (iVar3 != 0) {
      FUN_000b25a0(iVar3,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(undefined4 *)(iVar2 + 100) = param_1;
  *(undefined4 *)(iVar2 + 0x68) = 2;
  FUN_000c2d70();
  uVar1 = DAT_00469ab0;
  *(int *)(unaff_ESI + 0x70) = iVar2;
  iVar2 = FUN_000b9120(uVar1);
  if (iVar2 != 0) {
    if (iVar3 != 0) {
      FUN_000b25a0(iVar3,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(undefined4 *)(iVar2 + 100) = param_1;
  *(undefined4 *)(iVar2 + 0x68) = 4;
  FUN_000c2d70();
  *(int *)(unaff_ESI + 0x78) = iVar2;
  if (*(int *)(unaff_ESI + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(unaff_ESI + 0x28) + -0x2c;
  }
  iVar3 = *(int *)(iVar3 + 0x34);
  if (((*(short *)(iVar3 + 0x20) < 600) || (*(short *)(iVar3 + 0x22) < 400)) ||
     (*(uint *)(*(int *)(iVar3 + 0x30) + 4) < 2)) {
    param_1 = bf_x86_word_replace_lo8(param_1,UINT8_C(1));
  }
  else {
    param_1 = bf_x86_word_replace_lo8(param_1,UINT8_C(0));
  }
  FUN_000ba6d0();
  *(byte *)(unaff_ESI + 100) =
       *(byte *)(unaff_ESI + 100) ^ (*(byte *)(unaff_ESI + 100) ^ (byte)param_1) & 1;
  return;
}
