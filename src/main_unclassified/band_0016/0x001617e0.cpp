/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F7B0F5D962B51BC21FB1D6BC6A2552C3F93761B1EB08D195435592E4FB6947C
 * Entry: 0x001617e0, Ghidra index: 4615, label: FUN_001617e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox image mapped address 0x003074f0; address-only declaration.
 * Linked definition, actual type and semantic role remain unverified. */
extern unsigned char LAB_003074f0;
int FUN_001617e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003074f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x1c);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00161870(param_3,param_4,param_6);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
