/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75D9410BEFD9FA89AFF44678489AD0EF1E301D79717B6DDF53E7ED49A962840E
 * Entry: 0x0028ab90, Ghidra index: 9172, label: FUN_0028ab90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
undefined4 FUN_0028ab90(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_5c [68];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = DAT_00469888[3];
  local_14 = DAT_00469888[4];
  local_10 = DAT_00469888[5];
  local_c = DAT_00469888[6];
  DAT_00469888[6] = (int)local_5c;
  iVar3 = __setjmp3(local_5c,0);
  piVar2 = DAT_00469888;
  if (iVar3 == 0) {
    iVar3 = DAT_00469888[3];
    FUN_0028a8b0(((*DAT_00469888 - DAT_00469888[1] >> 4) - iVar3) + -1,0xff);
    piVar2 = DAT_00469888;
    DAT_00469888[4] = iVar3;
    iVar4 = (*piVar2 - piVar2[1] >> 4) - iVar3;
    piVar2[5] = iVar4;
    piVar2[3] = iVar4 + iVar3;
    piVar2[6] = local_c;
    return 0;
  }
  piVar1 = DAT_00469888 + 3;
  *piVar1 = local_18;
  piVar2[4] = local_14;
  piVar2[5] = local_10;
  *piVar2 = *piVar1 * 0x10 + piVar2[1];
  piVar2[6] = local_c;
  return 1;
}
