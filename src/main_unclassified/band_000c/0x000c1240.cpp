/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A673A2644942DDDA426CF67AE6341C3598167E461C83CBE1BC9DE8CB75CD3E0
 * Entry: 0x000c1240, Ghidra index: 2352, label: FUN_000c1240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Single 32-bit guest free operand; caller x86 ABI still unverified. */
#include "bf_002ea018_heap_free_guest32.h"
extern int FUN_000c8700(int param_1);

void FUN_000c1240(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x68));
  }
  *(undefined4 *)(in_EAX + 0x68) = 0;
  *(undefined4 *)(in_EAX + 0x6c) = 0;
  *(undefined4 *)(in_EAX + 0x70) = 0;
  if (*(int *)(in_EAX + 0x78) != 0) {
    FUN_000c8700(in_EAX + 100);
  }
  return;
}
