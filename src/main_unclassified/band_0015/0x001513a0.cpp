/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DC212EBD5FD4E15C2B350AFF6C1083E9FAC33678278200964FE3FCBD3C56A71
 * Entry: 0x001513a0, Ghidra index: 4412, label: FUN_001513a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699ac;
extern uint32_t DAT_004699b0;
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699b8;
void FUN_001513a0(void)

{
  int iVar1;
  
  if (DAT_004699b0 == 0) {
    DAT_004699b0 = FUN_002ea01d();
    if (DAT_004699b0 == 0) {
      DAT_004699b0 = 0;
    }
    else {
      *(undefined4 *)(DAT_004699b0 + 4) = 0;
      *(undefined4 *)(DAT_004699b0 + 8) = 0;
      *(undefined4 *)(DAT_004699b0 + 0xc) = 0;
    }
    FUN_00153eb0();
  }
  if (DAT_004699ac == 0) {
    iVar1 = FUN_002ea01d();
    if (iVar1 == 0) {
      DAT_004699ac = 0;
    }
    else {
      DAT_004699ac = FUN_001687e0();
    }
    FUN_00168880();
  }
  if (DAT_004699b4 == 0) {
    DAT_004699b4 = FUN_002ea01d();
    if (DAT_004699b4 == 0) {
      DAT_004699b4 = 0;
    }
    else {
      *(undefined4 *)(DAT_004699b4 + 4) = 0;
      *(undefined4 *)(DAT_004699b4 + 8) = 0;
      *(undefined4 *)(DAT_004699b4 + 0xc) = 0;
    }
    FUN_0014c470();
  }
  if (DAT_004699b8 == 0) {
    DAT_004699b8 = FUN_002ea01d();
    if (DAT_004699b8 == 0) {
      DAT_004699b8 = 0;
    }
    else {
      *(undefined4 *)(DAT_004699b8 + 4) = 0;
      *(undefined4 *)(DAT_004699b8 + 8) = 0;
      *(undefined4 *)(DAT_004699b8 + 0xc) = 0;
    }
    FUN_0024a600();
  }
  return;
}
