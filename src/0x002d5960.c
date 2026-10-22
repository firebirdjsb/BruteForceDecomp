/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9000EEB7B4A39CDF6843305CDC58FF5B7124B683D65A761C043CA7D98D9465A
 * Entry: 0x002d5960, Ghidra index: 10226, label: FUN_002d5960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00469e1c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_002d5960(int param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  
  if (*(float *)(in_ECX + 0x58) < _DAT_00469e1c) {
    fVar2 = _DAT_00469e1c - *(float *)(in_ECX + 0x58);
    fVar1 = *(float *)(param_1 + 0xb8);
    fVar3 = (float10)FUN_002d5890(in_ECX);
    fVar3 = fVar3 + (float10)(fVar2 * fVar1);
    return fVar3 + fVar3;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x50) = 0;
  fVar3 = (float10)FUN_002d5890(in_ECX);
  return fVar3 + (float10)0.0 + fVar3 + (float10)0.0;
}
