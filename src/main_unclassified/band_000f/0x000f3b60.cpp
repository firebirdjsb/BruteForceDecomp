/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1C0CEC1DDD35AB52C9F0B2B165B73C2C94D9774176DF57FB8C3B390F0D510D8
 * Entry: 0x000f3b60, Ghidra index: 3047, label: FUN_000f3b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f3b60(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  iVar1 = **(int **)(DAT_00469b58 + 8);
  uVar2 = FUN_00102000();
  pbVar3 = (byte *)(**(code **)(iVar1 + 0x130))(uVar2);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = *pbVar3 & 0xfd;
    uVar2 = FUN_00102000();
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x134))(uVar2);
  }
  return;
}
