/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D93621CA6105EF30E6338C981922AD2616B1365C4CCF2ED8729BA3E757C45E06
 * Entry: 0x0023b240, Ghidra index: 7908, label: FUN_0023b240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00406860;
extern uint32_t DAT_004432f8;
extern uint32_t *DAT_004432fc;
extern uint32_t *DAT_00443318;
extern uint32_t PTR_PTR_003ffe04;
extern char s_23_23_IFileManager_00406868[];
undefined4 FUN_0023b240(void)

{
  int *piVar1;
  
  piVar1 = DAT_004432fc;
  (**(code **)(*DAT_004432fc + 0xc))(DAT_004432fc,9,&LAB_0023b1e0,&DAT_00406860);
  FUN_0023b180();
  FUN_002647c0();
  FUN_002658a0();
  FUN_00264300();
  FUN_00238080(s_23_23_IFileManager_00406868,&DAT_004432f8,piVar1,0x10,0xf1f6a279,0,0);
  DAT_00443318 = &PTR_PTR_003ffe04;
  (**(code **)(PTR_PTR_003ffe04 + 4))(&PTR_PTR_003ffe04);
  (**(code **)(*DAT_00443318 + 0xc))(DAT_00443318,8,0x4000);
  return 1;
}
