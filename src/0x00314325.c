/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0870E1050A6D4BE46A1CBA8EBB0DFABA68D689D31B3AE8A0A0FA300E78AC1191
 * Entry: 0x00314325, Ghidra index: 12056, label: FUN_00314325
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0031cb98;
void FUN_00314325(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined *puVar2;
  
  puVar2 = &DAT_0031cb98;
  if ((*(uint *)(param_1 + 4) & 0x182000) == 0) {
    puVar2 = *(undefined **)(param_1 + 0xc);
  }
  iVar1 = FUN_00313e74(*(uint *)(param_1 + 4),puVar2,*(undefined4 *)(param_1 + 0x10));
  if (-1 < iVar1) {
    if ((*(uint *)(param_1 + 4) & 0x180000) == 0) {
      if ((*(uint *)(param_1 + 4) & 0x2000) != 0) {
        *(undefined4 *)(in_ECX + 0xd0) = 0x1f;
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 8) != 0) {
      DSOUND__CDirectSoundBufferSettings_SetBufferData(0,*(int *)(param_1 + 8));
    }
  }
  return;
}
