/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D3286C071AC897A37AB64C2B8B0DDEA9FFFF1A7730B51AD432846CA3B39E8BE
 * Entry: 0x000cade0, Ghidra index: 2509, label: FUN_000cade0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040d678;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cade0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x80) <= *(float *)(in_ECX + 0x78)) {
    if ((*(float *)(in_ECX + 0x80) < *(float *)(in_ECX + 0x78)) &&
       (fVar1 = *(float *)(in_ECX + 0x78) - _DAT_0040d678 * param_1,
       *(float *)(in_ECX + 0x78) = fVar1, fVar1 < *(float *)(in_ECX + 0x80))) {
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x80);
    }
  }
  else {
    fVar1 = _DAT_0040d678 * param_1 + *(float *)(in_ECX + 0x78);
    *(float *)(in_ECX + 0x78) = fVar1;
    if (*(float *)(in_ECX + 0x80) < fVar1) {
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x80);
    }
  }
  if (*(float *)(in_ECX + 0x84) <= *(float *)(in_ECX + 0x7c)) {
    if ((*(float *)(in_ECX + 0x84) < *(float *)(in_ECX + 0x7c)) &&
       (fVar1 = *(float *)(in_ECX + 0x7c) - _DAT_0040d678 * param_1,
       *(float *)(in_ECX + 0x7c) = fVar1, fVar1 < *(float *)(in_ECX + 0x84))) {
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(in_ECX + 0x84);
    }
  }
  else {
    fVar1 = _DAT_0040d678 * param_1 + *(float *)(in_ECX + 0x7c);
    *(float *)(in_ECX + 0x7c) = fVar1;
    if (*(float *)(in_ECX + 0x84) < fVar1) {
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(in_ECX + 0x84);
      return;
    }
  }
  return;
}
