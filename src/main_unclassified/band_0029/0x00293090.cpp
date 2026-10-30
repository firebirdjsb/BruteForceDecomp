/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24B41582526E845EB796873AD27F9B8FA0210A19A9F3B3B2F10538B9CE2C615A
 * Entry: 0x00293090, Ghidra index: 9266, label: FUN_00293090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00293090(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00293000();
  FUN_0028a4f0();
  piVar2 = DAT_00469888;
  puVar1 = (undefined4 *)*DAT_00469888;
  *puVar1 = local_14;
  puVar1[1] = local_10;
  puVar1[2] = local_c;
  puVar1[3] = local_8;
  *piVar2 = *piVar2 + 0x10;
  return;
}
