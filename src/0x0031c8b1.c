/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC139FB19E022E3BA2E24FC076165EA341D12E378A26B3CF46074B7879272F31
 * Entry: 0x0031c8b1, Ghidra index: 12343, label: FUN_0031c8b1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004aa5e8;
extern uint32_t DAT_004ac770;
extern uint32_t DAT_004ae0b8;
extern uint32_t DAT_004afc08;
extern uint32_t DAT_004afef8;
void FUN_0031c8b1(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == 0) {
    *param_2 = &LAB_004a9a20;
    *param_3 = 0x2f2;
  }
  else if (param_1 == 1) {
    *param_2 = &DAT_004aa5e8;
    *param_3 = 0x862;
  }
  else if (param_1 == 2) {
    *param_2 = &DAT_004ac770;
    *param_3 = 0x652;
  }
  else if (param_1 == 3) {
    *param_2 = &DAT_004ae0b8;
    *param_3 = 0x6d3;
  }
  else if (param_1 == 4) {
    *param_2 = &DAT_004afc08;
    *param_3 = 0xbc;
  }
  else if (param_1 == 5) {
    *param_2 = &DAT_004afef8;
    *param_3 = 0xc9;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}
