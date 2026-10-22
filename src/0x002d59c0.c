/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 200CD7223C878482B1443EFDC18631A6D4E9F0FD70073B898D798DBE5ED8B0C0
 * Entry: 0x002d59c0, Ghidra index: 10227, label: FUN_002d59c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469f38;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d59c0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(unaff_EDI + 0x40);
  *(undefined1 *)(iVar1 + 0x4c) = 1;
  if (_DAT_00469f38 < *(float *)(unaff_EDI + 0x58)) {
    *(undefined4 *)(iVar1 + 0x54) = 0x60ad78ec;
    return;
  }
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x10) + 0x14);
  fVar3 = (float10)FUN_002d5960(iVar2);
  *(float *)(iVar1 + 0x50) = (float)fVar3;
  fVar4 = (float10)FUN_002c2750();
  *(float *)(iVar1 + 0x54) =
       (float)((float10)*(float *)(unaff_EDI + 0x58) -
              ((float10)(float)fVar3 * (float10)0.5 + fVar4) * (float10)*(float *)(iVar2 + 0xb4));
  return;
}
