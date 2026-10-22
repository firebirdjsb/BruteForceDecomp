/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27CAB744F18A65DE75280E22468B90DFAC6F89C34A3D7BCB40C996985A5B07D0
 * Entry: 0x00361060, Ghidra index: 13228, label: FUN_00361060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004c07e0;
undefined8 FUN_00361060(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_14 [16];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_14;
  uVar2 = rdtsc();
  DAT_004c07e0 = 1;
  *unaff_FS_OFFSET = uVar1;
  return uVar2;
}
