/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7086B147303EC2A8B3381F044271CB8AD1CF23FC12F17134623CD4D848610766
 * Entry: 0x0016de30, Ghidra index: 4805, label: FUN_0016de30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x003078c0; address-only evidence, type unknown. */
extern unsigned char LAB_003078c0;
void FUN_0016de30(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003078c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0016df00(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
