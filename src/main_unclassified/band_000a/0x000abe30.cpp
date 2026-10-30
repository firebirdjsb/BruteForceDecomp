/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D4799B7455F210F7A37DCDD7C42DC533DF30DB140DD1C31318CA0B3F69D133E
 * Entry: 0x000abe30, Ghidra index: 2054, label: FUN_000abe30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000abe30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  
  iVar1 = unaff_EBX + 0x2c;
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_EBX + 0x84) = iVar2;
  FUN_000ab460();
  piVar4 = (int *)(unaff_EBX + 0x88);
  iVar2 = 2;
  do {
    iVar3 = FUN_000b9120(DAT_00469ab0);
    if (iVar3 != 0) {
      if (iVar1 != 0) {
        FUN_000b25a0(iVar1,iVar3);
      }
      *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
    }
    *piVar4 = iVar3;
    *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 1;
    FUN_000ab460();
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar4 = (int *)(unaff_EBX + 0x90);
  iVar2 = 2;
  do {
    iVar3 = FUN_000b9120(DAT_00469ab0);
    if (iVar3 != 0) {
      if (iVar1 != 0) {
        FUN_000b25a0(iVar1,iVar3);
      }
      *(byte *)(iVar3 + 0x13) = *(byte *)(iVar3 + 0x13) & 0xfb;
    }
    *piVar4 = iVar3;
    *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 1;
    FUN_000ab460();
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
