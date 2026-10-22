/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03E3FD53F14E6847321F77F0293BBB657070BF52232C526AFCEB66527290083C
 * Entry: 0x00072af0, Ghidra index: 1285, label: FUN_00072af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00072af0(int param_1,undefined4 param_2)

{
  int in_EAX;
  int in_ECX;
  
  if ((((param_1 != 0) && (-1 < in_EAX)) && (in_EAX < 7)) &&
     (*(int *)(in_ECX + 0x38 + in_EAX * 8) != param_1)) {
    FUN_00073110(in_ECX,param_1,in_EAX);
    FUN_00072940();
    if (*(int *)(in_ECX + 0x38 + in_EAX * 8) != param_1) {
      FUN_0008f6a0(param_1);
    }
    FUN_00072900(param_1,in_EAX);
    *(undefined4 *)(in_ECX + 0x74) = param_2;
    FUN_00072890();
  }
  return;
}
