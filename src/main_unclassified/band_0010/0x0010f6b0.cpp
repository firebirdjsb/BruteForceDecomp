/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A531FEF3F5EA82B174761E2466B1D7AC5FC081E69F8D4E7BD33E159BF4273D5
 * Entry: 0x0010f6b0, Ghidra index: 3530, label: FUN_0010f6b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x003084d0; extern label; definition/role pending. */
extern unsigned char LAB_003084d0;

int FUN_0010f6b0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003084d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x28);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0010f740(in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
