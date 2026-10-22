/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50790401050D65DD3ACC530CC01148A55CEEDE6E5533A35DB5F0A4D4F2ED36F5
 * Entry: 0x00252fb0, Ghidra index: 8391, label: FUN_00252fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00252fb0(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x1c) != 0) {
    FUN_0023c540(in_EAX + 0x18);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x1c));
  }
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  FUN_00253000(0,0,0,0);
  return;
}
