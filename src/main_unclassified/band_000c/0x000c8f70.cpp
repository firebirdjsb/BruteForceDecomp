/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8D7C22CBB8FF6C0DB7C95BE9DE458745E0E52937857F6B451393E3B77F05507
 * Entry: 0x000c8f70, Ghidra index: 2481, label: FUN_000c8f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005cc20(int param_1,int *param_2,int *param_3);

void FUN_000c8f70(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  if (((in_EAX != 0) && (in_ECX != 0)) && (in_EAX != in_ECX)) {
    FUN_0005cc20(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 8) + 0x30),in_EAX,in_ECX);
  }
  return;
}
