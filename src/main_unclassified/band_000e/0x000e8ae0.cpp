/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82D9D9034FA2F10AA5C437CB5D38C956942F683FE66720DC6C94AB3B968056F3
 * Entry: 0x000e8ae0, Ghidra index: 2876, label: FUN_000e8ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469a78;
extern uint32_t DAT_00469a7c;
extern uint32_t DAT_00469a80;
extern uint32_t DAT_00469a84;
extern uint32_t DAT_00469a88;
extern uint32_t DAT_00469a8c;
extern uint32_t DAT_00469a90;
extern uint32_t DAT_00469a94;
extern uint32_t DAT_00469a98;
extern uint32_t DAT_00469a9c;
undefined4 FUN_000e8ae0(void)

{
  int *in_ECX;
  int in_EDX;
  
  *in_ECX = in_EDX;
  in_ECX[3] = 0;
  *(undefined4 *)(in_EDX + 0x90) = 0x3f800000;
  *(undefined4 *)(*in_ECX + 0x2c) = 0;
  *(undefined4 *)(*in_ECX + 0x88) = 0;
  DAT_00469a78 = 0;
  DAT_00469a7c = 0;
  DAT_00469a80 = 0;
  DAT_00469a84 = 0;
  DAT_00469a8c = 0;
  DAT_00469a88 = 0;
  DAT_00469a90 = 0;
  DAT_00469a94 = 0;
  DAT_00469a98 = 0;
  DAT_00469a9c = 0;
  return CONCAT31((int3)((uint)in_ECX[4] >> 8),*(undefined1 *)(*(int *)(in_ECX[4] + 0xb74) + 0x38));
}
