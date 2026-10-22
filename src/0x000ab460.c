/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D76B4739688CF5E577C28E1A3A302614521D1195B874BB76ABFC439FD45EE27
 * Entry: 0x000ab460, Ghidra index: 2045, label: FUN_000ab460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000ab460(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  
  iVar1 = in_EAX + 0x2c;
  iVar3 = FUN_000b9120(DAT_00469ab0);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  uVar2 = DAT_00469ab0;
  *(int *)(in_EAX + 0x78) = iVar3;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  uVar2 = DAT_00469ab0;
  *(int *)(in_EAX + 0x68) = iVar3;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  uVar2 = DAT_00469ab0;
  *(int *)(in_EAX + 100) = iVar3;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  uVar2 = DAT_00469ab0;
  *(int *)(in_EAX + 0x6c) = iVar3;
  iVar3 = FUN_000b9120(uVar2);
  if (iVar3 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar3);
    }
    *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
  }
  *(int *)(in_EAX + 0x70) = iVar3;
  *(byte *)(in_EAX + 0x74) = *(byte *)(in_EAX + 0x74) & 0xfd;
  FUN_000ab580(in_EAX);
  FUN_000ab740();
  FUN_000ab7c0();
  return;
}
