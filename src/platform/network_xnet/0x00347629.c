/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 493DC422A7CB80A0F7236E2BD0844F3B1858434E8E6C0CE661900E01C922F6AC
 * Entry: 0x00347629, Ghidra index: 12852, label: FUN_00347629
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00347629(void)

{
  int iVar1;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined4 local_8;
  
  RtlInitAnsiString(local_10,"\\Device\\Harddisk0\\partition0");
  local_24 = 0;
  local_20 = local_10;
  local_1c = 0x40;
  iVar1 = NtOpenFile(&local_8,0xc0100000,&local_24,local_18,3,0x10);
  if (iVar1 < 0) {
    local_8 = 0xffffffff;
  }
  return local_8;
}
