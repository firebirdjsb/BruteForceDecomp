/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1F8CF67FC2F775A6CBEDC033BC1F39A5D2983FD5829B377C37FF4218A55431A
 * Entry: 0x0031acd6, Ghidra index: 12278, label: FUN_0031acd6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdec;
extern uint32_t *DAT_0032ff08;
extern uint32_t *DAT_0032ff0c;
extern uint32_t PTR_FUN_00386ad8;
extern uint32_t PTR_LAB_003869e0;
void FUN_0031acd6(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00386ad8;
  FUN_003118f0();
  DAT_0032fdec = 0;
  while( true ) {
    puVar1 = (undefined4 *)FUN_003118c0(in_ECX[2]);
    if (puVar1 == in_ECX + 2) break;
    if (puVar1[2] != 0) {
      FUN_003148b7(puVar1[2]);
    }
  }
  *DAT_0032ff0c = 0;
  *DAT_0032ff08 = 0;
  FUN_00311923();
  *in_ECX = &PTR_LAB_003869e0;
  return;
}
