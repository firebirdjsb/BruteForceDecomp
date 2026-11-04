/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE602447A918FD79F9EA69A8D55B04C647DE7AA48B176E108083235176D54B0C
 * Entry: 0x00289b00, Ghidra index: 9142, label: FUN_00289b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_0028a460(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00289b00(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = DAT_00469888;
  *(undefined4 *)*DAT_00469888 = 0xffffffff;
  uVar1 = *puVar2;
  *(undefined4 *)(uVar1 + 8) = param_1;
  *(undefined4 *)(uVar1 + 0xc) = param_2;
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    puVar2 = DAT_00469888;
  }
  *puVar2 = *puVar2 + 0x10;
  return;
}
