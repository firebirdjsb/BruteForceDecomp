/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A861288B22CA9EEF6B06F3AFB45EC18CF8E47CD3FE394BC218AB78DCBD33D08
 * Entry: 0x00382c32, Ghidra index: 13607, label: FUN_00382c32
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_003829eb; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_003829eb(int param_1,undefined1 *param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412724;
extern uint32_t DAT_0041274c;
extern uint32_t DAT_0041274d;
extern uint32_t DAT_00412770;
extern uint32_t DAT_004127ae;
extern uint32_t DAT_004127b1;
extern uint32_t _DAT_0041272c;
extern uint32_t _DAT_00412738;
extern uint32_t _DAT_0041273c;
extern uint32_t _DAT_0041274e;
extern uint32_t _DAT_00412750;
extern uint32_t _DAT_00412752;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00382c32(int param_1,int param_2)

{
  KeCancelTimer(&DAT_00412770);
  DAT_00412723 = 5;
  if ((-1 < *(int *)(param_1 + 4)) && (DAT_00412721 == '\0')) {
    if (DAT_004127ae < 0x51) {
      if ((uint)DAT_004127ae == *(uint *)(param_1 + 0x14)) {
        _DAT_0041274e = (ushort)DAT_004127b1;
        _DAT_0041272c = FUN_003829eb;
        _DAT_0041273c = 0;
        _DAT_00412738 = 0;
        DAT_0041274c = 0;
        DAT_0041274d = 9;
        _DAT_00412750 = 0;
        _DAT_00412752 = 0;
        FUN_003821f6();
        FUN_00383a75(*(int *)(param_2 + 0xc) + 0x18,&DAT_00412724);
        return;
      }
      *(undefined4 *)(param_1 + 4) = 0x80000000;
    }
    else {
      DAT_00412722 = 0;
      *(undefined4 *)(param_1 + 4) = 0x80000400;
    }
  }
  FUN_003826ea(param_1,param_2);
  return;
}
