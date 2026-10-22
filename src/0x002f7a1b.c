/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EC461828405D43762EF56EC6A0FC5CCB815F38BBCBEF3D25045AA0CA04B3C66
 * Entry: 0x002f7a1b, Ghidra index: 10936, label: FUN_002f7a1b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f7a1b(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  local_18 = 0;
  local_14 = param_1;
  local_10 = 0x40;
  iVar1 = NtOpenFile(&param_1,0x100001,&local_18,local_c,3,0x800021);
  if (-1 < iVar1) {
    iVar1 = NtQueryVolumeInformationFile(param_1,local_c,local_30,0x18,3);
    NtClose(param_1);
    if ((-1 < iVar1) && (local_20 * local_1c - param_2 != 0)) {
      iVar1 = -0x3ffffeb1;
    }
  }
  return iVar1;
}
