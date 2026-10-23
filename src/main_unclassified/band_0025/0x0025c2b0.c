/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7EBCEA2ADBB6A13FFA452EDC225BCD9D664B913C116684D81E44FB1D2A9E55ED
 * Entry: 0x0025c2b0, Ghidra index: 8554, label: FUN_0025c2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b2c8;
int FUN_0025c2b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  uint *unaff_EDI;
  int aiStack_8 [2];
  
  iVar3 = 0;
  RtlEnterCriticalSection(&DAT_0046b2c8);
  iVar1 = FUN_000a7ba0(unaff_EDI);
  if ((iVar1 == *(int *)(unaff_EBX + 0xc)) || (*unaff_EDI < *(uint *)(iVar1 + 0xc))) {
    aiStack_8[0] = *(int *)(unaff_EBX + 0xc);
    piVar2 = aiStack_8;
  }
  else {
    piVar2 = (int *)&stack0xfffffff4;
  }
  if (*piVar2 != *(int *)(unaff_EBX + 0xc)) {
    iVar3 = *piVar2 + 0x10;
  }
  RtlLeaveCriticalSection(&DAT_0046b2c8);
  return iVar3;
}
