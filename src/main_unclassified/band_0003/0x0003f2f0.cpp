/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AB714A9ABF20B0FA8E8D58028F169C865B0448B38276433D47FB6CCC0A412BA
 * Entry: 0x0003f2f0, Ghidra index: 475, label: FUN_0003f2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

void FUN_0003f2f0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_000120f0();
  (**(code **)(*in_ECX + 0x358))();
  in_ECX[0x21c] = 0;
  in_ECX[0x220] = 0;
  *(undefined1 *)(in_ECX + 0x21d) = 0;
  in_ECX[0x21e] = 0x1a;
  if (*(int *)(iVar1 + 0x1f8) == 5) {
    *(undefined1 *)(in_ECX + 0x21d) = 1;
  }
  return;
}
