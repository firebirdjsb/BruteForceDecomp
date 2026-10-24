/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8F635A373AE243AD1F6140E2081B58DBF291584AFB25EFE56C4980949CD20BB
 * Entry: 0x0005c070, Ghidra index: 941, label: FUN_0005c070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005c070(void)

{
  uint uVar1;
  int in_ECX;
  uint *in_EDX;
  
  uVar1 = *in_EDX;
  if (*(uint *)(in_ECX + 4) <= uVar1) {
    return 0;
  }
  *in_EDX = uVar1 + 1;
  if (*(uint *)(in_ECX + 4) <= uVar1) {
    /* XBE 0x0005c085: XOR EAX,EAX; MOV EAX,[EAX+4].
     * Preserve the guest absolute read at 0x4, including possible fault. */
    return *(volatile undefined4 *)(uintptr_t)UINT32_C(0x4);
  }
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + uVar1 * 4) + 4);
}
