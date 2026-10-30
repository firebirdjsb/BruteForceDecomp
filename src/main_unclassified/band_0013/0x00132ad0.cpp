/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5949ACB36CBE6AE0BA48472D29E24FB9324C84CCF354C481BE44C9E1C8E11EFD
 * Entry: 0x00132ad0, Ghidra index: 3860, label: FUN_00132ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image address 0x003078f0; address-only label pending link definition. */
extern unsigned char LAB_003078f0;

int FUN_00132ad0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003078f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00132a20(in_ECX);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
