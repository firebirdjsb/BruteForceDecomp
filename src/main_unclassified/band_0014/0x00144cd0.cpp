/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 366BCAAD37F97F6B1AF301FFD1969B474683505F12A87C7796C9FED333FCACDE
 * Entry: 0x00144cd0, Ghidra index: 4176, label: FUN_00144cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE original .text section mapped VA 0x00307530.
 * Address-only declaration. Symbol definition, function/handler role
 * and original ECX/EDX register ABI are still unverified. */
extern unsigned char LAB_00307530;
int FUN_00144cd0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307530;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00144c80(in_ECX);
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
