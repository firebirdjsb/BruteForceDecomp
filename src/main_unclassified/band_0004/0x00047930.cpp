/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C715DE81489EE64C292A61C0CC2CEAA2F565677942BAF5FACF92E2442AC92195
 * Entry: 0x00047930, Ghidra index: 561, label: FUN_00047930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00047930(void)

{
  int in_EAX;
  int in_ECX;
  
  if (((in_EAX != 0) && (*(int *)(in_ECX + 0x24) != 0)) &&
     ((*(int *)(in_EAX + 0x448) == 0 ||
      (*(int *)(*(int *)(*(int *)(in_EAX + 0x448) + 0xc) + 4) != 0x1a)))) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  return;
}
