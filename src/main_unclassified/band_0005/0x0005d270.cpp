/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C40F5C644B2F3ABB58B5D7DD7C381A6B7287A77AAB0226C8FC31E612F5591FF2
 * Entry: 0x0005d270, Ghidra index: 961, label: FUN_0005d270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005dba0(void);
extern void FUN_0005b770(int param_1);

void FUN_0005d270(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    FUN_0005dba0();
    FUN_0005b770(in_EAX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
