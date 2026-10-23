/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A37AE150C0E44DDE00861C46ECCE171321EF65FE03C16692CB955F98E63216D
 * Entry: 0x001e35d0, Ghidra index: 6769, label: FUN_001e35d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469978;
extern uint32_t *DAT_0046997c;
extern uint32_t *DAT_00469980;
extern uint32_t *DAT_00469984;
extern uint32_t PTR_FUN_0039aa74;
extern uint32_t PTR_FUN_003a0620;
extern uint32_t PTR_FUN_003a0b90;
extern uint32_t PTR_LAB_00399d70;
undefined4 FUN_001e35d0(void)

{
  undefined4 uVar1;
  
  DAT_00469978 = (undefined4 *)FUN_002ea01d(0x14);
  if (DAT_00469978 == (undefined4 *)0x0) {
    DAT_00469978 = (undefined4 *)0x0;
  }
  else {
    *DAT_00469978 = &PTR_FUN_003a0620;
    DAT_00469978[2] = 0;
    DAT_00469978[3] = 0;
    DAT_00469978[4] = 0;
  }
  DAT_0046997c = (undefined4 *)FUN_002ea01d(0x14);
  if (DAT_0046997c == (undefined4 *)0x0) {
    DAT_0046997c = (undefined4 *)0x0;
  }
  else {
    *DAT_0046997c = &PTR_FUN_003a0b90;
    DAT_0046997c[2] = 0;
    DAT_0046997c[3] = 0;
    DAT_0046997c[4] = 0;
  }
  DAT_00469980 = (undefined4 *)FUN_002ea01d(0x14);
  if (DAT_00469980 == (undefined4 *)0x0) {
    DAT_00469980 = (undefined4 *)0x0;
  }
  else {
    *DAT_00469980 = &PTR_FUN_0039aa74;
    DAT_00469980[2] = 0;
    DAT_00469980[3] = 0;
    DAT_00469980[4] = 0;
  }
  DAT_00469984 = (undefined4 *)FUN_002ea01d(0x14);
  if (DAT_00469984 == (undefined4 *)0x0) {
    DAT_00469984 = (undefined4 *)0x0;
  }
  else {
    *DAT_00469984 = &PTR_LAB_00399d70;
    DAT_00469984[2] = 0;
    DAT_00469984[3] = 0;
    DAT_00469984[4] = 0;
  }
  if ((((DAT_00469978 == (undefined4 *)0x0) || (DAT_0046997c == (undefined4 *)0x0)) ||
      (DAT_00469980 == (undefined4 *)0x0)) || (uVar1 = 1, DAT_00469984 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  return uVar1;
}
