/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A71BA13280FEF8E0948C6B9FF4B1B025F6B42341380992C1CF620341750A0F6E
 * Entry: 0x00132930, Ghidra index: 3856, label: FUN_00132930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307570; extern label with unresolved link definition. */
extern unsigned char LAB_00307570;

void FUN_00132930(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307570;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001327c0();
    }
    param_1 = param_1 + 0x38;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
