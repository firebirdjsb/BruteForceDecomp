/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A850FE04C2AC393A075B1E92D7D12343B2A8AFA8608FC8FF72BBABAB5953ED1A
 * Entry: 0x000a34e0, Ghidra index: 1941, label: FUN_000a34e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000a2e60(void);

void FUN_000a34e0(byte param_1)

{
  FUN_000a2e60();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
