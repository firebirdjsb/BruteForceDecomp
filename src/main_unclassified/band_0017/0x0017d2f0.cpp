/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9C2FC4A60F7CB7DD3D9BBAF57FC12F707F5FAE2B2D87850AE698FA2F8C9EFFC6
 * Entry: 0x0017d2f0, Ghidra index: 5065, label: FUN_0017d2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x003078a0; address-only evidence, symbol role unknown. */
extern unsigned char LAB_003078a0;
int FUN_0017d2f0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003078a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x84);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0017d480(in_stack_00000010,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
