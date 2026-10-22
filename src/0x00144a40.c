/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F10B144B41E7077E1C83A3A69AF892385F131434CA82EAF3F44BD1AEF4A59A9A
 * Entry: 0x00144a40, Ghidra index: 4168, label: FUN_00144a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped address 0x00307100; label semantic type and definition not recovered. */
extern unsigned char LAB_00307100;

void FUN_00144a40(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307100;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00144c80(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
