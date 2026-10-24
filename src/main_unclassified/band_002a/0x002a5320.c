/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7A0FB2718AF77AB59BD4B162017CF1C5CE0DA9F611BAD8FD42AB9C4050A1819
 * Entry: 0x002a5320, Ghidra index: 9562, label: FUN_002a5320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046af48;
extern uint32_t DAT_0046af4c;
extern uint32_t DAT_0046af6c;
extern uint32_t DAT_0046af70;
extern uint32_t DAT_0046af74;
extern uint32_t DAT_0046af78;
extern uint32_t _DAT_0046af4c;
extern uint32_t _DAT_0046af50;
extern uint32_t _DAT_0046af54;
extern uint32_t _DAT_0046af58;
extern uint32_t _DAT_0046af5c;
extern uint32_t _DAT_0046af60;
extern uint32_t _DAT_0046af64;
extern uint32_t _DAT_0046af68;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002a5320(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint32_t guest_matrix_result; /* callback writes original guest stack argument slot */
  
  if (param_3 == (int *)0x0) {
    param_3 = DAT_0046af48;
  }
  _DAT_0046af68 = 0;
  _DAT_0046af64 = 0;
  _DAT_0046af60 = 0;
  _DAT_0046af58 = 0;
  _DAT_0046af54 = 0;
  _DAT_0046af50 = 0;
  DAT_0046af6c = 0x3f800000;
  _DAT_0046af5c = 0x3f800000;
  _DAT_0046af4c = 0x3f800000;
  DAT_0046af78 = 0;
  DAT_0046af74 = 0;
  DAT_0046af70 = 0;
  (**(code **)(*param_3 + 0xc))(param_3,param_2,&DAT_0046af4c,1);
  (**(code **)(*param_3 + 0x44))(param_3,0,&guest_matrix_result);
  FUN_0003d730(&DAT_0046af4c,guest_matrix_result);
  iVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  if (iVar1 != 0) {
    FUN_002a5230(param_2,iVar1);
  }
  return 0;
}
