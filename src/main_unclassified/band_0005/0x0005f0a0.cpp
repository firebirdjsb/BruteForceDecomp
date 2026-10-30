/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 838689387191E8ACBA4C1171D58E24825EC089C020C7D702C63943E6AF2C257C
 * Entry: 0x0005f0a0, Ghidra index: 1003, label: FUN_0005f0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005f0c0(void);

void FUN_0005f0a0(byte param_1)

{
  FUN_0005f0c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
