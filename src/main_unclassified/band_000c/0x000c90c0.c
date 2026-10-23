/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0FADB7F1C174664120AB36C357D6BEE0863361DCC0B082C670E65E5EC99F806
 * Entry: 0x000c90c0, Ghidra index: 2483, label: FUN_000c90c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000c90c0(float param_1)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  
  if (*(float *)(unaff_ESI + 0x78) == 0.0) {
    if (*(int *)(unaff_ESI + 0x68) != *(int *)(unaff_ESI + 0x70)) {
      *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(unaff_ESI + 0x7c);
    }
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x28) + 8) + 0x60);
  if (((iVar1 == 0) || ((*(byte *)(*(int *)(iVar1 + 0x24) + 0x14) & 2) != 0)) &&
     (*(float *)(DAT_00469ab0 + 0x13f8) == 1.0)) {
    cVar2 = FUN_000c89f0(unaff_ESI);
    if (cVar2 == '\0') {
      FUN_000c8cc0();
      return;
    }
    param_1 = *(float *)(unaff_ESI + 0x78) - param_1;
    *(float *)(unaff_ESI + 0x78) = param_1;
    if (param_1 < 0.0 == (param_1 == 0.0)) {
      return;
    }
    FUN_000c8fa0(unaff_ESI);
    FUN_000c8f70(unaff_ESI);
    FUN_000c8e80(unaff_ESI);
  }
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  return;
}
