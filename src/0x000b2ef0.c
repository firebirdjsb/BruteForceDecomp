/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAEF33A8A26F4093179894B3126A7997958F3932019B04AD266640E718E1B123
 * Entry: 0x000b2ef0, Ghidra index: 2161, label: FUN_000b2ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000b2ef0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = unaff_ESI + 0x2c;
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_ESI + 100) = iVar2;
  FUN_000ba6d0();
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_ESI + 0x68) = iVar2;
  FUN_000ba6d0();
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_ESI + 0x6c) = iVar2;
  FUN_000ba6d0();
  iVar2 = FUN_000b9120(DAT_00469ab0);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,iVar2);
    }
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0xfb;
  }
  *(int *)(unaff_ESI + 0x70) = iVar2;
  FUN_000ba6d0();
  FUN_000b2ca0(unaff_ESI);
  return;
}
