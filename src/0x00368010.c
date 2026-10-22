/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18BA83599CA281DDD782FF61D2567610B553FBF723C7DCE8733B9AF6FB3F9629
 * Entry: 0x00368010, Ghidra index: 13256, label: FUN_00368010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b6ac0;
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
void FUN_00368010(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *(ushort *)(&DAT_004b6ac0 + *DAT_004be778);
    uVar2 = *(ushort *)(&DAT_004bdb60 + *DAT_004be768);
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1 | uVar2;
    DAT_004be760[1] = uVar1 | uVar2;
    DAT_004be760 = DAT_004be760 + 2;
  }
  return;
}
