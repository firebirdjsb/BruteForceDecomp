/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94A239C1D1D118EBCFD83327BD45A37B15E88D8C122440D40CF461E374CC6A2E
 * Entry: 0x00289b40, Ghidra index: 9143, label: FUN_00289b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00289b40(void)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_00294640();
  puVar2 = DAT_00469888;
  *(undefined4 *)(*DAT_00469888 + 8) = uVar1;
  *(undefined4 *)*puVar2 = 0xfffffffe;
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    puVar2 = DAT_00469888;
  }
  *puVar2 = *puVar2 + 0x10;
  if (puVar2[0x1d] <= puVar2[0x1e]) {
    FUN_002942f0(0);
  }
  return;
}
