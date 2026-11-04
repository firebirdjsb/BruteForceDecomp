/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A18CEBB51E264F351F655FEB51CB2CE682EDF4E86AD4BADCAED5738A1B4869F
 * Entry: 0x001fcb00, Ghidra index: 7173, label: FUN_001fcb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing zero-explicit-arg constructor 0x001FE080; guest ESI
 * input and x86 register/stack ABI remain UNVERIFIED. */
extern void FUN_001fe080(void);
void FUN_001fcb00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001fe080();
}
