/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 206217E1CAC1EF65D274B9BAA9DACB0C811EE6767AC9D61FB1B6FEFE790E986F
 * Entry: 0x00099940, Ghidra index: 1850, label: FUN_00099940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0006a610(int *param_1);

void FUN_00099940(void)

{
  int in_EAX;
  undefined4 local_4;
  
  if ((*(char *)(in_EAX + 0xb45) != '\0') && (*(char *)(in_EAX + 0xb46) == '\0')) {
    *(undefined1 *)(in_EAX + 0xb46) = 1;
    local_4 = 0;
    FUN_0006a610(&local_4);
  }
  return;
}
