/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CCA7D5E04C72805C5F8D000E14C0175A7B417BD660FD6A94FE97907CC21B522
 * Entry: 0x00086050, Ghidra index: 1574, label: FUN_00086050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00101280(void);

extern unsigned char LAB_003075d0; /* VA 0x003075d0 */

undefined4 * FUN_00086050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003075d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    FUN_00101280();
  }
  *unaff_FS_OFFSET = local_10;
  return puVar1;
}
