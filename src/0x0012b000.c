/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6675E694CFE4D0DB750AEB21399727C9B9600EE38E9E4132226ACA38EC5F052C
 * Entry: 0x0012b000, Ghidra index: 3781, label: FUN_0012b000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307110; extern label with unresolved link definition. */
extern unsigned char LAB_00307110;

void FUN_0012b000(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307110;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00050e20(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
