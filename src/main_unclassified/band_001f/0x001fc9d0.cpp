/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73263E0B40B2F133EA64520C90A110AEC9E396D6894D72D4F07B446E76C319A6
 * Entry: 0x001fc9d0, Ghidra index: 7170, label: FUN_001fc9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-explicit-arg constructor 0x001FE080; guest ESI
 * input and x86 register/stack ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fc9d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
