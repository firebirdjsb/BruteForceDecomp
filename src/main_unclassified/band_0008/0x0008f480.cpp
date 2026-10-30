/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39E51611BF18FA59D9609C86CA2005A3C9ADAED87A33BA7F9CF8C8A584AAC193
 * Entry: 0x0008f480, Ghidra index: 1748, label: FUN_0008f480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003071b0; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_003071b0;

void FUN_0008f480(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003071b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0008f530(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
