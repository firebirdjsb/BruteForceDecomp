/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93FD46131046101795C9013A6222722F3711A107F4DCB1E8913E67FB41C41F60
 * Entry: 0x0028a210, Ghidra index: 9157, label: FUN_0028a210
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

void FUN_0028a210(void)

{
  int iVar1;
  
  if (DAT_00469888 == 0) {
    PTR_DAT_003b9760 = (undefined *)0x404874;
    _DAT_00469884 = 0x47;
    iVar1 = FUN_00067c30(0,0x7c);
    if (iVar1 == 0) {
      FUN_0028ab50(s_not_enough_memory_00404860);
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0x96;
    DAT_00469888 = iVar1;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    FUN_0028a410();
    FUN_002943d0();
    FUN_00295850();
    FUN_00294bf0();
    FUN_00299210();
  }
  return;
}
