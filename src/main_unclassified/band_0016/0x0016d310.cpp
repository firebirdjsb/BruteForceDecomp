/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7539B8A6976118BC054690EDFE31067984B99283C7C9D691A6603C485FC1B1E2
 * Entry: 0x0016d310, Ghidra index: 4792, label: FUN_0016d310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x003074e0; address-only evidence, type unknown. */
extern unsigned char LAB_003074e0;
void FUN_0016d310(int param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003074e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  uVar1 = FUN_00052fc0(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}
