/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24C4FD9E15DDAA90E6A977C559559AC884BF64CB0F2275EA4D483FBE872D2C24
 * Entry: 0x002942f0, Ghidra index: 9285, label: FUN_002942f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Call target FUN_00294270 has this exact signature in its current C draft.
 * Callback ABI, register inputs and Xbox behavior remain ABI_UNVERIFIED. */
extern undefined4 FUN_00294270(undefined4 *param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
int FUN_002942f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00469888 + 0x78);
  FUN_0028aa50();
  FUN_00294230();
  FUN_00293ff0();
  FUN_00295180(FUN_00294270);
  FUN_00294030();
  FUN_00294930();
  iVar1 = DAT_00469888;
  FUN_00294110();
  FUN_00294110();
  FUN_00294110();
  *(int *)(iVar1 + 0x74) = *(int *)(iVar1 + 0x74) << 2;
  FUN_002940b0();
  FUN_002940e0();
  FUN_0028ae10();
  FUN_00293d10();
  FUN_002948b0();
  FUN_002954d0();
  FUN_00295530();
  iVar1 = *(int *)(DAT_00469888 + 0x78);
  iVar2 = iVar2 - iVar1;
  if (param_1 == 0) {
    *(int *)(DAT_00469888 + 0x74) = iVar1 * 2;
    return iVar2;
  }
  *(int *)(DAT_00469888 + 0x74) = iVar1 + param_1;
  return iVar2;
}
