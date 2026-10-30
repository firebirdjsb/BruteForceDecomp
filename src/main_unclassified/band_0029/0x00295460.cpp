/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F44D24107E8DFB7B7879B6A48510331796793A1C41A8740F50A82E480683ABE
 * Entry: 0x00295460, Ghidra index: 9316, label: FUN_00295460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_DAT_003b9760;
extern uint32_t _DAT_00469884;
extern char s_not_enough_memory_00404860[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00295460(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  PTR_DAT_003b9760 = (undefined *)0x404874;
  _DAT_00469884 = 0x47;
  puVar2 = (undefined4 *)FUN_00067c30(0,0x20);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0028ab50(s_not_enough_memory_00404860);
  }
  iVar1 = DAT_00469888;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[7] = 0;
  *puVar2 = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 **)(iVar1 + 0x40) = puVar2;
  puVar2[1] = 0;
  *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 5;
  return puVar2;
}
