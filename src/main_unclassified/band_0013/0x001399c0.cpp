/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16AA7CE5EAD5720FFE7E5CE4284C4DB98AC1B0282E4D64D1F3C8FF65FA50C8C2
 * Entry: 0x001399c0, Ghidra index: 3959, label: FUN_001399c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Label VA 0x00307550 verified mapped; data/code role unknown. */
extern unsigned char LAB_00307550;

void FUN_001399c0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307550;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00139d10(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
