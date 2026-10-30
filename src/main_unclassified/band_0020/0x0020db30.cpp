/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A59B468F382F0A37947818287590937A1695101DBE4D0779F8F903B34C71C3E0
 * Entry: 0x0020db30, Ghidra index: 7390, label: FUN_0020db30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0020db30(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    if ((in_EAX != param_1) && (*(int *)(param_1 + 4) != *(int *)(in_EAX + 4))) {
      FUN_0008f6a0(*(int *)(param_1 + 4));
    }
    in_EAX = in_EAX + 8;
  }
  return in_EAX;
}
