/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E81C1E3D3C867FBEC74E3E352E504E4EAF0D756C175E1653364BF4DB041263B
 * Entry: 0x00297590, Ghidra index: 9347, label: FUN_00297590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00297590(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00294c70();
  puVar2 = DAT_00469888;
  *(undefined4 *)*DAT_00469888 = 0xffffffff;
  *(double *)(*puVar2 + 8) = (double)iVar1;
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    puVar2 = DAT_00469888;
  }
  *puVar2 = *puVar2 + 0x10;
  return;
}
