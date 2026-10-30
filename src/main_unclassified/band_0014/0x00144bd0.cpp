/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D161D25C3D0E95B437D66856944CC9C2FA40897C28F6A470CA00F18C9AC5594E
 * Entry: 0x00144bd0, Ghidra index: 4172, label: FUN_00144bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE original .text section mapped VA 0x00308900.
 * Address-only declaration. Symbol definition, function/handler role
 * and original ECX/EDX register ABI are still unverified. */
extern unsigned char LAB_00308900;
void FUN_00144bd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308900;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00144ca0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
