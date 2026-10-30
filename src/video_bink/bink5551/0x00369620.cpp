/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB71F588232C0156E19BB809E93A56D2C43711F65E21053BE27D655071AC4A78
 * Entry: 0x00369620, Ghidra index: 13266, label: FUN_00369620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004bdb60;
extern uint32_t *DAT_004be760;
extern uint32_t *DAT_004be768;
extern uint32_t *DAT_004be778;
extern uint32_t DAT_004be7a4;
void FUN_00369620(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *(ushort *)(&DAT_004bdb60 + *DAT_004be768) | (*DAT_004be778 & 0x80) << 8;
    DAT_004be778 = DAT_004be778 + 1;
    DAT_004be768 = DAT_004be768 + 1;
    *DAT_004be760 = uVar1;
    DAT_004be760[1] = uVar1;
    *(ushort *)(DAT_004be7a4 + (int)DAT_004be760) = uVar1;
    *(ushort *)(DAT_004be7a4 + 2 + (int)DAT_004be760) = uVar1;
    DAT_004be760 = DAT_004be760 + 2;
  }
  return;
}
