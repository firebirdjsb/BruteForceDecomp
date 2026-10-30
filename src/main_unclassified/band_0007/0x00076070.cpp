/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 287F498E4F760DB1ED64C051D88489FF720BB32E901A428F7015A8E5DC14FBC5
 * Entry: 0x00076070, Ghidra index: 1361, label: FUN_00076070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern unsigned char LAB_003085a0; /* VA 0x003085a0 */

int FUN_00076070(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003085a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x2c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_000761a0(in_stack_00000014,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
