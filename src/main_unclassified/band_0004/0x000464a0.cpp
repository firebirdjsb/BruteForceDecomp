/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3E6D345B638C9953DBE20775ABD5645EB47CD09D485B0D10CF753D4520CA38B
 * Entry: 0x000464a0, Ghidra index: 547, label: FUN_000464a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_000464a0(void)

{
  int in_ECX;
  
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x860) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x85d) = 0;
  return 1;
}
