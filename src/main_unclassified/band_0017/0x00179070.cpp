/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAA7CC238C9020EF43E87D3911D43F6FB23FFA99E445BBEAA311CB6C56C14636
 * Entry: 0x00179070, Ghidra index: 4980, label: FUN_00179070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
float10 FUN_00179070(void)

{
  float fVar1;
  int unaff_ESI;
  float10 fVar2;
  undefined4 local_8;
  
  fVar1 = *(float *)(unaff_ESI + 0x74);
  local_8 = 1.0;
  fVar2 = (float10)FUN_0017e5e0(DAT_00469940,unaff_ESI + 8);
  fVar2 = fVar2 - (float10)fVar1;
  if ((float10)0.0 < fVar2) {
    local_8 = 1.0;
    do {
      local_8 = local_8 * 0.5;
      fVar2 = fVar2 - (float10)fVar1;
    } while ((float10)0.0 < fVar2);
  }
  fVar2 = (float10)1.0;
  if (*(char *)(unaff_ESI + 0x54) != '\0') {
    fVar2 = (float10)*(float *)(unaff_ESI + 0x50) * (float10)0.01;
  }
  return fVar2 * (float10)(int)*(char *)(unaff_ESI + 0x7c) * (float10)0.1 * (float10)local_8;
}
