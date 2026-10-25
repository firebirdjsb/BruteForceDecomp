/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F2312FFAC3C8C769BF909AE66EDCA1ADC1CE89656010FB2B10EC14C1DD123C2
 * Entry: 0x002ef8fc, Ghidra index: 10717, label: __global_unwind2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __global_unwind2(undefined4 param_1)

{
  /* The original x86 saves EBP, then pushes exactly four call arguments.
   * The saved EBP is popped at 0x002EF914; it is not a fifth argument.
   * The Xbox unwind API and native host exception ABI remain unverified. */
  RtlUnwind(param_1,0x2ef914,0,0);
  return;
}
