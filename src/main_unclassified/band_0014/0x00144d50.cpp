/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB2CCC389C5C33FA4D386AB9C674824B280B3BAB8ABB9211932DCE6986FDA90D
 * Entry: 0x00144d50, Ghidra index: 4177, label: FUN_00144d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE original .text section mapped VA 0x00308f90.
 * Address-only declaration. Symbol definition, function/handler role
 * and original ECX/EDX register ABI are still unverified. */
extern unsigned char LAB_00308f90;
int FUN_00144d50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308f90;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00144ca0(param_4);
    param_3 = param_3 + 0x1c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
