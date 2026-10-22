/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B7F6591211015ADDA36EC1ED43993483A835354893EBFBC5134BB5F301DFE61
 * Entry: 0x00365750, Ghidra index: 13243, label: FUN_00365750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004be360;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
extern uint32_t DAT_004be7a4;
void FUN_00365750(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (&DAT_004be360)[*DAT_004be768] | (uint)*DAT_004be778 << 0x18;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    *(uint *)(DAT_004be7a4 + (int)DAT_004be760) = uVar1;
    DAT_004be760 = DAT_004be760 + 1;
  }
  return;
}
