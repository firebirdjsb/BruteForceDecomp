/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6EE87B394B6F4D2BF7D0CAF94CD6DE5B0AE7947BA166AC2CBEFE95CFE79BA07
 * Entry: 0x002ef3f3, Ghidra index: 10710, label: __freebuf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __freebuf(int param_1)

{
  if (((*(uint *)(param_1 + 0xc) & 0x83) != 0) && ((*(uint *)(param_1 + 0xc) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 8));
  }
  return;
}
