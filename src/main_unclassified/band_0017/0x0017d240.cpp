/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA222FBB524C9E7CD99AE9C8A513FE801DB85D6F962C190EAE15FF9572435A37
 * Entry: 0x0017d240, Ghidra index: 5064, label: FUN_0017d240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x003070c0; address-only evidence, symbol role unknown. */
extern unsigned char LAB_003070c0;
void FUN_0017d240(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003070c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x84);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x20) = 1;
  *(undefined1 *)((int)puVar1 + 0x81) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}
