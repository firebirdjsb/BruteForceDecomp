/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 717A9E899A9E01E8061D10C3584DBEA1F40A4330AFAF3094B997D92B8301B121
 * Entry: 0x0023a280, Ghidra index: 7899, label: FUN_0023a280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
undefined4 FUN_0023a280(int param_1)

{
  int *piVar1;
  int iVar2;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18 [6];
  
  piVar1 = DAT_004432f8;
  puStack_20 = (undefined1 *)&local_1c;
  puStack_24 = local_18;
  iStack_28 = -0x80000000;
  iStack_2c = param_1;
  local_1c = 0;
  local_18[0] = 0xe0c43d05;
  iVar2 = (**(code **)(*DAT_004432f8 + 0xc))();
  if (((-1 < iVar2) && (iVar2 = FUN_0023a0c0(&iStack_2c,&iStack_28), -1 < iVar2)) &&
     (iStack_2c == iStack_28)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    return 0;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0x80004005;
}
