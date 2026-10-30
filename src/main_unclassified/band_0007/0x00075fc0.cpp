/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4D557C073B31B221343EB63CD229626A2A468AEBB48588CACC4E038D7881FBF
 * Entry: 0x00075fc0, Ghidra index: 1360, label: FUN_00075fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern unsigned char LAB_003071d0; /* VA 0x003071d0 */

void FUN_00075fc0(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003071d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}
