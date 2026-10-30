/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4A074938342F92C6B95F74D90354225768AF534787DA57503010CCC750C43FC
 * Entry: 0x000b1870, Ghidra index: 2122, label: FUN_000b1870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x00307090; original label address; definition and semantics pending. */
extern void FUN_000b1940(void);

extern unsigned char LAB_00307090;

void FUN_000b1870(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307090;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_000b1940(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
