/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D997F8803A349D2ECE40324A6608503550714F234B1629A6E7115B99550DBCBF
 * Entry: 0x00278600, Ghidra index: 8919, label: FUN_00278600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00278600(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_ECX;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00277780();
    uVar2 = in_ECX;
    if (in_ECX != *(uint *)(in_ECX + 0x14)) {
      uVar1 = *(undefined4 *)(in_ECX + 0x10);
      FUN_0012a450(in_ECX + 0x10,&param_1,in_ECX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uVar1);
    }
  }
  return uVar2 & 0xffffff00;
}
